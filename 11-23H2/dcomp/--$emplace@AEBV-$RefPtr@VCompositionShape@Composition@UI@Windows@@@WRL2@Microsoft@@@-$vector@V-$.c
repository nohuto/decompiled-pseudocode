/*
 * XREFs of ??$emplace@AEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@AEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x180140E20
 * Callers:
 *     ?InsertAt@?$VectorBasedCollection@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAJIAEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x18014375C (-InsertAt@-$VectorBasedCollection@V-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800B6F0C (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@.c)
 *     ??4?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801414D0 (--4-$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape>>::emplace<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape> const &>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        Microsoft::WRL2::NestableRuntimeClass **a4)
{
  Microsoft::WRL2::NestableRuntimeClass **v4; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v9; // rsi
  Microsoft::WRL2::NestableRuntimeClass *v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8);
  if ( v4 == *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 16) )
  {
    *a2 = std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> const &>(
            (const char *)a1,
            a3,
            a4);
  }
  else
  {
    v8 = *a4;
    if ( (Microsoft::WRL2::NestableRuntimeClass **)a3 == v4 )
    {
      *v4 = v8;
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v8);
      *(_QWORD *)(a1 + 8) += 8LL;
    }
    else
    {
      v11[0] = *a4;
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v8);
      *v4 = 0LL;
      v9 = v4 - 1;
      *v4 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *(_QWORD *)(a1 + 8) += 8LL;
      while ( v9 != (Microsoft::WRL2::NestableRuntimeClass **)a3 )
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape>::operator=(--v4, --v9);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape>::operator=(a3, v11);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v11);
    }
    *a2 = a3;
  }
  return a2;
}
