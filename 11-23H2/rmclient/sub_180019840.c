/*
 * XREFs of sub_180019840 @ 0x180019840
 * Callers:
 *     sub_180016EE0 @ 0x180016EE0 (sub_180016EE0.c)
 *     sub_180016F00 @ 0x180016F00 (sub_180016F00.c)
 *     sub_180016F20 @ 0x180016F20 (sub_180016F20.c)
 *     sub_180016F40 @ 0x180016F40 (sub_180016F40.c)
 *     sub_180016F60 @ 0x180016F60 (sub_180016F60.c)
 * Callees:
 *     sub_180003C70 @ 0x180003C70 (sub_180003C70.c)
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019840(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
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
    v7 = sub_180003C70(v5, v6);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)v7;
}
