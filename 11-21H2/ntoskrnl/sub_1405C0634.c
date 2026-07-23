/*
 * XREFs of sub_1405C0634 @ 0x1405C0634
 * Callers:
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_140589518 @ 0x140589518 (sub_140589518.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C00C0 @ 0x1405C00C0 (sub_1405C00C0.c)
 *     sub_1405C0478 @ 0x1405C0478 (sub_1405C0478.c)
 */

__int64 __fastcall sub_1405C0634(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  BOOL v4; // ebp
  unsigned __int64 v5; // r10
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r11
  __int16 v10; // cx
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int128 v18; // [rsp+20h] [rbp-38h]
  ULONG_PTR *v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 188);
  v19 = 0LL;
  result = *(unsigned int *)(a1 + 184);
  *(_DWORD *)(a1 + 196) = 0;
  v4 = 1;
  *(_DWORD *)(a1 + 176) = 0;
  if ( (result & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    v7 = v5 / v2;
    v8 = 0LL;
    v9 = (unsigned int)v2;
    do
    {
      *(_QWORD *)(v8 + *(_QWORD *)(a1 + 16)) = v6;
      v6 += v7;
      v8 += 16LL;
      *(_QWORD *)(v8 + *(_QWORD *)(a1 + 16) - 8) = v7;
      --v9;
    }
    while ( v9 );
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (unsigned int)v2 - 8) += v5 - v7 * (unsigned int)v2;
  }
  else
  {
    v10 = *(_WORD *)(a1 + 154);
    if ( !v10 )
      return result;
    if ( v10 == 1 )
      v4 = (result & 2) != 0;
  }
  while ( 1 )
  {
    *(_DWORD *)(a1 + 176) = 0;
    v18 = *(_OWORD *)(a1 + 200);
    if ( v4 )
    {
      result = KeGenericCallDpc((__int64)sub_1405C02A0, a1);
    }
    else
    {
      sub_1405C0478(a1, &v19);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      sub_1405C00C0(a1, &v19);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    *(_OWORD *)(a1 + 200) = v18;
    if ( !*(_DWORD *)(a1 + 196) )
      break;
    *(_DWORD *)(a1 + 196) = 0;
  }
  return result;
}
