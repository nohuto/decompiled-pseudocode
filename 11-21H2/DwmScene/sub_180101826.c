/*
 * XREFs of sub_180101826 @ 0x180101826
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180101826(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  size_t v4; // r8

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 104) + 8LL))(*(_QWORD *)(a2 + 104));
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  sub_180012190((__int64 *)(a2 + 112), v3, v4);
  return 0LL;
}
