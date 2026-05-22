/*
 * XREFs of ?TryUpdatePositionWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@345@PEAH@Z @ 0x18013BBE0
 * Callers:
 *     ?TryUpdatePositionWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@456@PEAH@Z @ 0x18013BB00 (-TryUpdatePositionWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAA.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A (-GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::TryUpdatePositionWithAnimation(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::UI::Composition::CompositionAnimation *a2,
        int *a3)
{
  unsigned int v6; // ebx
  int NextRequestId; // eax
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(Windows::UI::Composition::Interactions::InteractionTracker *, __int64, struct Windows::UI::Composition::CompositionAnimation *, _QWORD, Microsoft::WRL2::NestableRuntimeClass **); // rbx
  __int64 v10; // rbp
  int v11; // eax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  const char *v14; // [rsp+28h] [rbp-60h]
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a2 )
  {
    NextRequestId = Windows::UI::Composition::Interactions::InteractionTracker::GetNextRequestId(this);
    v8 = *(_QWORD *)this;
    *((_BYTE *)this + 328) |= 1u;
    v15 = 0LL;
    v17 = 0LL;
    v9 = *(__int64 (__fastcall **)(Windows::UI::Composition::Interactions::InteractionTracker *, __int64, struct Windows::UI::Composition::CompositionAnimation *, _QWORD, Microsoft::WRL2::NestableRuntimeClass **))(v8 + 152);
    v10 = NextRequestId;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Position", 9u, 8u);
    v11 = v9(this, v17, a2, 0LL, &v15);
    v6 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0x204u);
    }
    else
    {
      *((_BYTE *)v15 + 152) |= 0x10u;
      *((_BYTE *)this + 328) &= ~1u;
      DirectComposition::CDevice::ResourceSetReferenceProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        18,
        *((_DWORD *)v15 + 32));
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        19,
        v10);
      v6 = 0;
      *a3 = v10;
    }
    *((_BYTE *)this + 328) &= ~1u;
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
    }
  }
  else
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1F7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid animation specified.",
      v14);
  }
  return v6;
}
