/*
 * XREFs of sub_1800D0810 @ 0x1800D0810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall sub_1800D0810(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 896LL))(v1) == 0;
  return v2;
}
