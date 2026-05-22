/*
 * XREFs of ?TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@W4InteractionTrackerPositionUpdateOption@2345@PEAH@Z @ 0x18013B614
 * Callers:
 *     ?TryUpdatePosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013B580 (-TryUpdatePosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Num.c)
 *     ?TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@W4InteractionTrackerClampingOption@3456@PEAH@Z @ 0x18013BD60 (-TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUV.c)
 *     ?TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@W4InteractionTrackerClampingOption@3456@W4InteractionTrackerPositionUpdateOption@3456@PEAH@Z @ 0x18013BE00 (-TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Win_ea_18013BE00.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A (-GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@QEAAJIAEBUVector3@Numerics@Foundation@3@I@Z @ 0x180135294 (--$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windo.c)
 *     ?ValidateUpdateOption@InteractionTracker@Interactions@Composition@UI@Windows@@AEBAJW4InteractionTrackerClampingOption@2345@@Z @ 0x18013C548 (-ValidateUpdateOption@InteractionTracker@Interactions@Composition@UI@Windows@@AEBAJW4Interaction.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::TryUpdatePosition(
        __int64 a1,
        float *a2,
        int a3,
        int a4,
        int *a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbp
  __int64 v9; // rcx
  int updated; // ebx
  __int64 v11; // rdx
  int v13; // r9d
  const char *v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a4;
  v7 = a3;
  *a5 = Windows::UI::Composition::Interactions::InteractionTracker::GetNextRequestId((Windows::UI::Composition::Interactions::InteractionTracker *)a1);
  updated = Windows::UI::Composition::Interactions::InteractionTracker::ValidateUpdateOption(v9, (unsigned int)v7);
  if ( updated < 0 )
  {
    v11 = 425LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  if ( (unsigned int)v5 > 1 )
  {
    updated = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1AF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid position update option specified",
      v14);
    return (unsigned int)updated;
  }
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    11,
    v5);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    8,
    *a2);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    9,
    a2[1]);
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    12,
    *a5);
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    10,
    v7);
  updated = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<Windows::Foundation::Numerics::Vector3>(
              (gsl::details *)a1,
              1u,
              (__int64)a2,
              v13);
  if ( updated < 0 )
  {
    v11 = 446LL;
    goto LABEL_3;
  }
  return 0LL;
}
