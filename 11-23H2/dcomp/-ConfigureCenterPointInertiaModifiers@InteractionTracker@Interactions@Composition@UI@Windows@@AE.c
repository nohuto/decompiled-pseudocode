/*
 * XREFs of ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137548
 * Callers:
 *     ?ConfigureCenterPointXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x1801378B0 (-ConfigureCenterPointXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Window.c)
 *     ?ConfigureCenterPointYInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180137A00 (-ConfigureCenterPointYInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Window.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?at@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAI_K@Z @ 0x18001F118 (-at@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAI_K@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x180041510 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x18011C3EC (--$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVComposit.c)
 *     ?ClearInertiaCenterpoint@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXW4ScrollAxis@@@Z @ 0x1801374E4 (-ClearInertiaCenterpoint@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXW4ScrollAx.c)
 *     ?AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@PEAVCompositionAnimation@234@@Z @ 0x180161B08 (-AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimatio.c)
 *     ?GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180161C60 (-GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAni.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::ConfigureCenterPointInertiaModifiers(
        __int64 a1,
        unsigned __int64 *a2,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // r13
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // r8d
  int v10; // edi
  __int64 v11; // rax
  struct Windows::UI::Composition::CompositionObject *v12; // rbx
  struct IUnknown **v13; // r15
  unsigned int *v14; // r14
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // ecx
  Microsoft::WRL2::NestableRuntimeClass *v19; // rcx
  unsigned __int16 *v20; // rax
  int Instance; // eax
  unsigned int v22; // r15d
  unsigned __int64 v23; // r14
  gsl::details *v24; // rcx
  struct Microsoft::WRL2::ContextRuntimeClass *v25; // r13
  Microsoft::WRL2::NestableRuntimeClass *v27; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-41h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v29; // [rsp+50h] [rbp-39h] BYREF
  __int64 v30; // [rsp+58h] [rbp-31h] BYREF
  __int128 v31; // [rsp+60h] [rbp-29h] BYREF
  unsigned int *v32; // [rsp+70h] [rbp-19h]
  __int64 v33; // [rsp+78h] [rbp-11h]
  HSTRING_HEADER v34; // [rsp+80h] [rbp-9h] BYREF

  v3 = *a2;
  v5 = a3;
  if ( *a2 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v32 = 0LL;
    v27 = 0LL;
    v30 = v7;
    v31 = 0LL;
    v28 = 1;
    v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::Compositor *,enum ConditionalExpressionAnimationSelectionMode::Enum>(
           &v27,
           &v30,
           &v28);
    v10 = v8;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x5D5u);
      v19 = v27;
      if ( v27 )
        goto LABEL_40;
      goto LABEL_41;
    }
    v11 = a2[1];
    v12 = v27;
    v13 = (struct IUnknown **)v11;
    v30 = v11;
    if ( v11 == v11 + 8 * v3 )
    {
LABEL_12:
      *(_BYTE *)(a1 + 328) |= 2u;
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 != 1 )
          Microsoft::WRL2::FailFast::Unexpected(0LL);
        v28 = 68;
        v20 = L"InertiaCenterpointY";
      }
      else
      {
        v28 = 67;
        v20 = L"InertiaCenterpointX";
      }
      v29 = (struct Microsoft::WRL2::ContextRuntimeClass *)v20;
      Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)&v29, v9);
      v33 = v5;
      Instance = Windows::UI::Composition::ConditionalExpressionAnimation::GenerateInstance(
                   v12,
                   v12,
                   0LL,
                   0,
                   a1 + 8 * (v5 + 48));
      v10 = Instance;
      if ( Instance < 0 )
      {
        DoStackCaptureDirect(Instance, 0x611u);
LABEL_18:
        if ( v12 )
        {
          v19 = v12;
LABEL_40:
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v19);
        }
LABEL_41:
        std::vector<unsigned int>::_Tidy((__int64)&v31);
        goto LABEL_42;
      }
      v22 = 0;
      if ( !v3 )
      {
LABEL_31:
        DirectComposition::CDevice::ResourceSetReferenceProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          v28,
          *(_DWORD *)(*(_QWORD *)(a1 + 8 * v33 + 384) + 128LL));
        if ( v12 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
        std::vector<unsigned int>::_Tidy((__int64)&v31);
        goto LABEL_34;
      }
      v23 = 0LL;
      while ( 1 )
      {
        v27 = 0LL;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v27);
        if ( v23 >= v3 )
        {
          gsl::details::terminate(v24);
          __debugbreak();
        }
        v15 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *(struct Microsoft::WRL2::ContextSession **)(a1 + 24),
                *(struct IUnknown **)(v30 + 8 * v23),
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::CompositionConditionalValue::s_InterfaceType,
                &v29);
        v25 = v29;
        v10 = v15;
        v27 = v29;
        if ( v15 < 0 )
          break;
        if ( *((_DWORD *)v25 + 40) != *(_DWORD *)std::vector<unsigned int>::at((__int64)&v31, v23) )
        {
          RoOriginateErrorW(
            2147942487LL,
            0LL,
            L"An animation template on a ConditionalValue was modified during PopulatePropertyInfo call.");
          v17 = 1569;
          v10 = -2147418113;
          goto LABEL_21;
        }
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v27);
        v23 = ++v22;
        if ( v22 >= v3 )
          goto LABEL_31;
      }
      v17 = 1561;
LABEL_16:
      v18 = v15;
    }
    else
    {
      v14 = (unsigned int *)*((_QWORD *)&v31 + 1);
      while ( 1 )
      {
        v27 = 0LL;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v27);
        v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *(struct Microsoft::WRL2::ContextSession **)(a1 + 24),
                *v13,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::CompositionConditionalValue::s_InterfaceType,
                &v29);
        v27 = v29;
        if ( v10 < 0 )
          break;
        v15 = Windows::UI::Composition::ConditionalExpressionAnimation::AddCondition(
                v12,
                *((struct Windows::UI::Composition::ExpressionAnimation **)v29 + 18),
                *((struct Windows::UI::Composition::CompositionAnimation **)v29 + 19));
        v10 = v15;
        if ( v15 < 0 )
        {
          v17 = 1499;
          goto LABEL_16;
        }
        v16 = *((_DWORD *)v29 + 40);
        v28 = v16;
        if ( v14 == v32 )
        {
          std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((__int64 *)&v31, v14, &v28);
          v14 = (unsigned int *)*((_QWORD *)&v31 + 1);
        }
        else
        {
          *v14++ = v16;
          *((_QWORD *)&v31 + 1) = v14;
        }
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v27);
        if ( ++v13 == (struct IUnknown **)(v30 + 8 * v3) )
          goto LABEL_12;
      }
      v17 = 1498;
LABEL_21:
      v18 = v10;
    }
    DoStackCaptureDirect(v18, v17);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v27);
    goto LABEL_18;
  }
  Windows::UI::Composition::Interactions::InteractionTracker::ClearInertiaCenterpoint(a1, a3);
LABEL_34:
  v10 = 0;
LABEL_42:
  *(_BYTE *)(a1 + 328) &= ~2u;
  return (unsigned int)v10;
}
