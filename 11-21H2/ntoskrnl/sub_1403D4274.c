/*
 * XREFs of sub_1403D4274 @ 0x1403D4274
 * Callers:
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1403D4274(__int64 a1)
{
  int v1; // esi
  SIZE_T v3; // r14
  PVOID v4; // rbp
  unsigned __int8 CurrentIrql; // di
  char result; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  v1 = dword_140D06884;
  v3 = 16LL * (unsigned int)dword_140D06884;
  while ( 1 )
  {
    v4 = sub_1402828F0(64, v3, 0x20206D4Du);
    if ( !v4 )
      break;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      *(_DWORD *)(*((_QWORD *)CurrentPrcb + 4375) + 20LL) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    if ( v1 == (_DWORD)dword_140D06884 )
    {
      *(_QWORD *)(a1 + 32) = v4;
      result = CurrentIrql;
      *(_DWORD *)(a1 + 4) = v1;
      *(_DWORD *)a1 = v1;
      return result;
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          v10 = *((_QWORD *)v9 + 4375);
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C(v9);
        }
      }
    }
    __writecr8(CurrentIrql);
    ExFreePoolWithTag(v4, 0);
  }
  *(_DWORD *)(a1 + 52) = -1073741670;
  return 17;
}
