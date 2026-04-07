/*
 * XREFs of ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x180048EBC
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180048E1C (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ??$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18001F324 (--$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetP.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180049044 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
  v2 = (_QWORD *)((char *)this + 80);
  hObject = 0LL;
  if ( !*((_QWORD *)this + 10) )
  {
    v4 = *((_QWORD *)this + 6);
    v14 = 0xFFFFFFFE00000000uLL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD *))(**(_QWORD **)(v4 + 32) + 352LL))(
           *(_QWORD *)(v4 + 32),
           0xFFFFFFFE00000000uLL,
           v2);
    v6 = FailFastIfAccessDenied(v5);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x60Bu, 0LL);
    }
    else
    {
      v7 = (_QWORD *)((char *)this + 88);
      v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 216LL))(
             *(_QWORD *)(*((_QWORD *)this + 6) + 32LL),
             &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3,
             (char *)this + 88);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x60Eu, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 224LL))(
               *(_QWORD *)(*((_QWORD *)this + 6) + 32LL),
               *v7,
               &hObject);
        v1 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x614u, 0LL);
        }
        else
        {
          ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualTargetProxy>(
                              *((_QWORD *)this + 6),
                              (__int64)hObject,
                              (__int64 *)this + 12);
          v1 = ProxyFromShared;
          if ( ProxyFromShared < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProxyFromShared, 0x616u, 0LL);
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(*v2, *v7);
            v1 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x618u, 0LL);
            else
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
          }
        }
      }
    }
    if ( hObject )
      CloseHandle(hObject);
  }
  return v1;
}
