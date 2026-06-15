/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@EEAAXXZ @ 0x180012D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::_Destroy(__int64 a1)
{
  __int64 v2; // rcx
  void **result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>(a1 + 24);
  result = &IDuckingDescriptor::`vftable';
  *(_QWORD *)(a1 + 16) = &IDuckingDescriptor::`vftable';
  return result;
}
