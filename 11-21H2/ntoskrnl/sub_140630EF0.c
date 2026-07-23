/*
 * XREFs of sub_140630EF0 @ 0x140630EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14024F664 @ 0x14024F664 (sub_14024F664.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406D45B4 @ 0x1406D45B4 (sub_1406D45B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140630EF0(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 **v2; // r14
  KIRQL v3; // al
  __int64 *v4; // rbx
  unsigned __int64 v5; // rsi
  int v6; // r13d
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  _BYTE *v9; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  _QWORD v18[11]; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1 + 24LL;
  v20 = 0;
  memset(v18, 0, 24);
  v2 = (__int64 **)(v1 + 16);
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
    v4 = *v2;
    v5 = v3;
    if ( *v2 == (__int64 *)v2 )
      break;
    v7 = *v4;
    if ( (__int64 **)v4[1] != v2 || *(__int64 **)(v7 + 8) != v4 )
      __fastfail(3u);
    *v2 = (__int64 *)v7;
    v6 = 1;
    *(_QWORD *)(v7 + 8) = v2;
LABEL_8:
    v8 = v4[3];
    v9 = (_BYTE *)v4[4];
    v4[4] = v8;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v1);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    if ( (unsigned __int64)v9 < v8 )
    {
      do
      {
        *(_QWORD *)((char *)&v18[1] + 4) = 0LL;
        HIDWORD(v18[2]) = 0;
        v18[0] = v9;
        LODWORD(v18[1]) = sub_14024F664(v9, &v20);
        sub_1406D45B4(a1, v18);
        v9 += (unsigned int)(v20 + 1);
      }
      while ( (unsigned __int64)v9 < v8 );
      v2 = (__int64 **)(v1 + 16);
    }
    if ( v6 )
      ExFreePoolWithTag(v4, 0x56777445u);
  }
  v4 = *(__int64 **)(v1 + 8);
  if ( v4[4] < (unsigned __int64)v4[3] )
  {
    v6 = 0;
    goto LABEL_8;
  }
  v4[3] = (__int64)(v4 + 5);
  v4[4] = (__int64)(v4 + 5);
  *(_DWORD *)(v1 + 72) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v1);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v17 = *((_QWORD *)v16 + 4375);
        v14 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v14 )
          result = sub_140418E4C((__int64)v16);
      }
    }
  }
  __writecr8(v5);
  return result;
}
