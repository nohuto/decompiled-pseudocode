/*
 * XREFs of ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x1800257F0
 * Callers:
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180024FF0 (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014AD7C (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1800251E0 (--0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV-$shared_ptr@$$CBUEffe.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::CreateInstanceFromConfiguration(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  std::_Ref_count_base *v8; // rax
  std::_Ref_count_base *v9; // rbx
  int v11[2]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (std::_Ref_count_base *)operator new(0x6F8uLL);
  v9 = v8;
  *(_QWORD *)v11 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 2) = 1;
    *((_DWORD *)v8 + 3) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<EffectPack>::`vftable';
    EffectPack::EffectPack((__int64)v8 + 16, a3, a2, a1);
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)v11 = (char *)v9 + 16;
  v12 = v9;
  std::shared_ptr<std::function<void (void)>>::operator=(a4, (__int64 *)v11);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( *a4 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x100,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
    (const char *)0x8007000ELL,
    v11[0]);
  return 2147942414LL;
}
