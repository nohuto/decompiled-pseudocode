/*
 * XREFs of ?TryPopulateAnimationObjectParametersInfo@CompositionAnimation@Composition@UI@Windows@@QEAAX_N@Z @ 0x180015408
 * Callers:
 *     ?StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@SAJPEAUIAnimationObject@234@PEAUHSTRING__@@PEAVCompositionAnimation@234@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18001504C (-StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@SAJPEAUIAni.c)
 *     ?PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@W4AnimationValueSynchronizationBehavior@234@PEA_NPEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1801519FC (-PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234.c)
 *     ?StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAUIAnimationObject@234@PEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180152110 (-StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJ.c)
 *     ?RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Z @ 0x18019AEA8 (-RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVComposito.c)
 * Callees:
 *     ??0AnimationObjectInfo@Composition@UI@Windows@@QEAA@PEAUHSTRING__@@PEAUIAnimationObject@123@@Z @ 0x1800415EC (--0AnimationObjectInfo@Composition@UI@Windows@@QEAA@PEAUHSTRING__@@PEAUIAnimationObject@123@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Insert@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAX$$QEAUAnimationObjectInfo@345@W4AnimationObjectInfoType@2345@@Z @ 0x180068904 (-Insert@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAX$$QEAUAnimati.c)
 *     ??1AnimationObjectInfo@Composition@UI@Windows@@QEAA@XZ @ 0x180068CE0 (--1AnimationObjectInfo@Composition@UI@Windows@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimation::TryPopulateAnimationObjectParametersInfo(
        Windows::UI::Composition::CompositionAnimation *this,
        char a2)
{
  __int64 v4; // rax
  struct _RTL_GENERIC_TABLE *v5; // rbp
  ULONG i; // esi
  HSTRING *ElementGenericTable; // rax
  HSTRING *v8; // r14
  PCWSTR StringRawBuffer; // rbx
  _BYTE v10[16]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[16]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-40h] BYREF

  if ( *((_DWORD *)this + 76) )
  {
    if ( (*((_BYTE *)this + 336) & 1) == 0 )
    {
      v5 = (struct _RTL_GENERIC_TABLE *)((char *)this + 192);
      for ( i = 0; i < RtlNumberGenericTableElements(v5); ++i )
      {
        ElementGenericTable = (HSTRING *)RtlGetElementGenericTable(v5, i);
        v8 = ElementGenericTable;
        if ( !*((_DWORD *)ElementGenericTable + 2) && *((_DWORD *)ElementGenericTable + 8) == 2 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(*ElementGenericTable, 0LL);
          Windows::UI::Composition::AnimationObjectInfo::AnimationObjectInfo(
            (Windows::UI::Composition::AnimationObjectInfo *)v12,
            *v8,
            (struct Windows::UI::Composition::IAnimationObject *)v8[3]);
          (*(void (__fastcall **)(Windows::UI::Composition::CompositionAnimation *, PCWSTR, _BYTE *))(*(_QWORD *)this + 296LL))(
            this,
            StringRawBuffer,
            v13);
          Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Insert((char *)this + 312, v12, 0LL);
          Windows::UI::Composition::AnimationObjectInfo::~AnimationObjectInfo((Windows::UI::Composition::AnimationObjectInfo *)v12);
        }
      }
    }
  }
  if ( a2 )
  {
    if ( (*((_BYTE *)this + 336) & 2) == 0 )
    {
      v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
             v12,
             &Windows::UI::Composition::CompositionAnimation::c_targetParameterName);
      Windows::UI::Composition::AnimationObjectInfo::AnimationObjectInfo(
        (Windows::UI::Composition::AnimationObjectInfo *)v10,
        *(HSTRING *)(v4 + 24),
        0LL);
      (*(void (__fastcall **)(Windows::UI::Composition::CompositionAnimation *, const wchar_t *, _BYTE *))(*(_QWORD *)this + 296LL))(
        this,
        L"this.target",
        v11);
      Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Insert((char *)this + 312, v10, 1LL);
      Windows::UI::Composition::AnimationObjectInfo::~AnimationObjectInfo((Windows::UI::Composition::AnimationObjectInfo *)v10);
    }
  }
}
