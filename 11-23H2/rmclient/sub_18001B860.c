/*
 * XREFs of sub_18001B860 @ 0x18001B860
 * Callers:
 *     sub_180017480 @ 0x180017480 (sub_180017480.c)
 *     sub_1800174A0 @ 0x1800174A0 (sub_1800174A0.c)
 *     sub_1800174C0 @ 0x1800174C0 (sub_1800174C0.c)
 * Callees:
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001B1AC @ 0x18001B1AC (sub_18001B1AC.c)
 */

__int64 __fastcall sub_18001B860(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r10
  int v7; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( sub_180004900(a2, &dword_180026170) || sub_180004900(v3, &dword_1800261B0) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    v7 = sub_18001B1AC(v5, v6);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)v7;
}
