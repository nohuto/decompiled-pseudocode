/*
 * XREFs of ?NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z @ 0x180050AC0
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@U_D3DCOLORVALUE@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180044B50 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPro.c)
 *     ?put_TopInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x1800495B0 (-put_TopInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Wind.c)
 *     ?put_RightInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x180049A80 (-put_RightInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Wi.c)
 *     ?put_LeftInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x180049F50 (-put_LeftInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Win.c)
 *     ?put_BottomInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x18004A420 (-put_BottomInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@W.c)
 *     ?put_Color@Api@?$CompositionColorBrushT@VCompositionColorBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x18004B850 (-put_Color@Api@-$CompositionColorBrushT@VCompositionColorBrush@Composition@UI@Windows@@VComposit.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?put_Offset@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x18004DA10 (-put_Offset@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z.c)
 *     ?put_Size@Api@Visual@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18004E710 (-put_Size@Api@Visual@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?put_Opacity@Api@Visual@Composition@UI@Windows@@UEAAJM@Z @ 0x1800523F0 (-put_Opacity@Api@Visual@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_TransformMatrix@Api@Visual@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@5@@Z @ 0x18005D1F0 (-put_TransformMatrix@Api@Visual@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@5@@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?Stop@InjectionAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x18019BA20 (-Stop@InjectionAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnbindIntersectingAnimators@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVTargetMapEntry@234@G_N@Z @ 0x18004D0E0 (-UnbindIntersectingAnimators@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVTargetMapE.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
        struct _RTL_GENERIC_TABLE *this,
        unsigned int a2,
        unsigned int a3,
        bool *a4)
{
  struct Windows::UI::Composition::TargetMapEntry *v5; // rax
  Windows::UI::Composition::AnimationBindingManager *v6; // rcx
  struct Windows::UI::Composition::TargetMapEntry *v7; // rdi
  __int64 v9; // rax
  __int64 i; // rbx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Buffer = __PAIR64__(a3, a2);
  v15 = 0LL;
  v5 = (struct Windows::UI::Composition::TargetMapEntry *)RtlLookupElementGenericTable(this, &Buffer);
  v7 = v5;
  if ( !v5 )
  {
    *a4 = 0;
    return 0LL;
  }
  v9 = *((_QWORD *)v5 + 1);
  for ( *a4 = 1; v9; v9 = *(_QWORD *)(v9 + 24) )
  {
    *(_WORD *)(v9 + 16) = 0;
    *(_BYTE *)(v9 + 18) = 0;
  }
  for ( i = *((_QWORD *)v7 + 2); i; i = *(_QWORD *)(i + 24) )
  {
    v11 = *(_QWORD *)(i + 8);
    *(_WORD *)(i + 16) = 0;
    *(_BYTE *)(i + 18) = 0;
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(v11 + 24) + 456LL),
      *(_DWORD *)(v11 + 128),
      7u,
      0LL);
  }
  v12 = Windows::UI::Composition::AnimationBindingManager::UnbindIntersectingAnimators(v6, v7, 0xFFFFu, 0);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D2,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationbindingmanager.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
