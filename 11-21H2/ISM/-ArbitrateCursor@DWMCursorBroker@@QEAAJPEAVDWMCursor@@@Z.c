/*
 * XREFs of ?ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180039258
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x18002D930 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1800392A8 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1801CEC0C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall DWMCursorBroker::ArbitrateCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  int v4; // ecx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  __int64 **v9; // rcx
  __int64 *i; // rax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+24h] [rbp-44h]
  char v16; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v18; // [rsp+78h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a2 + 10);
  if ( (unsigned int)(v4 - 1) > 1 || *((_BYTE *)this + 504) == (v4 == 2) )
    return 0LL;
  *((_BYTE *)this + 504) = v4 == 2;
  v6 = *(_QWORD *)a2;
  LOBYTE(v14) = 10;
  v15 = *(_QWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, char *))(v6 + 48))(a2, &v18);
  v16 = 1;
  v7 = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)&v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (__int64 **)*((_QWORD *)this + 7);
    for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) == (*((_DWORD *)a2 + 10) != 2) + 1 )
      {
        v11 = i[3];
        if ( v11 )
        {
          LOBYTE(v14) = 10;
          v15 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 48LL))(v11, &v18);
          v16 = 0;
          v12 = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)&v14);
          v13 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F7,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\"
                            "dwmcursorbroker.cpp",
              (const char *)(unsigned int)v12,
              v14);
            return v13;
          }
        }
        return 0LL;
      }
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E1,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v7,
    v14);
  return v8;
}
