/*
 * XREFs of ?ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z @ 0x1801238E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180123AA4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180123BAC (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewPresentationMediator::ShownWindowHidden(ViewPresentationMediator *this, HWND a2)
{
  CGITRegistrationList *v3; // rbx
  unsigned int v4; // ecx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+38h] [rbp-38h]
  unsigned int v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct IObjectArray *v21; // [rsp+80h] [rbp+10h] BYREF

  v21 = 0LL;
  v3 = (ViewPresentationMediator *)((char *)this + 88);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  if ( (int)CGITRegistrationList::GetCallbackArray(v3, &v21) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
      (__int64)&v12,
      (__int64)v21);
    v14 = 0;
    v15 = 0LL;
    v16 = &v12;
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v14);
    v17 = v13;
    v18 = 0LL;
    v19 = &v12;
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v17);
LABEL_3:
    v4 = v14;
    v5 = v16;
    while ( v4 != v17 || v5 != v19 )
    {
      v6 = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v6 + 48LL))(v6, a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v4 = ++v14;
      v7 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v4 = v14;
      }
      while ( 1 )
      {
        v5 = v16;
        if ( v4 >= *((_DWORD *)v16 + 2) )
          break;
        v8 = *v16;
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)*v16 + 32LL);
        v10 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v4 = v14;
        }
        v11 = v9(v8, v4, &GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc, &v15);
        if ( v11 >= 0 )
          goto LABEL_3;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v11);
        v4 = ++v14;
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
}
