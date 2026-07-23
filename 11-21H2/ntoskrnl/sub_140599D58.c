/*
 * XREFs of sub_140599D58 @ 0x140599D58
 * Callers:
 *     sub_14059A568 @ 0x14059A568 (sub_14059A568.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140599764 @ 0x140599764 (sub_140599764.c)
 */

__int64 __fastcall sub_140599D58(__int64 a1, int a2)
{
  volatile LONG *v2; // rbp
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v14; // r9
  int v15; // edx
  int v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = a2;
  v2 = (volatile LONG *)(a1 + 232);
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 232));
  v5 = a1 + 256;
  v6 = v4;
  v7 = (*(_BYTE *)(a1 + 264) & 1) == 0;
  v8 = *(_QWORD *)(a1 + 256);
  if ( !v7 && v8 )
    v8 ^= v5;
  v9 = *(_BYTE *)(v5 + 8) & 1;
  if ( !v8 )
    goto LABEL_15;
  do
  {
    v10 = sub_140599764(&v17, v8);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v8;
    }
    if ( v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  while ( v8 );
  if ( !v8 )
LABEL_15:
    __int2c();
  ExReleaseSpinLockSharedFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v7 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v8;
}
