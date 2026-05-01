/*
 * XREFs of sub_18001A920 @ 0x18001A920
 * Callers:
 *     sub_18001B990 @ 0x18001B990 (sub_18001B990.c)
 * Callees:
 *     sub_1800017F4 @ 0x1800017F4 (sub_1800017F4.c)
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001A920(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned int v9; // ebx
  int v10; // eax

  *a3 = 0LL;
  if ( !sub_180004900(a2, &dword_180026170) )
  {
    if ( sub_180004900(v3, dword_180026190) )
    {
      *v6 = v7;
      v9 = 0;
    }
    else
    {
      v10 = sub_1800017F4(v7 + 8, v8);
      v9 = -2147467262;
      if ( v10 == -2147467262 )
        v10 = -2147467262;
      if ( v10 == -2147467262 )
        return v9;
      v9 = v10;
      if ( v10 < 0 )
        return v9;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    return v9;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
