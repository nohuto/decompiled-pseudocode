/*
 * XREFs of sub_180039428 @ 0x180039428
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_1800265A8 @ 0x1800265A8 (sub_1800265A8.c)
 *     sub_1800266EC @ 0x1800266EC (sub_1800266EC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180039428(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 && *(_DWORD *)(v3 + 8) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( *(_QWORD *)(a1 + 120) )
    {
      *a2 = *(_QWORD *)(a1 + 112);
      v4 = *(_QWORD *)(a1 + 120);
      a2[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    }
  }
  else
  {
    sub_180011C50(a1 + 72, &v8);
    if ( sub_180011DE0(&v8) && (unsigned int)sub_1800266EC(v8) )
    {
      v5 = sub_1800265A8(v8);
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 184LL))(v5);
      sub_180015604(a2, v6);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    if ( v9 )
      sub_180010530(v9);
  }
  return a2;
}
