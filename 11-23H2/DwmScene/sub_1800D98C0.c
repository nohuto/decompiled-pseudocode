/*
 * XREFs of sub_1800D98C0 @ 0x1800D98C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800D98C0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  char result; // al
  _BYTE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = a1 + 67;
  result = sub_180011DF0(a2, a1 + 67);
  if ( result )
  {
    v6 = a1 + 63;
    if ( sub_180011DE0(v3) )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 336LL))(a1);
      *v6 = 0;
    }
    v7 = a2[1];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v8 = a2[1];
    *v3 = *a2;
    v9 = v3[1];
    v3[1] = v8;
    if ( v9 )
      sub_180010530(v9);
    result = sub_180011DE0(v3);
    if ( result )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 440LL))(a1);
      *v6 = 1;
    }
  }
  return result;
}
