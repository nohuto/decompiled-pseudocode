/*
 * XREFs of ?AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEAVConditionalExpressionAnimation@345@W4InertiaModifierAxis@@AEBV?$DynArray@W4InertiaModifierType@@$0A@@@@Z @ 0x18013688C
 * Callers:
 *     ?ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137B44 (-ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV-$span@.c)
 *     ?ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUIInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x18013844C (-ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?SetDebuggingInformation@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x18014F728 (-SetDebuggingInformation@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionObjectP.c)
 *     ?GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180161C60 (-GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAni.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::AddConditionalInertiaModifiers(
        __int64 *a1,
        struct Windows::UI::Composition::CompositionObject *a2,
        signed int a3,
        __int64 a4)
{
  __int64 v6; // rsi
  int v9; // ebx
  const WCHAR *v10; // rax
  int v11; // r14d
  __int64 v12; // r12
  int Instance; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  unsigned __int8 (__fastcall *v16)(__int64 *, PVOID, _BYTE *, HSTRING_HEADER *, _BYTE *); // rbx
  unsigned int v17; // r8d
  HSTRING_HEADER *v18; // rax
  unsigned int v19; // edx
  const WCHAR *v20; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v21[4]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v22[4]; // [rsp+4Ch] [rbp-3Dh] BYREF
  HSTRING_HEADER v23; // [rsp+50h] [rbp-39h] BYREF
  HSTRING_HEADER v24; // [rsp+70h] [rbp-19h] BYREF

  v6 = a3;
  if ( 4 * (unsigned __int64)*(unsigned int *)(a4 + 24) > 0x1000 )
  {
    RoOriginateErrorW(2147942487LL, 0LL, L"Inertia modifiers resource list size exceeds max allowed size.");
    return 2147942487LL;
  }
  *((_BYTE *)a1 + 328) |= 4u;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = 38;
        v10 = L"InertiaModifier_SetY";
        v11 = 42;
        break;
      case 2:
        v9 = 39;
        v10 = L"InertiaModifier_SetScale";
        v11 = 44;
        break;
      case 3:
        v9 = 40;
        v10 = L"InertiaModifier_SetXY";
        v11 = 43;
        break;
      default:
        Microsoft::WRL2::FailFast::Unexpected(0LL);
    }
  }
  else
  {
    v9 = 37;
    v10 = L"InertiaModifier_SetX";
    v11 = 41;
  }
  v20 = v10;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v20, a3);
  v12 = v6;
  Instance = Windows::UI::Composition::ConditionalExpressionAnimation::GenerateInstance(
               a2,
               a2,
               0LL,
               0,
               (__int64)&a1[v6 + 43]);
  v14 = Instance;
  if ( Instance < 0 )
  {
    v19 = 1731;
    goto LABEL_18;
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(a1[3] + 456),
    *((_DWORD *)a1 + 32),
    v9,
    *(_DWORD *)(a1[v12 + 43] + 128));
  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(a1[3] + 456),
    *((_DWORD *)a1 + 32),
    v11,
    *(const void **)a4,
    4LL * *(unsigned int *)(a4 + 24));
  v15 = *a1;
  v23.Reserved.Reserved1 = 0LL;
  *(_QWORD *)&v23.Reserved.Reserved2[8] = 0x2FFFFFFFFLL;
  v16 = *(unsigned __int8 (__fastcall **)(__int64 *, PVOID, _BYTE *, HSTRING_HEADER *, _BYTE *))(v15 + 200);
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v20, v17);
  if ( v16(a1, v18[1].Reserved.Reserved1, v22, &v23, v21) )
  {
    Instance = Windows::UI::Composition::CompositionAnimation::SetDebuggingInformation(
                 a2,
                 (struct ExpressionObjectPropertyInfo *)&v23,
                 (struct Windows::UI::Composition::CompositionPropertyAnimator *)a1[v12 + 43]);
    v14 = Instance;
    if ( Instance >= 0 )
    {
      v14 = 0;
      goto LABEL_19;
    }
    v19 = 1760;
LABEL_18:
    DoStackCaptureDirect(Instance, v19);
  }
LABEL_19:
  *((_BYTE *)a1 + 328) &= ~4u;
  return v14;
}
