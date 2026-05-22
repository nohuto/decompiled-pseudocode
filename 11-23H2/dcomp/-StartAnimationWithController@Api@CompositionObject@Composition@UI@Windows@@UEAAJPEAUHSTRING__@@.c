/*
 * XREFs of ?StartAnimationWithController@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimation@345@PEAUIAnimationController@345@@Z @ 0x18005CBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::StartAnimationWithController(
        Windows::UI::Composition::CompositionObject::Api *this,
        HSTRING a2,
        struct IUnknown *a3,
        struct IUnknown *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  char *v5; // rbx
  int v9; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v10; // rdi
  unsigned int v11; // esi
  int v12; // eax
  volatile signed __int32 *v13; // rbp
  int v14; // eax
  __int64 v15; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v17; // [rsp+30h] [rbp-38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+38h] [rbp-30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+40h] [rbp-28h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 7);
  v5 = (char *)this - 80;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v5[32] & 2) != 0 )
  {
    v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v4,
           a3,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
           &v17);
    v10 = v17;
    v11 = v9;
    v19 = v17;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0x4D5u);
    }
    else
    {
      v12 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              (struct Microsoft::WRL2::ContextSession *)v4,
              a4,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::AnimationController::s_InterfaceType,
              &v18);
      v11 = v12;
      if ( v12 < 0 )
      {
        DoStackCaptureDirect(v12, 0x4DBu);
        if ( v18 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v18);
      }
      else
      {
        v13 = (volatile signed __int32 *)v18;
        v14 = (*(__int64 (__fastcall **)(char *, HSTRING, struct Microsoft::WRL2::ContextRuntimeClass *, Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v5 + 160LL))(
                v5,
                a2,
                v10,
                v18);
        v11 = v14;
        if ( v14 >= 0 )
        {
          v11 = 0;
          if ( v13 )
          {
            if ( _InterlockedExchangeAdd(v13 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v15) = 1;
              (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64))(*(_QWORD *)v18 + 64LL))(
                v18,
                v15);
            }
            v10 = v17;
          }
          if ( v10 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v15) = 1;
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v17 + 64LL))(
                v17,
                v15);
            }
          }
          goto LABEL_12;
        }
        DoStackCaptureDirect(v14, 0x4E0u);
        if ( v13 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v13);
      }
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
LABEL_12:
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return v11;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return 2147483667LL;
}
