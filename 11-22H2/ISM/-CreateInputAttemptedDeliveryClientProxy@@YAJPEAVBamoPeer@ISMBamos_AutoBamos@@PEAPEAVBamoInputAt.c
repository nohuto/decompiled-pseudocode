/*
 * XREFs of ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1801807C8
 * Callers:
 *     ?Materialize_BamoInputAttemptedDeliveryClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180135064 (-Materialize_BamoInputAttemptedDeliveryClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ @ 0x1800557FC (-InternalAddRef@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800559A4 (-InternalRelease@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0InputAttemptedDeliveryClientProxy@@QEAA@AEBV?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@@Z @ 0x180180694 (--0InputAttemptedDeliveryClientProxy@@QEAA@AEBV-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@@Z.c)
 */

__int64 __fastcall CreateInputAttemptedDeliveryClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputAttemptedDeliveryClientProxy **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD); // rbx
  void *v6; // rax
  __int64 v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 248) + 8LL)
                                                                            + 120LL))(*(_QWORD *)(v4 + 248) + 8LL);
  v6 = operator new(0x40uLL);
  v10 = v5;
  v7 = (__int64)v6;
  Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalAddRef(&v10);
  *a2 = (struct BamoInputAttemptedDeliveryClientProxy *)InputAttemptedDeliveryClientProxy::InputAttemptedDeliveryClientProxy(
                                                          v7,
                                                          &v10);
  Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease((__int64 *)&v10);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattempteddeliveryclientproxy.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
