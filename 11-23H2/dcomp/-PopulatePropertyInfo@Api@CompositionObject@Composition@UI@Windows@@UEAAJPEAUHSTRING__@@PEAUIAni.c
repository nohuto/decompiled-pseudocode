/*
 * XREFs of ?PopulatePropertyInfo@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@345@@Z @ 0x18001EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::PopulatePropertyInfo(
        Windows::UI::Composition::CompositionObject::Api *this,
        HSTRING a2,
        struct IUnknown *a3)
{
  char *v3; // rsi
  Microsoft::WRL2::ContextSession *v5; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this - 72;
  v5 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 6);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v3[32] & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v5,
         a3,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::AnimationPropertyInfo::s_InterfaceType,
         &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 1209;
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(char *, HSTRING))(*(_QWORD *)v3 + 168LL))(v3, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 1213;
LABEL_10:
    DoStackCaptureDirect(v7, v10);
    goto LABEL_5;
  }
  v8 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v11);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
