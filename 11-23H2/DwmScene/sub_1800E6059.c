/*
 * XREFs of sub_1800E6059 @ 0x1800E6059
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E6059(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  size_t v4; // r8

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 8LL))(*(_QWORD *)(a2 + 80));
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  sub_180011BA0((void **)(a2 + 128), v3, v4);
  return 0LL;
}
