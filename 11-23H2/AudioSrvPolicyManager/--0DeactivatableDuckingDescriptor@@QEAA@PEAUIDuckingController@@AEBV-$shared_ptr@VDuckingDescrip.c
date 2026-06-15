/*
 * XREFs of ??0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x180020048
 * Callers:
 *     _lambda_4d82e2a18adfd26d1e0b2998ee994ec4_::operator() @ 0x180020650 (_lambda_4d82e2a18adfd26d1e0b2998ee994ec4_--operator().c)
 *     ??$make_shared@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@std@@YA?AV?$shared_ptr@VDeactivatableDuckingDescriptor@@@0@AEAPEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@0@@Z @ 0x18003EEB4 (--$make_shared@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEBV-$shared_ptr@VDuc.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingController@@@Z @ 0x18001FF9C (--0-$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingControlle.c)
 */

_QWORD *__fastcall DeactivatableDuckingDescriptor::DeactivatableDuckingDescriptor(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  *a1 = &DeactivatableDuckingDescriptor::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  a1[1] = *a3;
  a1[2] = a3[1];
  wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
    a1 + 3,
    a2);
  return a1;
}
