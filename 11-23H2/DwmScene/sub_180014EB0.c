/*
 * XREFs of sub_180014EB0 @ 0x180014EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800106DC @ 0x1800106DC (sub_1800106DC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180014EB0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( sub_1800106DC(a2, dword_1801065E0) || sub_1800106DC(v4, dword_1801067C8) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
