/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180093E80
 * Callers:
 *     ?GetAnimatablePropertyInfo@NaturalMotionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180188CC0 (-GetAnimatablePropertyInfo@NaturalMotionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@P.c)
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B730E (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?GetMaskedOutputType@SubchannelMaskInfo@@SA?AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z @ 0x1801B34E0 (-GetMaskedOutputType@SubchannelMaskInfo@@SA-AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z.c)
 */

bool __fastcall Windows::UI::Composition::CompositionAnimation::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  const unsigned __int16 *StringRawBuffer; // rsi
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v15; // r9
  __int64 v16; // rcx

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"StartingValue") )
  {
    if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"CurrentValue") )
      return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
    v11 = 2;
  }
  else
  {
    v11 = 1;
  }
  v12 = *((_QWORD *)this + 34);
  if ( !v12 )
    goto LABEL_16;
  v13 = *((_QWORD *)this + 35);
  if ( !v13 )
    goto LABEL_16;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, enum Windows::UI::Composition::AnimationBindingDirection *, struct ExpressionObjectPropertyInfo *, enum DCOMPOSITION_EXPRESSION_TYPE *))(*(_QWORD *)v12 + 200LL))(
         v12,
         v13,
         a3,
         a4,
         a5)
    && (*(_BYTE *)a3 & 1) != 0 )
  {
    *(_DWORD *)a3 = 1;
    *((_DWORD *)a4 + 3) = v11;
    if ( !*((_QWORD *)this + 36) )
      return 1;
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(unsigned int *)a5);
    v16 = *(unsigned __int8 *)(v15 + 4);
    if ( ExpressionTypeChannelCount > (unsigned int)v16 )
    {
      *(_DWORD *)a5 = SubchannelMaskInfo::GetMaskedOutputType(v16, *(unsigned int *)a5);
      return 1;
    }
    if ( ExpressionTypeChannelCount >= (unsigned int)v16 )
      return 1;
LABEL_16:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  return 0;
}
