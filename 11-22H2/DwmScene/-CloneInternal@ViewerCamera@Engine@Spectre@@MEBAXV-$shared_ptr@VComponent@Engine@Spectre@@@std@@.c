/*
 * XREFs of ?CloneInternal@ViewerCamera@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x180092300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CloneInternal@Camera@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18005AED0 (-CloneInternal@Camera@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 *     ??$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800631A8 (--$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VVie.c)
 */

void __fastcall Spectre::Engine::ViewerCamera::CloneInternal(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v7,
         a2);
  Spectre::Engine::Camera::CloneInternal(a1, v4);
  std::dynamic_pointer_cast<Spectre::Engine::ViewerCamera,Spectre::Engine::Component>(&v7, a2);
  v5 = v7;
  *(_DWORD *)(v7 + 1800) = *(_DWORD *)(a1 + 1800);
  *(_DWORD *)(v5 + 1804) = *(_DWORD *)(a1 + 1804);
  *(_DWORD *)(v5 + 1808) = *(_DWORD *)(a1 + 1808);
  *(_DWORD *)(v5 + 1812) = *(_DWORD *)(a1 + 1812);
  *(_DWORD *)(v5 + 1816) = *(_DWORD *)(a1 + 1816);
  *(_DWORD *)(v5 + 1820) = *(_DWORD *)(a1 + 1820);
  *(_DWORD *)(v5 + 1824) = *(_DWORD *)(a1 + 1824);
  *(_DWORD *)(v5 + 1828) = *(_DWORD *)(a1 + 1828);
  *(_DWORD *)(v5 + 1832) = *(_DWORD *)(a1 + 1832);
  *(_DWORD *)(v5 + 1836) = *(_DWORD *)(a1 + 1836);
  *(_DWORD *)(v5 + 1840) = *(_DWORD *)(a1 + 1840);
  *(_DWORD *)(v5 + 1844) = *(_DWORD *)(a1 + 1844);
  *(_DWORD *)(v5 + 1848) = *(_DWORD *)(a1 + 1848);
  *(_DWORD *)(v5 + 1852) = *(_DWORD *)(a1 + 1852);
  *(_DWORD *)(v5 + 1856) = *(_DWORD *)(a1 + 1856);
  *(_DWORD *)(v5 + 1860) = *(_DWORD *)(a1 + 1860);
  *(_BYTE *)(v5 + 1864) = *(_BYTE *)(a1 + 1864);
  *(_DWORD *)(v5 + 1868) = *(_DWORD *)(a1 + 1868);
  *(_DWORD *)(v5 + 1872) = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(v5 + 1876) = *(_DWORD *)(a1 + 1876);
  *(_DWORD *)(v5 + 1880) = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(v5 + 1884) = *(_DWORD *)(a1 + 1884);
  *(_DWORD *)(v5 + 1888) = *(_DWORD *)(a1 + 1888);
  *(_DWORD *)(v5 + 1892) = *(_DWORD *)(a1 + 1892);
  *(_BYTE *)(v5 + 1896) = *(_BYTE *)(a1 + 1896);
  *(_BYTE *)(v5 + 1897) = *(_BYTE *)(a1 + 1897);
  *(_BYTE *)(v5 + 1898) = *(_BYTE *)(a1 + 1898);
  *(_DWORD *)(v5 + 1900) = *(_DWORD *)(a1 + 1900);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
