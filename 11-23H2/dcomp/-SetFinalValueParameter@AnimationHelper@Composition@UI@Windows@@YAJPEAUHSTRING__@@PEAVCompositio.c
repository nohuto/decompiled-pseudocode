/*
 * XREFs of ?SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositionObject@234@PEAVCompositionAnimation@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C538
 * Callers:
 *     ?TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C740 (-TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject.c)
 *     ?PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@W4AnimationValueSynchronizationBehavior@234@PEA_NPEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1801519FC (-PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58 (-SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801097D0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVALUE@@@Z @ 0x18014F66C (-SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVA.c)
 *     ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FA88 (-SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQua.c)
 *     ?SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@4@@Z @ 0x18014FD04 (-SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector4@Numerics@Foundation@4@@Z @ 0x18014FE58 (-SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationHelper::SetFinalValueParameter(
        HSTRING string,
        HSTRING a2,
        struct Windows::UI::Composition::CompositionObject *a3,
        struct Windows::UI::Composition::CompositionAnimation *a4,
        const struct Windows::UI::Composition::AnimationValueData *a5)
{
  HSTRING v8; // rcx
  const unsigned __int16 *StringRawBuffer; // rsi
  const unsigned __int16 *v10; // rax
  int v11; // ecx
  HRESULT v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // ebx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  float v20; // xmm6_4
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // ecx
  __int128 v24; // xmm6
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-60h] BYREF
  HSTRING stringa; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER v27; // [rsp+40h] [rbp-40h] BYREF
  HSTRING v28; // [rsp+58h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *(_BYTE *)a5 = 0;
  if ( !a2 )
  {
    v21 = 32LL;
LABEL_23:
    v15 = -2147024809;
    goto LABEL_24;
  }
  if ( !a3 )
  {
    v21 = 33LL;
    goto LABEL_23;
  }
  if ( !a4 )
  {
    v21 = 34LL;
    goto LABEL_23;
  }
  v8 = (HSTRING)*((_QWORD *)a4 + 4);
  if ( v8 )
    StringRawBuffer = WindowsGetStringRawBuffer(v8, 0LL);
  else
    StringRawBuffer = 0LL;
  if ( string )
    v10 = WindowsGetStringRawBuffer(string, 0LL);
  else
    v10 = 0LL;
  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, v10) )
    return 0LL;
  v11 = *(_DWORD *)a4;
  if ( *(int *)a4 > 52 )
  {
    v22 = v11 - 69;
    if ( !v22 )
    {
      v28 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v27, L"this.FinalValue", 0x10u, 0xFu);
      v15 = Windows::UI::Composition::CompositionAnimation::SetVector4Parameter(
              a3,
              v28,
              (struct Windows::UI::Composition::CompositionAnimation *)((char *)a4 + 40));
      if ( v15 < 0 )
      {
        v21 = 68LL;
        goto LABEL_24;
      }
      goto LABEL_13;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v24 = *(_OWORD *)((char *)a4 + 40);
      v28 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v27, L"this.FinalValue", 0x10u, 0xFu);
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v24;
      v15 = Windows::UI::Composition::CompositionAnimation::SetColorParameter(
              a3,
              v28,
              (struct _D3DCOLORVALUE *)&hstringHeader);
      if ( v15 < 0 )
      {
        v21 = 74LL;
        goto LABEL_24;
      }
      goto LABEL_13;
    }
    if ( v23 == 1 )
    {
      stringa = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"this.FinalValue", 0x10u, 0xFu);
      v15 = Windows::UI::Composition::CompositionAnimation::SetQuaternionParameter(
              a3,
              stringa,
              (struct Windows::UI::Composition::CompositionAnimation *)((char *)a4 + 40));
      if ( v15 < 0 )
      {
        v21 = 80LL;
        goto LABEL_24;
      }
      goto LABEL_13;
    }
    goto LABEL_20;
  }
  if ( v11 != 52 )
  {
    v17 = v11 - 11;
    if ( v17 )
    {
      v18 = v17 - 6;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          v20 = *((float *)a4 + 10);
          stringa = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"this.FinalValue", 0x10u, 0xFu);
          v15 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a3, stringa, v20);
          if ( v15 < 0 )
          {
            v21 = 50LL;
            goto LABEL_24;
          }
LABEL_13:
          *(_BYTE *)a5 = 1;
          return 0LL;
        }
        if ( v19 == 17 )
        {
          stringa = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"this.FinalValue", 0x10u, 0xFu);
          v15 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(
                  a3,
                  stringa,
                  (struct Windows::UI::Composition::CompositionAnimation *)((char *)a4 + 40));
          if ( v15 < 0 )
          {
            v21 = 56LL;
            goto LABEL_24;
          }
          goto LABEL_13;
        }
      }
    }
LABEL_20:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  stringa = 0LL;
  v12 = WindowsCreateStringReference(L"this.FinalValue", 0xFu, &hstringHeader, &stringa);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
    __debugbreak();
  }
  v15 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
          a3,
          stringa,
          (struct Windows::UI::Composition::CompositionAnimation *)((char *)a4 + 40));
  if ( v15 >= 0 )
    goto LABEL_13;
  v21 = 62LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationhelper.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
