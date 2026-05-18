/*
 * XREFs of ?CloneInternal@Component@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800812C0
 * Callers:
 *     ?CloneInternal@Light@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800430C0 (-CloneInternal@Light@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 *     ?CloneInternal@Bounds@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18004A1B0 (-CloneInternal@Bounds@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 *     ?CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18004B500 (-CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@.c)
 *     ?CloneInternal@LightProbe@Engine@Spectre@@UEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x180051790 (-CloneInternal@LightProbe@Engine@Spectre@@UEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AE.c)
 *     ?CloneInternal@Camera@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18005AED0 (-CloneInternal@Camera@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 *     ?CloneInternal@ColorTransform@Engine@Spectre@@UEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18008F840 (-CloneInternal@ColorTransform@Engine@Spectre@@UEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std.c)
 *     ?CloneInternal@Aimer@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x180096770 (-CloneInternal@Aimer@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Component::CloneInternal(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v4; // rcx

  std::string::operator=((void **)(*a2 + 24LL), (void **)(a1 + 24));
  *(_BYTE *)(*a2 + 72LL) = *(_BYTE *)(a1 + 72);
  *(_DWORD *)(*a2 + 76LL) = *(_DWORD *)(a1 + 76);
  v4 = (std::_Ref_count_base *)a2[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
