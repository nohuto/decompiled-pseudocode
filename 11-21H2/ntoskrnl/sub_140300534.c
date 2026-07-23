/*
 * XREFs of sub_140300534 @ 0x140300534
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x14024C270 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeQuerySecurityAttributesToken @ 0x140671A80 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1406A09D0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     sub_140204B30 @ 0x140204B30 (sub_140204B30.c)
 *     sub_1402058C0 @ 0x1402058C0 (sub_1402058C0.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     sub_1403005E0 @ 0x1403005E0 (sub_1403005E0.c)
 *     sub_14030097C @ 0x14030097C (sub_14030097C.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140389ED0 @ 0x140389ED0 (sub_140389ED0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405F56A0 @ 0x1405F56A0 (sub_1405F56A0.c)
 *     sub_1405F5750 @ 0x1405F5750 (sub_1405F5750.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140300534(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  _DWORD *v8; // rdi
  unsigned int v13; // ebx
  volatile LONG *v15; // rax
  volatile LONG *v16; // rsi
  unsigned __int64 v17; // rbp
  _QWORD *v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v24 = 0LL;
  v25 = 0;
  if ( (*(_DWORD *)(a1 + 200) & 0x20000) == 0 && (a5 || (unsigned __int8)sub_14030097C(a1, a3, a4)) )
  {
    if ( (int)sub_1405F56A0(0LL, a1, &v25, &v24) >= 0 )
    {
      v15 = (volatile LONG *)sub_1402058C0(v25);
      v16 = v15;
      if ( v15 )
      {
        v17 = ExAcquireSpinLockShared(v15);
        if ( *((_QWORD *)v16 + 2) )
        {
          v18 = (_QWORD *)sub_140389ED0();
          v8 = v18;
          v13 = v18 ? sub_140204B30(*((_QWORD *)v16 + 2), v18, 0) : -1073741801;
        }
        else
        {
          v13 = -1073741275;
        }
        ExReleaseSpinLockSharedFromDpcLevel(v16);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v21 = *((_QWORD *)CurrentPrcb + 4375);
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
              v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
              *(_DWORD *)(v21 + 20) &= v22;
              if ( v23 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v17);
        if ( v13 != -1073741275 )
        {
          if ( (v13 & 0x80000000) != 0 )
          {
            if ( !v8 )
              return v13;
          }
          else
          {
            if ( !v8 )
              return v13;
            v13 = sub_1403005E0(v8, a3, a4, a6, a7, a8);
          }
          sub_14028AB90(v8);
          ExFreePoolWithTag(v8, 0);
          return v13;
        }
      }
    }
    return (unsigned int)sub_1405F5750(a6, a7, a8);
  }
  else
  {
    return (unsigned int)sub_1403005E0(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  }
}
