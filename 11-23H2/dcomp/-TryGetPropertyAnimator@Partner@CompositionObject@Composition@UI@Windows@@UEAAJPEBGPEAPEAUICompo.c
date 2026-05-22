/*
 * XREFs of ?TryGetPropertyAnimator@Partner@CompositionObject@Composition@UI@Windows@@UEAAJPEBGPEAPEAUICompositionAnimatorPartner@345@@Z @ 0x180109C00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ToPartner@UICompositionAnimatorPartner@Composition@UI@Windows@@@CompositionPropertyAnimator@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionAnimatorPartner@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180109428 (--$ToPartner@UICompositionAnimatorPartner@Composition@UI@Windows@@@CompositionPropertyAnimator@C.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Partner::TryGetPropertyAnimator(
        Windows::UI::Composition::CompositionObject::Partner *this,
        const unsigned __int16 *a2,
        struct Windows::UI::Composition::ICompositionAnimatorPartner **a3)
{
  char *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v6; // r8d
  unsigned int v7; // edi
  PVOID Reserved1; // r14
  __int64 v9; // rax
  int v10; // eax
  struct Windows::UI::Composition::ICompositionAnimatorPartner *v11; // rax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::UI::Composition::ICompositionAnimatorPartner *v15; // [rsp+28h] [rbp-38h] BYREF
  const WCHAR *v16; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  v3 = (char *)this - 96;
  v16 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 9);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v3[32] & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_11;
  }
  v14 = 0LL;
  v15 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v16, v6)[1].Reserved.Reserved1;
  v9 = *(_QWORD *)v3;
  v18 = 0LL;
  v10 = (*(__int64 (__fastcall **)(char *, PVOID, Microsoft::WRL2::NestableRuntimeClass **))(v9 + 144))(
          v3,
          Reserved1,
          &v14);
  v7 = v10;
  if ( v10 >= 0 )
  {
    Windows::UI::Composition::CompositionPropertyAnimator::ToPartner<Windows::UI::Composition::ICompositionAnimatorPartner>(
      v14,
      (__int64 *)&v15);
    v11 = v15;
    v7 = 0;
    v15 = 0LL;
    v12 = v14;
    *a3 = v11;
    if ( !v12 )
      goto LABEL_11;
    v14 = 0LL;
LABEL_10:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
    goto LABEL_11;
  }
  DoStackCaptureDirect(v10, 0x542u);
  if ( v15 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionAnimatorPartner *))(*(_QWORD *)v15 + 16LL))(v15);
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
