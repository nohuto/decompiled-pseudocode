/*
 * XREFs of sub_180093ED0 @ 0x180093ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180093ED0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  if ( *(_BYTE *)(a1 + 232) )
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 184) + 16LL))(*(_QWORD *)(a1 + 184), a2, a3);
  else
    sub_18001246C(a2, a5);
  return a2;
}
