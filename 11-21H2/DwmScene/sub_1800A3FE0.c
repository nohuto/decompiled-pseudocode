/*
 * XREFs of sub_1800A3FE0 @ 0x1800A3FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800A3FE0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // rax

  if ( *(_BYTE *)(a1 + 232) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, _QWORD *))(**(_QWORD **)(a1 + 184) + 16LL))(
      *(_QWORD *)(a1 + 184),
      a2,
      a3,
      a4,
      a5);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v6 = a5[1];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *a2 = *a5;
    a2[1] = a5[1];
  }
  return a2;
}
