/*
 * XREFs of ?CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverClientProxy@@@Z @ 0x180155758
 * Callers:
 *     ?Materialize_BamoInputObserverClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180135564 (-Materialize_BamoInputObserverClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0InputObserverClientProxy@@QEAA@PEAVCInputObserverManager@@@Z @ 0x180155618 (--0InputObserverClientProxy@@QEAA@PEAVCInputObserverManager@@@Z.c)
 */

__int64 __fastcall CreateInputObserverClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputObserverClientProxy **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct CInputObserverManager *v5; // rbx
  struct BamoInputObserverClientProxy *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  InputObserverClientProxy *v9; // [rsp+30h] [rbp+8h]

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = (struct CInputObserverManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 248) + 8LL)
                                                                          + 136LL))(*(_QWORD *)(v4 + 248) + 8LL);
  v9 = (InputObserverClientProxy *)operator new(0x40uLL);
  v6 = InputObserverClientProxy::InputObserverClientProxy(v9, v5);
  *a2 = v6;
  if ( v6 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\inputobserverclientproxy.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
