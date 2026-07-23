/*
 * XREFs of sub_1403B0670 @ 0x1403B0670
 * Callers:
 *     sub_140521260 @ 0x140521260 (sub_140521260.c)
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 *     sub_140A54BA0 @ 0x140A54BA0 (sub_140A54BA0.c)
 *     sub_140A62458 @ 0x140A62458 (sub_140A62458.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403B0D74 @ 0x1403B0D74 (sub_1403B0D74.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403B0670(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // di
  bool v3; // zf
  int v5; // ecx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  unsigned int LockArray_high; // edi
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  char v14; // bl
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  struct _KPRCB *v17; // r9
  __int64 v18; // r8
  __int128 v19; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h]
  _OWORD v21[3]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v22; // [rsp+88h] [rbp+2Fh]
  __int64 v23; // [rsp+C0h] [rbp+67h] BYREF
  int v24; // [rsp+C8h] [rbp+6Fh] BYREF
  int v25; // [rsp+CCh] [rbp+73h]

  v1 = qword_140C54A88;
  v23 = 0LL;
  v2 = 0;
  DWORD1(v19) = 0;
  v22 = 0LL;
  v3 = *(_DWORD *)(qword_140C54A88 + 224) == 2;
  memset(v21, 0, sizeof(v21));
  if ( v3 )
  {
    LODWORD(v23) = *(_DWORD *)(qword_140C54A88 + 240);
    HIDWORD(v23) = -3;
    if ( !byte_140C54A9A )
    {
      result = (__int64)sub_1402520D4((unsigned int *)&v23);
      if ( !result )
        return result;
      byte_140C54A9A = 1;
    }
    *(_QWORD *)&v21[1] = 0x1FFFFFFFFLL;
    memset((char *)&v21[1] + 12, 0, 20);
    *(_QWORD *)&v21[0] = 1LL;
    *((_QWORD *)&v21[0] + 1) = 0x1000000001LL;
    DWORD2(v21[1]) = 3;
    LODWORD(v22) = 254;
    HIDWORD(v22) = sub_1403B0D74(v1, 254LL);
    if ( !a1 )
      v2 = sub_140252344(&qword_140C4BEE8);
    sub_140251FD8(v1, (__int64)&v23, (__int64)v21);
    if ( !a1 )
    {
      KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << (v2 + 1));
            v3 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v3 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v2);
    }
  }
  v5 = *(_DWORD *)(v1 + 224);
  result = (unsigned int)(v5 - 3);
  if ( (result & 0xFFFFFFFC) == 0 && v5 != 5 )
  {
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v12 = qword_140C4E210 + ((unsigned __int64)LockArray_high << 6);
    v13 = *(unsigned int *)(v12 + 40);
    if ( (_DWORD)v13 )
    {
      result = sub_140252380(v13, &v23);
      if ( (int)result >= 0 )
      {
        v24 = -1;
        v14 = *(_BYTE *)(v12 + 14);
        v19 = 0LL;
        LODWORD(v19) = 6;
        DWORD2(v19) = LockArray_high;
        v20 = 0LL;
        v25 = 1;
        v15 = sub_140252344(&qword_140C4BEE8);
        LOBYTE(v16) = 15;
        sub_1403B07C8(&v23, 254LL, v16, v14 != 0, 1, &v19, &v24);
        KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
        result = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              v18 = *((_QWORD *)v17 + 4375);
              v3 = ((unsigned int)result & *(_DWORD *)(v18 + 20)) == 0;
              *(_DWORD *)(v18 + 20) &= result;
              if ( v3 )
                result = sub_140418E4C(v17);
            }
          }
        }
        __writecr8(v15);
      }
    }
  }
  return result;
}
