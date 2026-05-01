/*
 * XREFs of ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180793650
 * Callers:
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1805C9848 (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1807937F0 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_EvictItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rsi
  __int64 *v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v20 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v3 + 96LL);
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v20, &v21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
  v9 = v7(v3, a2, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 283LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_13;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20) == 1 )
  {
    v12 = v20;
    v21 = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 48LL);
    v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v21, v18);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v14);
    v15 = v13(v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v14);
    v10 = v15;
    if ( v15 >= 0 )
    {
      v15 = CAppLayoutOperation::_EvictView(a1, v21, a3);
      v10 = v15;
      if ( v15 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
        goto LABEL_13;
      }
      v16 = 288LL;
    }
    else
    {
      v16 = 287LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 256LL))(*(_QWORD *)(a1 + 40), a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 293LL;
    goto LABEL_12;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
  return v10;
}
