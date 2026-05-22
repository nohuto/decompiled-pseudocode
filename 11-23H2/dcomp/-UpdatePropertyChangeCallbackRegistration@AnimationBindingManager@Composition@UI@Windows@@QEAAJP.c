/*
 * XREFs of ?UpdatePropertyChangeCallbackRegistration@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@0PEAUICompositionPropertyChangedListenerPartner@234@IPEAI@Z @ 0x180070598
 * Callers:
 *     ?ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionPropertyChangedListenerPartner@234@W4PropertyChangeNotificationOption@1234@@Z @ 0x18006DD68 (-ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionProp.c)
 *     ?SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x18006FFC0 (-SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSIO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectPropertyReference@234@PEAI@Z @ 0x180071C28 (-RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectProper.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationBindingManager::UpdatePropertyChangeCallbackRegistration(
        struct _RTL_GENERIC_TABLE *this,
        struct Windows::UI::Composition::ProxyObject *a2,
        struct Windows::UI::Composition::ProxyObject *a3,
        struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v9; // r14
  unsigned int v10; // r15d
  bool v11; // zf
  struct _RTL_GENERIC_TABLE *v12; // r12
  PVOID v13; // rax
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  PVOID inserted; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v19; // rcx
  _DWORD *v20; // rax
  Microsoft::WRL2::NestableRuntimeClass *v21; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v22; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int8 v25[8]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v28[2]; // [rsp+38h] [rbp-38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v29[2]; // [rsp+40h] [rbp-30h]
  unsigned __int64 Buffer; // [rsp+50h] [rbp-20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v31[2]; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int NewElement; // [rsp+A8h] [rbp+38h] BYREF
  unsigned int v34; // [rsp+ACh] [rbp+3Ch]

  if ( a2 )
  {
    v9 = a5;
    v10 = *((_DWORD *)a2 + 32);
    if ( a5 >= 0x20 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x463,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationbindingmanager.cpp",
        (const char *)a4);
    if ( a4 )
    {
      v27 = 0;
      v11 = LODWORD(this[4].InsertOrderList.Flink) == 0;
      *(_OWORD *)v29 = 0LL;
      if ( !v11 )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      v12 = this + 2;
      v26 = __PAIR64__(a5, v10);
      Buffer = __PAIR64__(a5, v10);
      v28[0] = v10;
      v28[1] = a5;
      *(_OWORD *)v31 = 0LL;
      v13 = RtlLookupElementGenericTable(this + 2, &Buffer);
      v14 = v31[1];
      inserted = v13;
      if ( v31[1] )
      {
        v31[1] = 0LL;
        (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v16 = v31[0];
      if ( v31[0] )
      {
        v31[0] = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v16);
      }
      if ( !inserted )
      {
        LOBYTE(NewElement) = 0;
        inserted = RtlInsertElementGenericTable(v12, v28, 0x18u, (PBOOLEAN)&NewElement);
        if ( !inserted )
          Microsoft::WRL2::FailFast::OutOfMemory(v17);
      }
      if ( *((struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner **)inserted + 2) != a4 )
      {
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *))(*(_QWORD *)a4 + 8LL))(a4);
        v18 = *((_QWORD *)inserted + 2);
        *((_QWORD *)inserted + 2) = a4;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( *((struct Windows::UI::Composition::ProxyObject **)inserted + 1) != a3 )
      {
        if ( a3 && _InterlockedIncrement((volatile signed __int32 *)a3 + 4) == 1 )
          (*(void (__fastcall **)(struct Windows::UI::Composition::ProxyObject *))(*(_QWORD *)a3 + 80LL))(a3);
        v19 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)inserted + 1);
        *((_QWORD *)inserted + 1) = a3;
        if ( v19 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v19);
      }
      LODWORD(v26) = v10;
      v20 = RtlLookupElementGenericTable(this + 3, &v26);
      if ( !v20 )
      {
        v25[0] = 0;
        v27 = v10;
        v20 = RtlInsertElementGenericTable(this + 3, &v27, 8u, v25);
        if ( !v20 )
          Microsoft::WRL2::FailFast::OutOfMemory(v24);
        v20[1] = 0;
      }
      v20[1] |= 1 << v9;
      *a6 = v20[1];
      v21 = v29[1];
      if ( v29[1] )
      {
        v29[1] = 0LL;
        (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = v29[0];
      if ( v29[0] )
      {
        v29[0] = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v22);
      }
    }
    else
    {
      NewElement = *((_DWORD *)a2 + 32);
      v34 = a5;
      Windows::UI::Composition::AnimationBindingManager::RemovePropertyChangeCallback(this, &NewElement, a6);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationbindingmanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
