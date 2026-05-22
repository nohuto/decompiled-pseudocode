/*
 * XREFs of ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x18002D930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x18002DA20 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180039258 (-ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800BDE00 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801CE790 (-GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::SetPosition(DWMCursor *this, unsigned int a2, unsigned int a3)
{
  struct IDCompositionDevice *v6; // rbx
  __int64 v7; // rcx
  const char *v8; // r9
  int v9; // ebx
  int v10; // r15d
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  DWMCursorBroker *v15; // rbx
  int DCompDevice; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IDCompositionDevice *v21; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+40h] BYREF

  v6 = (struct IDCompositionDevice *)*((unsigned int *)this + 10);
  v7 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 8) != 0 && (*(_QWORD *)(v7 + 24) & 8LL) == *(_QWORD *)(v7 + 24) )
  {
    v22 = a3;
    v23 = a2;
    v21 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (unsigned int)&unk_180207359,
      0,
      0,
      (__int64)&v21,
      (__int64)&v23,
      (__int64)&v22);
  }
  v9 = *((_DWORD *)this + 20);
  v10 = *((_DWORD *)this + 21);
  *((_DWORD *)this + 20) = a2;
  *((_DWORD *)this + 21) = a3;
  if ( *((_DWORD *)this + 10) == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2, a3);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v8);
  if ( *(_BYTE *)ISMTestMode::s_instance || !byte_180241FA4 && v9 == a2 && v10 == a3 )
    goto LABEL_10;
  if ( *((_QWORD *)this + 7) )
  {
    v21 = 0LL;
    v15 = (DWMCursorBroker *)*((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
    DCompDevice = DWMCursorBroker::GetDCompDevice(v15, &v21);
    v13 = DCompDevice;
    if ( DCompDevice >= 0 )
    {
      DCompDevice = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 40LL))(
                      *((_QWORD *)this + 7),
                      2LL);
      v13 = DCompDevice;
      if ( DCompDevice >= 0 )
      {
        DCompDevice = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 7) + 40LL))(
                        *((_QWORD *)this + 7),
                        2LL,
                        1LL);
        v13 = DCompDevice;
        if ( DCompDevice >= 0 )
        {
          DCompDevice = (*(__int64 (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)v21 + 24LL))(v21);
          v13 = DCompDevice;
          if ( DCompDevice >= 0 )
          {
            byte_180241FA4 = 0;
            if ( (unsigned int)(*((_DWORD *)this + 10) - 1) <= 1 )
            {
              v18 = DWMCursorBroker::ArbitrateCursor(*((DWMCursorBroker **)this + 4), this);
              if ( v18 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x111,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\l"
                                "ib\\dwmcursor.cpp",
                  (const char *)(unsigned int)v18,
                  v19);
            }
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
            goto LABEL_8;
          }
          v17 = 265LL;
        }
        else
        {
          v17 = 263LL;
        }
      }
      else
      {
        v17 = 262LL;
      }
    }
    else
    {
      v17 = 261LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)DCompDevice,
      v19);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
    return v13;
  }
LABEL_8:
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
    byte_180241FA4 = 0;
  }
LABEL_10:
  v12 = DWMCursor::CheckAndUpdateRasterizationScale(this, 1);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11F,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v12,
    v19);
  return v13;
}
