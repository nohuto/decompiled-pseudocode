/*
 * XREFs of ?TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@PEAH@Z @ 0x18013B820
 * Callers:
 *     ?TryUpdatePositionBy@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013B790 (-TryUpdatePositionBy@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@N.c)
 *     ?TryUpdatePositionByWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@W4InteractionTrackerClampingOption@3456@PEAH@Z @ 0x18013B940 (-TryUpdatePositionByWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A (-GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ.c)
 *     ??$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@QEAAJIAEBUVector3@Numerics@Foundation@3@I@Z @ 0x180135294 (--$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windo.c)
 *     ?ValidateUpdateOption@InteractionTracker@Interactions@Composition@UI@Windows@@AEBAJW4InteractionTrackerClampingOption@2345@@Z @ 0x18013C548 (-ValidateUpdateOption@InteractionTracker@Interactions@Composition@UI@Windows@@AEBAJW4Interaction.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::TryUpdatePositionBy(
        __int64 a1,
        float *a2,
        int a3,
        int *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  int updated; // ebx
  __int64 v10; // rdx
  int v12; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a3;
  *a4 = Windows::UI::Composition::Interactions::InteractionTracker::GetNextRequestId((Windows::UI::Composition::Interactions::InteractionTracker *)a1);
  updated = Windows::UI::Composition::Interactions::InteractionTracker::ValidateUpdateOption(v8, (unsigned int)v5);
  if ( updated < 0 )
  {
    v10 = 469LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    14,
    *a2);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    15,
    a2[1]);
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    17,
    *a4);
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    16,
    v5);
  updated = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<Windows::Foundation::Numerics::Vector3>(
              (gsl::details *)a1,
              1u,
              (__int64)a2,
              v12);
  if ( updated < 0 )
  {
    v10 = 483LL;
    goto LABEL_3;
  }
  return 0LL;
}
