/*
 * XREFs of ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x1800FA6C0
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800FBCE0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180002F48 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z @ 0x1800FAC34 (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800FB164 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 */

char __fastcall Win32kInterop::ProcessInterceptMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  char v8; // al
  const char *v9; // r9
  bool v10; // zf
  int v12[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h]
  int v14; // [rsp+38h] [rbp-C8h]
  int v15; // [rsp+48h] [rbp-B8h]
  char v16; // [rsp+51h] [rbp-AFh]
  __int16 v17; // [rsp+7Ah] [rbp-86h]
  __int16 v18; // [rsp+7Ch] [rbp-84h]
  __int16 v19; // [rsp+7Eh] [rbp-82h]
  int v20; // [rsp+84h] [rbp-7Ch]
  int v21; // [rsp+88h] [rbp-78h]
  char v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+94h] [rbp-6Ch]
  char v24; // [rsp+98h] [rbp-68h]
  char v25; // [rsp+9Ah] [rbp-66h]
  char v26; // [rsp+9Bh] [rbp-65h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v3 = Win32kInterop::s_pInterop;
  LOBYTE(v6) = (unsigned __int8)memset_0(v12, 0, 0x218uLL);
  v14 = 536;
  if ( !a2 )
  {
    v7 = *(_DWORD *)a3;
    if ( !*(_DWORD *)a3 )
      v7 = -1;
    InputETW::Win32kInterop::ReceivedInterceptMessage(v7);
    if ( v7 == -1 || (LOBYTE(v6) = Win32kInterop::IsDeviceAttached(v3, v7, 1), (_BYTE)v6) )
    {
      v12[2] = *(_DWORD *)(a3 + 8);
      v13 = *(_QWORD *)(a3 + 16);
      v17 = *(_WORD *)(a3 + 24);
      v18 = *(_WORD *)(a3 + 26);
      v19 = *(_WORD *)(a3 + 28);
      v20 = *(_DWORD *)(a3 + 32);
      v21 = *(_DWORD *)(a3 + 36);
      v8 = *(_BYTE *)(a3 + 40) & 1;
      v12[0] = 4096;
      v22 = v8;
      v12[1] = v7;
      v16 = 1;
      v23 = 4;
      InputTraceLogging::ISM::ReceiveInterceptMessage((const struct RawMouseInputInfo *)v12);
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v3 + 7) + 24LL))(*((_QWORD *)v3 + 7), v12);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3DA,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v6,
          v12[0]);
      switch ( v23 )
      {
        case 1:
          *(_DWORD *)(a3 + 48) = 0;
          break;
        case 2:
          v10 = v25 == 0;
          *(_DWORD *)(a3 + 48) = 2;
          if ( !v10 )
            *(_DWORD *)(a3 + 68) = 16;
          v10 = v24 == 0;
          *(_WORD *)(a3 + 60) = v17;
          *(_DWORD *)(a3 + 52) = v20;
          *(_DWORD *)(a3 + 56) = v21;
          LOBYTE(v6) = v15;
          *(_DWORD *)(a3 + 64) = v15;
          if ( !v10 )
            *(_DWORD *)(a3 + 68) |= 0x20u;
          if ( v26 )
            *(_DWORD *)(a3 + 68) |= 0x40u;
          break;
        case 4:
          *(_DWORD *)(a3 + 48) = 1;
          break;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x401,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
            v9);
      }
    }
  }
  return v6;
}
