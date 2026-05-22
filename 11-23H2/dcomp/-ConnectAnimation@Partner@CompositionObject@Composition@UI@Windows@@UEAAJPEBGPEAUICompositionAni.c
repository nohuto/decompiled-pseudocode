/*
 * XREFs of ?ConnectAnimation@Partner@CompositionObject@Composition@UI@Windows@@UEAAJPEBGPEAUICompositionAnimation@345@PEAPEAUICompositionAnimatorPartner@345@@Z @ 0x18005DA30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Partner::ConnectAnimation(
        Windows::UI::Composition::CompositionObject::Partner *this,
        const unsigned __int16 *a2,
        struct IUnknown *a3,
        struct Windows::UI::Composition::ICompositionAnimatorPartner **a4)
{
  char *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  struct Windows::UI::Composition::ICompositionAnimatorPartner *v8; // rbx
  __int64 v9; // r12
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v13; // rcx
  volatile signed __int32 *v14; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v16; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+30h] [rbp-39h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v18; // [rsp+38h] [rbp-31h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+48h] [rbp-21h] BYREF
  const unsigned __int16 *v20; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v21[24]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+78h] [rbp+Fh]

  *a4 = 0LL;
  v4 = (char *)this - 96;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 9);
  v20 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v4[32] & 2) == 0 )
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_13;
  }
  v17 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v21, &v20) + 24);
  v22 = 0LL;
  v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          (struct Microsoft::WRL2::ContextSession *)v5,
          a3,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
          &v18);
  v19 = v18;
  if ( v10 < 0 )
  {
    DoStackCaptureDirect(v10, 0x4FBu);
LABEL_18:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
    goto LABEL_13;
  }
  v11 = (*(__int64 (__fastcall **)(char *, __int64, struct Microsoft::WRL2::ContextRuntimeClass *, _QWORD, Microsoft::WRL2::NestableRuntimeClass **))(*(_QWORD *)v4 + 120LL))(
          v4,
          v9,
          v18,
          0LL,
          &v17);
  v10 = v11;
  if ( v11 < 0 )
  {
    DoStackCaptureDirect(v11, 0x4FDu);
    v16 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v16);
    }
    goto LABEL_18;
  }
  v13 = v17;
  if ( v17 )
  {
    v8 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v17 + 136);
    if ( _InterlockedIncrement((volatile signed __int32 *)v17 + 4) == 1 )
      (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v13 + 80LL))(v13);
  }
  v14 = (volatile signed __int32 *)v17;
  v10 = 0;
  *a4 = v8;
  if ( v14 )
  {
    v17 = 0LL;
    if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v12) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 64LL))(v14, v12);
    }
  }
  if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v12) = 1;
    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v18 + 64LL))(v18, v12);
  }
LABEL_13:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return (unsigned int)v10;
}
