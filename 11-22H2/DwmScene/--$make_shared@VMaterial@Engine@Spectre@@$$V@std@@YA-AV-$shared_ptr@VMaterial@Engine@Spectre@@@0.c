/*
 * XREFs of ??$make_shared@VMaterial@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@0@XZ @ 0x18005F5D4
 * Callers:
 *     ??$CreateResource@VMaterial@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18005EBB4 (--$CreateResource@VMaterial@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VMaterial@E.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$?4VScene@Engine@Spectre@@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002A670 (--$-4VScene@Engine@Spectre@@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 *     ??0Material@Engine@Spectre@@QEAA@XZ @ 0x18004391C (--0Material@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::Material,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rbx
  _DWORD *v8; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-18h]

  v2 = operator new(0xF8uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Material>::`vftable';
    Spectre::Engine::Material::Material((Spectre::Engine::Material *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (__int64 *)(v3 + 4);
  *a1 = v3 + 4;
  a1[1] = v3;
  if ( v3 != (_DWORD *)-16LL )
  {
    v5 = *((_QWORD *)v3 + 15);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement(v3 + 2);
      v8 = v3 + 4;
      v9 = (std::_Ref_count_base *)a1[1];
      v6 = v9;
      std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>(v4 + 12, &v8);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
    }
  }
  return a1;
}
