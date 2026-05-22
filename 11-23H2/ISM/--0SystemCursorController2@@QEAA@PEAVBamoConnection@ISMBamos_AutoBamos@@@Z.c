/*
 * XREFs of ??0SystemCursorController2@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003A34C
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180039E9C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoSystemCursorControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003A3CC (--0BamoSystemCursorControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@1@AEBV?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@1@@Z @ 0x18003A420 (--0-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_compare@W4InputType@@U-$hash@W4Inpu.c)
 *     ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x1800537E0 (-SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z.c)
 */

// Hidden C++ exception states: #wind=4
SystemCursorController2 *__fastcall SystemCursorController2::SystemCursorController2(
        SystemCursorController2 *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF
  int v5; // [rsp+44h] [rbp+1Ch]

  BamoSystemCursorControllerPrincipal::BamoSystemCursorControllerPrincipal(this, a2);
  *(_QWORD *)this = &SystemCursorController2::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemCursorController2::`vftable'{for `ISystemCursorControllerPrincipal'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v5 = ((unsigned __int64)this + 96) >> 32;
  v4 = 0;
  std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>(
    (char *)this + 96,
    &v4);
  BamoSystemCursorControllerPrincipal::SetScaleOverride((SystemCursorController2 *)((char *)this + 8), 1.0);
  return this;
}
