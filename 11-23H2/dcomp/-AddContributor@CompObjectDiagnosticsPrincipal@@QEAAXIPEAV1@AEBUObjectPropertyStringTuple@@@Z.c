/*
 * XREFs of ?AddContributor@CompObjectDiagnosticsPrincipal@@QEAAXIPEAV1@AEBUObjectPropertyStringTuple@@@Z @ 0x18019CD1C
 * Callers:
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800E6460 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U-$less@I@std.c)
 *     ??$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@?$vector@UContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@QEAAPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU23@AEAPEAV3@AEBI$$QEAPEAUHSTRING__@@3@Z @ 0x18019C13C (--$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@-$vector.c)
 *     ??$construct@UContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV2@AEBIPEAUHSTRING__@@PEAU3@@?$_Default_allocator_traits@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@SAXAEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@1@QEAUContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV4@AEBI$$QEAPEAUHSTRING__@@4@Z @ 0x18019C52C (--$construct@UContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV2@AEBIPEAUHSTRING__@@PEAU3@@-$_.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::AddContributor(
        CompObjectDiagnosticsPrincipal *this,
        unsigned int a2,
        struct CompObjectDiagnosticsPrincipal *a3,
        const struct ObjectPropertyStringTuple *a4)
{
  __int64 v5; // r10
  __int64 *v6; // r11
  __int64 v7; // rbx
  char *v8; // rcx
  __int64 v9; // rdx
  int *v10; // r9
  _BYTE v11[16]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+28h] BYREF
  struct CompObjectDiagnosticsPrincipal *v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  v15 = a3;
  v14 = a2;
  std::_Tree<std::_Tmap_traits<unsigned int,SuperWetInkBallpointPenPoint const,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 7,
    (__int64)v11,
    &v14);
  v7 = v12;
  if ( *(_BYTE *)(v12 + 25) || a2 < *(_DWORD *)(v12 + 32) )
    v7 = *v6;
  v8 = (char *)(v7 + 72);
  v9 = *(_QWORD *)(v7 + 80);
  v10 = (int *)(v5 + 4);
  v13 = *(_QWORD *)(v5 + 16);
  v16 = *(_QWORD *)(v5 + 8);
  if ( v9 == *(_QWORD *)(v7 + 88) )
  {
    std::vector<CompObjectDiagnosticsPrincipal::Contributor>::_Emplace_reallocate<CompObjectDiagnosticsPrincipal * &,unsigned int const &,HSTRING__ *,HSTRING__ *>(
      v8,
      v9,
      (int)&v15,
      (int)v10,
      (__int64)&v16,
      (HSTRING)&v13);
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<CompObjectDiagnosticsPrincipal::Contributor>>::construct<CompObjectDiagnosticsPrincipal::Contributor,CompObjectDiagnosticsPrincipal * &,unsigned int const &,HSTRING__ *,HSTRING__ *>(
      (HSTRING)v8,
      v9,
      (__int64 *)&v15,
      v10,
      (HSTRING *)&v16,
      (HSTRING)&v13);
    *(_QWORD *)(v7 + 80) += 32LL;
  }
}
