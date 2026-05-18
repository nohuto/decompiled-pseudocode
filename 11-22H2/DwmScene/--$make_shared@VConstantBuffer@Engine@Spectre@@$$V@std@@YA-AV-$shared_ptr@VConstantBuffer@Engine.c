/*
 * XREFs of ??$make_shared@VConstantBuffer@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@0@XZ @ 0x180084348
 * Callers:
 *     ??$CreateResource@VConstantBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180083B9C (--$CreateResource@VConstantBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VCons.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?4VTexture@Engine@Spectre@@@?$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@1@@Z @ 0x180015630 (--$-4VTexture@Engine@Spectre@@@-$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ConstantBuffer@Engine@Spectre@@QEAA@XZ @ 0x18009BBA8 (--0ConstantBuffer@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::ConstantBuffer,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rbx
  _DWORD *v8; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-18h]

  v2 = operator new(0x90uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ConstantBuffer>::`vftable';
    Spectre::Engine::ConstantBuffer::ConstantBuffer((Spectre::Engine::ConstantBuffer *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3 + 4;
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
      std::weak_ptr<Spectre::Engine::Texture>::operator=<Spectre::Engine::Texture>((_QWORD *)v4 + 12, (__int64 *)&v8);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
    }
  }
  return a1;
}
