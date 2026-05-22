/*
 * XREFs of ?GetAnimatablePropertyInfo@KeyFrameAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005BD60
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B730E (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?GetMaskedOutputType@SubchannelMaskInfo@@SA?AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z @ 0x1801B34E0 (-GetMaskedOutputType@SubchannelMaskInfo@@SA-AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z.c)
 */

char __fastcall Windows::UI::Composition::KeyFrameAnimation::GetAnimatablePropertyInfo(
        Windows::UI::Composition::KeyFrameAnimation *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  char v9; // bl
  const wchar_t ***v10; // rdi
  PCWSTR StringRawBuffer; // r12
  int v12; // r15d
  const wchar_t *v13; // rdx
  char v14; // cl
  unsigned __int8 v15; // al
  int v16; // eax
  const unsigned __int16 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  char result; // al
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v22; // r9
  __int64 v23; // rcx

  v9 = 0;
  v10 = (const wchar_t ***)&Windows::UI::Composition::KeyFrameAnimator::k_rgAnimDef;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v12 = 2;
  while ( 1 )
  {
    v13 = **v10;
    if ( !StringRawBuffer || (v14 = 0, !*StringRawBuffer) )
      v14 = 1;
    if ( !v13 || (v15 = 0, !*v13) )
      v15 = 1;
    if ( v14 )
    {
      v16 = v15 - 1;
    }
    else
    {
      if ( v15 )
        goto LABEL_9;
      v16 = _wcsicmp_l(StringRawBuffer, v13, 0LL);
      if ( (unsigned int)(v16 + 1) > 2 )
        goto LABEL_9;
    }
    if ( !v16 )
      break;
LABEL_9:
    if ( ++v10 == (const wchar_t ***)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType )
    {
      v17 = WindowsGetStringRawBuffer(a2, 0LL);
      if ( (unsigned int)CompareAnimationNames(v17, L"StartingValue") )
      {
        if ( (unsigned int)CompareAnimationNames(v17, L"CurrentValue") )
          return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
      }
      else
      {
        v12 = 1;
      }
      v18 = *((_QWORD *)this + 34);
      if ( v18 )
      {
        v19 = *((_QWORD *)this + 35);
        if ( v19 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, enum Windows::UI::Composition::AnimationBindingDirection *, struct ExpressionObjectPropertyInfo *, enum DCOMPOSITION_EXPRESSION_TYPE *))(*(_QWORD *)v18 + 200LL))(
                  v18,
                  v19,
                  a3,
                  a4,
                  a5)
            || (*(_BYTE *)a3 & 1) == 0 )
          {
            return v9;
          }
          *(_DWORD *)a3 = 1;
          *((_DWORD *)a4 + 3) = v12;
          if ( !*((_QWORD *)this + 36) )
            return 1;
          ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*(unsigned int *)a5);
          v23 = *(unsigned __int8 *)(v22 + 4);
          if ( ExpressionTypeChannelCount > (unsigned int)v23 )
          {
            *(_DWORD *)a5 = SubchannelMaskInfo::GetMaskedOutputType(v23, *(unsigned int *)a5);
            return 1;
          }
          if ( ExpressionTypeChannelCount >= (unsigned int)v23 )
            return 1;
        }
      }
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    }
  }
  result = 1;
  *((_DWORD *)a4 + 1) = *((_DWORD *)*v10 + 2);
  *((_DWORD *)a4 + 2) = *((_DWORD *)*v10 + 3);
  *(_DWORD *)a5 = *((_DWORD *)*v10 + 4);
  *(_DWORD *)a3 = 2;
  return result;
}
