/*
 * XREFs of ??$make_shared@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@std@@YA?AV?$shared_ptr@VDeactivatableDuckingDescriptor@@@0@AEAPEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@0@@Z @ 0x18003EEB4
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000BDA0 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCA0 (--2@YAPEAX_K@Z.c)
 *     ??0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x180020048 (--0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV-$shared_ptr@VDuckingDescrip.c)
 */

_QWORD *__fastcall std::make_shared<DeactivatableDuckingDescriptor,IDuckingController * &,std::shared_ptr<DuckingDescriptor> const &>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _QWORD *result; // rax

  v6 = operator new(0x30uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vftable';
    DeactivatableDuckingDescriptor::DeactivatableDuckingDescriptor((_QWORD *)v6 + 2, *a2, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  result = a1;
  a1[1] = v7;
  return result;
}
