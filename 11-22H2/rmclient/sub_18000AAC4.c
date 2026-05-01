/*
 * XREFs of sub_18000AAC4 @ 0x18000AAC4
 * Callers:
 *     DllEntryPoint @ 0x18000AA80 (DllEntryPoint.c)
 * Callees:
 *     sub_18000A81C @ 0x18000A81C (sub_18000A81C.c)
 *     _XcptFilter @ 0x18000AE74 (_XcptFilter.c)
 *     sub_18000BD28 @ 0x18000BD28 (sub_18000BD28.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000AAC4(HMODULE hLibModule, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // eax

  v3 = a2;
  v5 = 1;
  if ( (unsigned int)a2 <= 1 )
    dword_180032140 = a2;
  if ( (_DWORD)a2 || dword_180032240 )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      goto LABEL_13;
    if ( qword_180032850 )
    {
      v6 = dword_180032244;
      if ( (_DWORD)a2 == 1 )
        v6 = 1;
      dword_180032244 = v6;
      v5 = qword_180032850(hLibModule, a2, a3);
    }
    if ( v5 )
    {
      v5 = sub_18000A81C((__int64)hLibModule, v3, a3);
      if ( v5 )
      {
LABEL_13:
        v5 = sub_18000BD28(hLibModule);
        if ( v3 == 1 && !v5 )
        {
          sub_18000BD28(hLibModule);
          sub_18000A81C((__int64)hLibModule, 0, 0LL);
          if ( qword_180032850 )
            qword_180032850(hLibModule, 0LL, 0LL);
        }
        if ( !v3 || v3 == 3 )
        {
          v5 = sub_18000A81C((__int64)hLibModule, v3, a3);
          if ( qword_180032850 )
          {
            if ( dword_180032244 )
              v5 = qword_180032850(hLibModule, v3, a3);
          }
        }
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v3 <= 1 )
    dword_180032140 = -1;
  return v5;
}
