/*
 * XREFs of ?SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x18006FFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18005A68C (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVVisual@234@@Detail.c)
 *     ?SetPropertyChangedListener@ComponentTransform3D@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@PEAVProxyObject@234@@Z @ 0x180070280 (-SetPropertyChangedListener@ComponentTransform3D@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EXP.c)
 *     ?UpdatePropertyChangeCallbackRegistration@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@0PEAUICompositionPropertyChangedListenerPartner@234@IPEAI@Z @ 0x180070598 (-UpdatePropertyChangeCallbackRegistration@AnimationBindingManager@Composition@UI@Windows@@QEAAJP.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I_N@Z @ 0x180072020 (-RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProx.c)
 *     ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180072B5C (--0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::SetPropertyChangedListener(
        __int64 a1,
        int a2,
        struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *a3)
{
  __int64 v3; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v7; // r15d
  __int64 v8; // rbp
  int v9; // esi
  int v10; // esi
  __int64 v11; // rbx
  Windows::UI::Composition::AnimationBindingManager *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbp
  __int64 i; // rcx
  int v17; // eax
  int v19; // esi
  int v20; // eax
  void *v21; // rbx
  unsigned __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v27; // [rsp+60h] [rbp+8h] BYREF
  struct Windows::UI::Composition::CompositionObject *v28; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1 - 208;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 208 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v3 + 32) & 2) == 0 )
  {
    v14 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_24;
  }
  v7 = 0;
  v8 = v3;
  if ( a2 > 7 )
  {
    if ( a2 != 8 && a2 != 10 && a2 != 11 && (unsigned int)(a2 - 12) > 1 )
    {
LABEL_44:
      v14 = -2147024809;
      v24 = 2215LL;
LABEL_49:
      v25 = v14;
      goto LABEL_50;
    }
  }
  else if ( a2 != 7 )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      v10 = 1;
      v7 = 6;
      *(_DWORD *)(v3 + 260) = *(_DWORD *)(v3 + 260) & 0xFFFF7FFF | (a3 != 0LL ? 0x8000 : 0);
      goto LABEL_7;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v7 = 27;
LABEL_7:
      v11 = *(_QWORD *)(v8 + 24);
      LODWORD(v27) = 0;
      v12 = *(Windows::UI::Composition::AnimationBindingManager **)(v11 + 832);
      if ( !v12 )
      {
        v12 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
        if ( v12 )
          v12 = (Windows::UI::Composition::AnimationBindingManager *)Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v12);
        *(_QWORD *)(v11 + 832) = v12;
        if ( !v12 )
          Microsoft::WRL2::FailFast::OutOfMemory(v22);
      }
      v13 = Windows::UI::Composition::AnimationBindingManager::UpdatePropertyChangeCallbackRegistration(
              v12,
              (struct Windows::UI::Composition::ProxyObject *)v8,
              (struct Windows::UI::Composition::ProxyObject *)v3,
              a3,
              v7,
              (unsigned int *)&v27);
      v14 = v13;
      if ( v13 >= 0 )
      {
        if ( v10 )
        {
          if ( !a3 )
            Windows::UI::Composition::CompositorCommon::RemoveDeferredPropertyChangeNotification(
              *(Windows::UI::Composition::CompositorCommon **)(v8 + 24),
              (struct Windows::UI::Composition::ProxyObject *)v8,
              v7,
              0);
        }
        else
        {
          DirectComposition::CDevice::ResourceSetIntegerProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(v8 + 24) + 456LL),
            *(_DWORD *)(v8 + 128),
            0xFFFFu,
            (unsigned int)v27);
        }
        goto LABEL_23;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x312,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
        (const char *)(unsigned int)v13);
      v24 = 2224LL;
      goto LABEL_49;
    }
    v19 = v10 - 1;
    if ( !v19 )
    {
      v10 = 0;
      v7 = 25;
      goto LABEL_7;
    }
    v10 = v19 - 1;
    if ( !v10 )
    {
      v7 = 28;
      goto LABEL_7;
    }
    v23 = v10 - 1;
    if ( !v23 )
    {
      v10 = 0;
      v7 = 29;
      goto LABEL_7;
    }
    if ( v23 == 1 )
    {
      v10 = 0;
      v7 = 30;
      goto LABEL_7;
    }
    goto LABEL_44;
  }
  v15 = v3 + 112;
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 112) + 4LL) & 0x1000000) == 0 )
  {
    v27 = 0LL;
    v28 = (struct Windows::UI::Composition::CompositionObject *)v3;
    v20 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::Visual *>(
            (Windows::UI::Composition::ComponentTransform3D **)&v27,
            &v28);
    v14 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x790,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)v20);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(&v27);
      v24 = 2200LL;
      goto LABEL_49;
    }
    v21 = v27;
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(v3 + 24) + 456LL),
      *(_DWORD *)(v3 + 128),
      3,
      *((_DWORD *)v27 + 32));
    CSparseStorage::SetReference(
      (CSparseStorage *)(v3 + 112),
      8u,
      v21,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(&v27);
  }
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 4LL) & 0x1000000) != 0 )
  {
    for ( i = *(_QWORD *)v15 + 12LL; (*(_DWORD *)i & 0x7F000000) != 0x8000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v8 = *(_QWORD *)(i + 4);
  }
  else
  {
    v8 = 0LL;
  }
  v17 = Windows::UI::Composition::ComponentTransform3D::SetPropertyChangedListener(v8, (unsigned int)a2, a3, v3);
  v14 = v17;
  if ( v17 < 0 )
  {
    v25 = (unsigned int)v17;
    v24 = 2208LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)v25);
    DoStackCaptureDirect(v14, 0x9Cu);
    goto LABEL_24;
  }
  v10 = 0;
  if ( v8 == v3 )
    goto LABEL_7;
LABEL_23:
  v14 = 0;
LABEL_24:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v14;
}
