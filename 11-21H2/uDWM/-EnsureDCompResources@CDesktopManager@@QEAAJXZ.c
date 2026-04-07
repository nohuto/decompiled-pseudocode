/*
 * XREFs of ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x18005DBDC
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18005DB0C (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180026404 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18005DD64 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnsureDCompResources(CDesktopManager *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // r14
  int v8; // eax
  int v9; // eax
  int ProxyFromShared; // eax
  int v11; // eax
  HANDLE hObject; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+10h]

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 72);
  hObject = 0LL;
  if ( !*((_QWORD *)this + 9) )
  {
    v4 = *((_QWORD *)this + 5);
    v14 = 0xFFFFFFFE00000000uLL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD *))(**(_QWORD **)(v4 + 24) + 352LL))(
           *(_QWORD *)(v4 + 24),
           0xFFFFFFFE00000000uLL,
           v2);
    v6 = FailFastIfAccessDenied(v5);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x66Eu);
    }
    else
    {
      v7 = (_QWORD *)((char *)this + 80);
      v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 216LL))(
             *(_QWORD *)(*((_QWORD *)this + 5) + 24LL),
             &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3,
             (char *)this + 80);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x671u);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 224LL))(
               *(_QWORD *)(*((_QWORD *)this + 5) + 24LL),
               *v7,
               &hObject);
        v1 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x677u);
        }
        else
        {
          ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                              *((_QWORD *)this + 5),
                              (__int64)hObject,
                              (__int64 *)this + 11);
          v1 = ProxyFromShared;
          if ( ProxyFromShared < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyFromShared, 0x679u);
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(*v2, *v7);
            v1 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x67Bu);
            else
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
          }
        }
      }
    }
    if ( hObject )
      CloseHandle(hObject);
  }
  return v1;
}
