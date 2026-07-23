/*
 * XREFs of sub_14022ED94 @ 0x14022ED94
 * Callers:
 *     sub_14022EBF8 @ 0x14022EBF8 (sub_14022EBF8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022EEF4 @ 0x14022EEF4 (sub_14022EEF4.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_140355EE8 @ 0x140355EE8 (sub_140355EE8.c)
 *     sub_1403580A8 @ 0x1403580A8 (sub_1403580A8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_14022ED94(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r8
  bool v3; // zf
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  __int128 v10; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v11[8]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v13[16]; // [rsp+128h] [rbp+20h] BYREF

  v13[1] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v11[6] = BugCheckParameter2;
  LODWORD(BugCheckParameter2[10]) = 275;
  BugCheckParameter2[2] = 8LL;
  BugCheckParameter2[18] = (ULONG_PTR)v11;
  BugCheckParameter2[4] = (ULONG_PTR)&BugCheckParameter2[3];
  BugCheckParameter2[3] = (ULONG_PTR)&BugCheckParameter2[3];
  BugCheckParameter2[13] = (ULONG_PTR)sub_1405CE8D0;
  BugCheckParameter2[14] = (ULONG_PTR)BugCheckParameter2;
  memset(v11, 0, 40);
  v11[5] = BugCheckParameter3;
  BugCheckParameter2[5] = 0LL;
  HIDWORD(BugCheckParameter2[9]) = 0;
  LOWORD(BugCheckParameter2[9]) = 0;
  BugCheckParameter2[17] = 0LL;
  BugCheckParameter2[12] = 0LL;
  sub_14022EEF4(v11, (unsigned int)dword_140C0C638);
  v10 = 0LL;
  memset(v13, 0, sizeof(v13));
  BYTE8(v10) = 0;
  *(_QWORD *)&v10 = v13;
  if ( !BugCheckParameter3 )
  {
    v3 = (unsigned __int8)sub_140355EE8(v13) == 0;
    goto LABEL_3;
  }
  if ( *(_QWORD *)(BugCheckParameter3 + 96) && (unsigned __int8)sub_14042A5E0(13LL, &v10, v2) )
  {
    v3 = BYTE8(v10) == 0;
LABEL_3:
    if ( v3 )
      return sub_1403580A8((ULONG_PTR)BugCheckParameter2);
    goto LABEL_4;
  }
  if ( !*(_QWORD *)(BugCheckParameter3 + 112) || !(unsigned __int8)sub_14042A5E0(10LL, &v10, v2) )
    sub_1405CAE6C(0x605uLL, 0xDuLL, BugCheckParameter3, 0LL);
  if ( BYTE8(v10) )
  {
    if ( (unsigned int)(v13[0] - 7) > 1 )
      sub_1405CAE6C(0x612uLL, BugCheckParameter3, 0LL, 0LL);
LABEL_4:
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C23CE0);
    BugCheckParameter2[19] = (ULONG_PTR)v13;
    KeReleaseSpinLockFromDpcLevel(&qword_140C23CE0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v3 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v3 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    sub_140354CBC(BugCheckParameter3);
  }
  return sub_1403580A8((ULONG_PTR)BugCheckParameter2);
}
