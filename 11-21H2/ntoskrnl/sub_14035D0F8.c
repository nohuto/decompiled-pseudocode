/*
 * XREFs of sub_14035D0F8 @ 0x14035D0F8
 * Callers:
 *     sub_140201DF4 @ 0x140201DF4 (sub_140201DF4.c)
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_14035D00C @ 0x14035D00C (sub_14035D00C.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     sub_14035EE9C @ 0x14035EE9C (sub_14035EE9C.c)
 *     sub_14035EF6C @ 0x14035EF6C (sub_14035EF6C.c)
 *     sub_1403D3170 @ 0x1403D3170 (sub_1403D3170.c)
 *     sub_140574B54 @ 0x140574B54 (sub_140574B54.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_1405757C0 @ 0x1405757C0 (sub_1405757C0.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035D0F8(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // rdx
  struct _KPRCB *v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        result = (unsigned int)(*(_DWORD *)(v5 + 24) - 1);
        *(_DWORD *)(v5 + 24) = result;
        if ( !(_DWORD)result )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  if ( a3 )
  {
    _InterlockedAnd64(a3, 0LL);
    v6 = KeGetCurrentPrcb();
    v7 = *((_QWORD *)v6 + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)v6 + 32) <= 1u )
      {
        result = (unsigned int)(*(_DWORD *)(v7 + 24) - 1);
        *(_DWORD *)(v7 + 24) = result;
        if ( !(_DWORD)result )
          return sub_140418E4C(v6);
      }
    }
  }
  return result;
}
