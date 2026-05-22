/*
 * XREFs of ?SetSourceModifier@CompositionManipulation@Composition@UI@Windows@@QEAAXW4SourceModifierIndex@@PEAVConditionalExpressionAnimator@234@@Z @ 0x180161630
 * Callers:
 *     ?ConfigureSourceModifiers@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@@Z @ 0x18011D294 (-ConfigureSourceModifiers@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJV-$s.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionManipulation::SetSourceModifier(
        __int64 a1,
        signed int a2,
        Microsoft::WRL2::NestableRuntimeClass *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rcx
  int v8; // edx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  if ( a3 )
    v6 = *((_DWORD *)a3 + 32);
  else
    v6 = 0;
  if ( (unsigned int)a2 > 2 && (unsigned int)(a2 - 3) >= 2 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  if ( *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 8LL * a2 + 168) != a3 )
  {
    if ( a3 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a3);
    v9 = *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 8 * v3 + 168);
    *(_QWORD *)(a1 + 8 * v3 + 168) = a3;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
  }
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 128);
  v9 = (Microsoft::WRL2::NestableRuntimeClass *)__PAIR64__(v6, v3);
  DirectComposition::CDevice::ResourceSetBufferProperty(*(DirectComposition::CDevice **)(v7 + 456), v8, 10, &v9, 8uLL);
}
