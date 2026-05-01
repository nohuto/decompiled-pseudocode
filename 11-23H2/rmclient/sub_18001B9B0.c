/*
 * XREFs of sub_18001B9B0 @ 0x18001B9B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001B9B0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( sub_180004900(a2, &dword_180026170) || sub_180004900(v5, v4) )
  {
    *v6 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
