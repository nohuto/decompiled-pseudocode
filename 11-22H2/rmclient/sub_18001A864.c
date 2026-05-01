/*
 * XREFs of sub_18001A864 @ 0x18001A864
 * Callers:
 *     sub_18001B980 @ 0x18001B980 (sub_18001B980.c)
 * Callees:
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001B174 @ 0x18001B174 (sub_18001B174.c)
 */

__int64 __fastcall sub_18001A864(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // r10

  *a3 = 0LL;
  if ( !sub_180004900(a2, &dword_180026170) && !sub_180004900(v3, &dword_1800261B0) )
  {
    if ( sub_180004900(v6, &xmmword_1800266B8) || sub_180004900(v7, &xmmword_180026150) )
    {
      *v8 = v9;
      v10 = 0;
    }
    else
    {
      v10 = sub_18001B174(v9 + 8, v11);
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)v10;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
