/*
 * XREFs of ??$make_shared@UEffectPackConfiguration@@AEAU_GUID@@@std@@YA?AV?$shared_ptr@UEffectPackConfiguration@@@0@AEAU_GUID@@@Z @ 0x18015443C
 * Callers:
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1801545D0 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180025550 (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<EffectPackConfiguration,_GUID &>(_QWORD *a1, struct _GUID *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct _GUID v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = operator new(0x768uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<EffectPackConfiguration>::`vftable';
    v7 = *a2;
    EffectPackConfiguration::EffectPackConfiguration((EffectPackConfiguration *)(v4 + 4), &v7);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
