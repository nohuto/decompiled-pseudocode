/*
 * XREFs of ?put_Clip@Api@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionClip@345@@Z @ 0x1800747A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?AddDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I@Z @ 0x180093FC0 (-AddDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyOb.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_Clip(
        Windows::UI::Composition::Visual::Api *this,
        struct IUnknown *a2)
{
  char *v2; // r14
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // eax
  __int64 v6; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v7; // rsi
  unsigned int v8; // ebx
  CSparseStorage::AllocatedStorage *v9; // rcx
  int v10; // r12d
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // rax
  int v13; // r13d
  DirectComposition::CDevice *v14; // rdi
  _DWORD *v15; // rax
  void (__fastcall ***v16)(_QWORD); // rcx
  unsigned int v17; // r8d
  void *v18; // [rsp+70h] [rbp+8h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v19; // [rsp+80h] [rbp+18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+88h] [rbp+20h] BYREF

  v2 = (char *)this - 168;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionClip::s_InterfaceType,
           &v19);
    v7 = v19;
    v8 = v5;
    v20 = v19;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x9DCu);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v20);
    }
    else
    {
      v9 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)v2 + 14);
      v8 = 0;
      v10 = 0;
      if ( (*((_DWORD *)v9 + 1) & 0x4000000) != 0 )
        v11 = *(struct Microsoft::WRL2::ContextRuntimeClass **)((char *)CSparseStorage::AllocatedStorage::FindSlot(
                                                                          v9,
                                                                          6)
                                                              + 4);
      else
        v11 = 0LL;
      if ( v11 != v7 )
      {
        if ( v7 )
          v10 = *((_DWORD *)v7 + 32);
        v13 = *((_DWORD *)v2 + 32);
        if ( v13 )
        {
          v14 = *(DirectComposition::CDevice **)(*((_QWORD *)v2 + 3) + 456LL);
          DirectComposition::CDevice::BeginKernelCommand(v14, 0x10u, &v18, 0);
          v15 = v18;
          *(_DWORD *)v18 = 13;
          v15[1] = v13;
          v15[2] = 6;
          v15[3] = v10;
          v16 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v14 + 10);
          if ( v16 )
            (**v16)(v16);
        }
        CSparseStorage::SetReference(
          (CSparseStorage *)(v2 + 112),
          6u,
          v7,
          (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
        if ( (*((_DWORD *)v2 + 65) & 0x8000) != 0 )
          Windows::UI::Composition::CompositorCommon::AddDeferredPropertyChangeNotification(
            *((Windows::UI::Composition::CompositorCommon **)v2 + 3),
            (struct Windows::UI::Composition::ProxyObject *)v2,
            v17);
      }
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(v6) = 1;
          (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v19 + 64LL))(
            v19,
            v6);
        }
      }
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return v8;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return 2147483667LL;
  }
}
