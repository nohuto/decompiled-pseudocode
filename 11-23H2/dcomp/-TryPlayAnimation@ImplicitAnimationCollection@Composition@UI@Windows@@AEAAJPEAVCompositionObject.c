/*
 * XREFs of ?TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C740
 * Callers:
 *     ?HandlePropertyChange@CompositionObject@Composition@UI@Windows@@UEAAJPEBUAnimationValueData@234@PEA_N@Z @ 0x18005C6C0 (-HandlePropertyChange@CompositionObject@Composition@UI@Windows@@UEAAJPEBUAnimationValueData@234@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositionObject@234@PEAVCompositionAnimation@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C538 (-SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositio.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18005CCEC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     memcmp_0 @ 0x1800A8120 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z @ 0x18014997C (-Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAJPEAPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z @ 0x18014C378 (-Localize@ReferencedGitCookie@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18014CE8C (-Release@ReferencedGitCookie@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@.c)
 *     ?PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@W4AnimationValueSynchronizationBehavior@234@PEA_NPEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1801519FC (-PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplicitAnimationCollection::TryPlayAnimation(
        Windows::UI::Composition::ImplicitAnimationCollection *this,
        struct Windows::UI::Composition::CompositionObject *a2,
        const struct Windows::UI::Composition::AnimationValueData *a3,
        bool *a4)
{
  HSTRING v4; // rdi
  __int64 v6; // r15
  struct IUnknown *v7; // rsi
  __int64 v8; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // edx
  __int64 v15; // r14
  __int64 v16; // r14
  PCWSTR v17; // r15
  PCWSTR v18; // rax
  char v19; // r14
  int v20; // edi
  Windows::UI::Composition::ImplicitAnimationCollection *v22; // rbx
  int v23; // eax
  Microsoft::WRL2::NestableRuntimeClass *v24; // rdi
  int v25; // eax
  HSTRING v26; // rbx
  HRESULT v27; // eax
  HSTRING v28; // r8
  HSTRING v29; // r14
  int v30; // esi
  int v31; // eax
  int v32; // eax
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // [rsp+20h] [rbp-60h]
  const char *v37; // [rsp+28h] [rbp-58h]
  struct IUnknown *v38; // [rsp+30h] [rbp-50h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-48h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v40; // [rsp+40h] [rbp-40h] BYREF
  UINT32 v41; // [rsp+48h] [rbp-38h] BYREF
  UINT32 v42; // [rsp+4Ch] [rbp-34h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v43; // [rsp+50h] [rbp-30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v44; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string[3]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  Windows::UI::Composition::ImplicitAnimationCollection *v47; // [rsp+C0h] [rbp+40h] BYREF
  HSTRING v48; // [rsp+C8h] [rbp+48h]
  UINT32 length; // [rsp+D0h] [rbp+50h] BYREF
  bool *v50; // [rsp+D8h] [rbp+58h]

  v50 = a4;
  v48 = (HSTRING)a2;
  v47 = this;
  v4 = (HSTRING)*((_QWORD *)a3 + 4);
  *a4 = 0;
  v6 = *((_QWORD *)this + 20);
  v38 = 0LL;
  string[0] = v4;
  if ( !*(_BYTE *)(v6 + 184) )
  {
    RoOriginateError(2147549183LL, 0LL);
    v38 = 0LL;
LABEL_44:
    v7 = v38;
    goto LABEL_18;
  }
  v7 = 0LL;
  v8 = v6 + 160;
  LOBYTE(newString) = 0;
  if ( *(_DWORD *)(v6 + 160) == 1 )
  {
    v31 = *(_DWORD *)(v6 + 168);
    if ( v31 >= 0 )
      *(_DWORD *)(v6 + 168) = v31 + 1;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v6 + 168));
  }
  StringRawBuffer = WindowsGetStringRawBuffer(v4, &length);
  v11 = -2128831035;
  v12 = 0LL;
  v13 = 2LL * length;
  if ( v13 )
  {
    do
    {
      v14 = *((unsigned __int8 *)StringRawBuffer + v12++);
      v10 = v11 ^ v14;
      v11 = 16777619 * v10;
    }
    while ( v12 < v13 );
  }
  v15 = *(_QWORD *)(v6 + 80);
  if ( v15 && (v10 = v11 % *(_DWORD *)(v6 + 96), (v16 = *(_QWORD *)(v15 + 8 * v10)) != 0) )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v16 + 32) == v11 )
      {
        v17 = WindowsGetStringRawBuffer(*(HSTRING *)v16, &v42);
        v18 = WindowsGetStringRawBuffer(string[0], &v41);
        if ( v42 == v41 && !memcmp_0(v17, v18, 2LL * v41) )
          break;
      }
      v16 = *(_QWORD *)(v16 + 24);
      if ( !v16 )
        goto LABEL_12;
    }
    *(_OWORD *)string = *(_OWORD *)(v16 + 8);
    v7 = (struct IUnknown *)string[0];
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)string, 8));
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)string[0]);
    }
    else if ( string[0] )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string[0] + 8LL))(string[0]);
    }
    v20 = 0;
  }
  else
  {
LABEL_12:
    v19 = (char)newString;
    v20 = -2147483637;
  }
  if ( v8 )
  {
    if ( *(_DWORD *)v8 == 1 )
      --*(_DWORD *)(v8 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v8 + 8));
  }
  if ( v20 < 0 )
    goto LABEL_17;
  v38 = 0LL;
  if ( v19 )
  {
    if ( (int)XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Localize(
                v7,
                &v38,
                v13) < 0 )
    {
LABEL_17:
      v7 = 0LL;
      goto LABEL_18;
    }
    XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Release(v7);
    v7 = v38;
  }
  else
  {
    v38 = v7;
  }
  if ( !v7 )
    return 0LL;
  if ( *(_DWORD *)a3 != 52
    && *(_DWORD *)a3 != 18
    && *(_DWORD *)a3 != 35
    && *(_DWORD *)a3 != 69
    && (unsigned int)(*(_DWORD *)a3 - 70) >= 2 )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x7E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtimplicitanimationcollection.cpp",
      (const char *)0x80070057LL,
      (int)"Unsupported property type for implicit animations.",
      v37);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v38);
    return 2147942487LL;
  }
  if ( !*((_BYTE *)a3 + 104) )
  {
    *v50 = 1;
LABEL_18:
    if ( v7 )
    {
      v38 = 0LL;
      ((void (__fastcall *)(struct IUnknown *, __int64, unsigned __int64))v7->lpVtbl->Release)(v7, v10, v13);
    }
    return 0LL;
  }
  v22 = v47;
  v23 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          *((struct Microsoft::WRL2::ContextSession **)v47 + 3),
          v7,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimationGroup::s_InterfaceType,
          &v44);
  v24 = v44;
  v40 = v44;
  if ( v23 >= 0 && v44 )
  {
    v32 = Windows::UI::Composition::CompositionAnimationGroup::PlayAnimations(
            (_DWORD)v44,
            (_DWORD)v48,
            (_DWORD)a3,
            2,
            (__int64)v50,
            0LL);
    v33 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtimplicitanimationcollection.cpp",
        (const char *)(unsigned int)v32);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v40);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v38);
      return v33;
    }
    goto LABEL_42;
  }
  v25 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          *((struct Microsoft::WRL2::ContextSession **)v22 + 3),
          v38,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
          (struct Microsoft::WRL2::ContextRuntimeClass **)string);
  v26 = string[0];
  v43 = (Microsoft::WRL2::NestableRuntimeClass *)string[0];
  if ( v25 < 0 )
    goto LABEL_38;
  if ( !string[0] )
  {
LABEL_42:
    if ( v24 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v24);
    goto LABEL_44;
  }
  WindowsDeleteString(0LL);
  newString = 0LL;
  v27 = WindowsDuplicateString(*((HSTRING *)v26 + 23), &newString);
  if ( v27 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x52D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)(unsigned int)v27,
      v36);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       (Microsoft::WRL::Wrappers::Details *)newString,
                       0LL,
                       v28) )
  {
    v29 = v48;
    LOBYTE(v47) = 0;
    v30 = Windows::UI::Composition::AnimationHelper::SetFinalValueParameter(
            newString,
            v48,
            (struct Windows::UI::Composition::CompositionObject *)v26,
            a3,
            (const struct Windows::UI::Composition::AnimationValueData *)&v47);
    if ( v30 < 0 )
    {
      v35 = 193LL;
    }
    else
    {
      *((_DWORD *)v26 + 74) = 2;
      v30 = (*(__int64 (__fastcall **)(HSTRING, HSTRING, HSTRING, _QWORD, _QWORD))(*(_QWORD *)v29 + 152LL))(
              v29,
              newString,
              v26,
              0LL,
              0LL);
      if ( v30 >= 0 )
      {
        *v50 = (char)v47;
        WindowsDeleteString(newString);
LABEL_38:
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 4, 0xFFFFFFFF) == 1 )
          {
            LOBYTE(v10) = 1;
            (*(void (__fastcall **)(HSTRING, __int64))(*(_QWORD *)string[0] + 64LL))(string[0], v10);
          }
          v24 = v44;
        }
        goto LABEL_42;
      }
      v35 = 207LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtimplicitanimationcollection.cpp",
      (const char *)(unsigned int)v30);
    WindowsDeleteString(newString);
    newString = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v43);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v40);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v38);
    return (unsigned int)v30;
  }
  else
  {
    v34 = Windows::UI::Composition::ApiErrorMessageTable::Lookup(11LL);
    RoOriginateErrorW(2147942487LL, 0LL, v34);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtimplicitanimationcollection.cpp",
      (const char *)0x80070057LL);
    WindowsDeleteString(newString);
    newString = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v43);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v40);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v38);
    return 2147942487LL;
  }
}
