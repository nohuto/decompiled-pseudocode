/*
 * XREFs of ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x180153198
 * Callers:
 *     ?Materialize_BamoInputAttemptedDeliveryClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18010C050 (-Materialize_BamoInputAttemptedDeliveryClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180049100 (-InternalRelease@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0InputAttemptedDeliveryClientProxy@@QEAA@AEBV?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@@Z @ 0x180153064 (--0InputAttemptedDeliveryClientProxy@@QEAA@AEBV-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ @ 0x1801533FC (-InternalAddRef@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CreateInputAttemptedDeliveryClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputAttemptedDeliveryClientProxy **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 232) + 8LL) + 120LL))(*(_QWORD *)(v4 + 232) + 8LL);
  v6 = operator new(0x40uLL);
  v10 = v5;
  v7 = (__int64)v6;
  Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalAddRef(&v10);
  *a2 = (struct BamoInputAttemptedDeliveryClientProxy *)InputAttemptedDeliveryClientProxy::InputAttemptedDeliveryClientProxy(
                                                          v7,
                                                          &v10);
  Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease(&v10);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattempteddeliveryclientproxy.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
