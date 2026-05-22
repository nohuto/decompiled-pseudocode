/*
 * XREFs of ?TryUpdateScaleWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@345@AEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013C2B4
 * Callers:
 *     ?TryUpdateScaleWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@456@UVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013C1E0 (-TryUpdateScaleWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPE.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A (-GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::TryUpdateScaleWithAnimation(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::UI::Composition::CompositionAnimation *a2,
        struct Windows::Foundation::Numerics::Vector3 *a3,
        int *a4)
{
  unsigned int v8; // ebx
  int NextRequestId; // eax
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(Windows::UI::Composition::Interactions::InteractionTracker *, __int64, struct Windows::UI::Composition::CompositionAnimation *, _QWORD, Microsoft::WRL2::NestableRuntimeClass **); // rbx
  __int64 v12; // r15
  int v13; // eax
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  const char *v16; // [rsp+28h] [rbp-60h]
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a2 )
  {
    NextRequestId = Windows::UI::Composition::Interactions::InteractionTracker::GetNextRequestId(this);
    v10 = *(_QWORD *)this;
    v17 = 0LL;
    *((_BYTE *)this + 328) |= 1u;
    v19 = 0LL;
    v11 = *(__int64 (__fastcall **)(Windows::UI::Composition::Interactions::InteractionTracker *, __int64, struct Windows::UI::Composition::CompositionAnimation *, _QWORD, Microsoft::WRL2::NestableRuntimeClass **))(v10 + 152);
    v12 = NextRequestId;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Scale", 6u, 5u);
    v13 = v11(this, v19, a2, 0LL, &v17);
    v8 = v13;
    if ( v13 < 0 )
    {
      DoStackCaptureDirect(v13, 0x26Au);
    }
    else
    {
      *((_BYTE *)v17 + 152) |= 0x10u;
      *((_BYTE *)this + 328) &= ~1u;
      DirectComposition::CDevice::ResourceSetReferenceProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        33,
        *((_DWORD *)v17 + 32));
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        35,
        *(float *)a3);
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        36,
        *((float *)a3 + 1));
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        34,
        v12);
      v8 = 0;
      *a4 = v12;
    }
    *((_BYTE *)this + 328) &= ~1u;
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
    }
  }
  else
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x254,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid animation specified.",
      v16);
  }
  return v8;
}
