/*
 * XREFs of sub_1406360C0 @ 0x1406360C0
 * Callers:
 *     sub_140635EEC @ 0x140635EEC (sub_140635EEC.c)
 *     sub_1409EEF94 @ 0x1409EEF94 (sub_1409EEF94.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140460FAC @ 0x140460FAC (sub_140460FAC.c)
 *     sub_140636A30 @ 0x140636A30 (sub_140636A30.c)
 */

unsigned int __fastcall sub_1406360C0(__int64 a1)
{
  unsigned int result; // eax
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned int v8; // edx
  unsigned int v9; // ecx
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v15; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // [rsp+40h] [rbp+8h] BYREF
  int v21; // [rsp+48h] [rbp+10h]

  v20 = 0;
  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v3 = 0LL;
    v4 = result;
    do
    {
      v5 = 0LL;
      v6 = (*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL;
      v7 = *(_QWORD *)(v3 + qword_140C10DB0);
      v8 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v9, v8);
      v10 = 1 << v9;
      v11 = v9 - 2;
      v21 = v11;
      v12 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v11) + 8LL * (v8 ^ v10) + 8) + 8 * v6;
      result = sub_140460FAC((volatile signed __int32 *)v12, &v20);
      if ( result )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          v5 = v13;
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v12);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v15 = v20;
          if ( v20 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v17 = *((_QWORD *)CurrentPrcb + 4375);
            v15 = v20;
            v18 = ~(unsigned __int16)(-1LL << (v20 + 1));
            v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
            *(_DWORD *)(v17 + 20) &= v18;
            if ( v19 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
        else
        {
          v15 = v20;
        }
        result = v15;
        __writecr8(v15);
        if ( v5 )
          result = sub_140636A30(a1, v5);
      }
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
