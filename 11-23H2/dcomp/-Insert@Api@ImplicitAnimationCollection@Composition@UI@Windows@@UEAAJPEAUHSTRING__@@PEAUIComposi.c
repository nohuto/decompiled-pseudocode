/*
 * XREFs of ?Insert@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimationBase@345@PEAE@Z @ 0x18002CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Insert@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@5@PEAE@Z @ 0x18002CCB0 (-Insert@-$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U-$Defaul.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplicitAnimationCollection::Api::Insert(
        Windows::UI::Composition::ImplicitAnimationCollection::Api *this,
        HSTRING a2,
        struct Windows::UI::Composition::ICompositionAnimationBase *a3,
        unsigned __int8 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 104) & 2) == 0 )
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v10 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0x206u);
    goto LABEL_8;
  }
  v16 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::ICompositionAnimationBase *, GUID *, __int64 *))a3)(
         a3,
         &GUID_5f94d145_ddc9_4a89_9d06_c3729181bead,
         &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    DoStackCaptureDirect(v9, 0x209u);
    v14 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    v11 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Insert(
            *((_QWORD *)this + 3),
            a2,
            a3,
            a4);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x109,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtimplicitanimationcollection.cpp",
        (const char *)(unsigned int)v11);
      DoStackCaptureDirect(v10, 0x20Du);
      v12 = v16;
      if ( !v16 )
        goto LABEL_8;
      v16 = 0LL;
      goto LABEL_7;
    }
    v12 = v16;
    v10 = 0;
    if ( v16 )
    {
      v16 = 0LL;
LABEL_7:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v10;
}
