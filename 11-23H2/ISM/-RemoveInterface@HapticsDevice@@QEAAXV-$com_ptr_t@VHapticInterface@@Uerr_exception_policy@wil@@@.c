/*
 * XREFs of ?RemoveInterface@HapticsDevice@@QEAAXV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801AC724
 * Callers:
 *     ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801A83CC (-RemoveInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 * Callees:
 *     ?UpdateBamoProperties@HapticsDevice@@QEAAXXZ @ 0x1801AD51C (-UpdateBamoProperties@HapticsDevice@@QEAAXXZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801ADC5C (-erase@-$vector@V-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticsDevice::RemoveInterface(HapticsDevice *this, __int64 *a2)
{
  char *v4; // rcx
  _QWORD *v5; // r8
  char v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+38h] [rbp+10h]

  v8 = a2;
  v4 = (char *)this + 72;
  v5 = *(_QWORD **)v4;
  if ( *(_QWORD *)v4 != *((_QWORD *)v4 + 1) )
  {
    do
    {
      if ( *v5 == *a2 )
        break;
      ++v5;
    }
    while ( v5 != *((_QWORD **)v4 + 1) );
    if ( v5 != *((_QWORD **)v4 + 1) )
      std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::erase(v4, &v7);
  }
  HapticsDevice::UpdateBamoProperties(this);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
