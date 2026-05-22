/*
 * XREFs of ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x180178C1C
 * Callers:
 *     ?Materialize_BamoEdgyControllerClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180134AA0 (-Materialize_BamoEdgyControllerClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A998C (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x1801789A8 (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateEdgyControllerClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoEdgyControllerClientProxy **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  void *v6; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 248) + 8LL) + 72LL))(*(_QWORD *)(v4 + 248) + 8LL);
  v6 = operator new(0x88uLL);
  v9 = v5;
  if ( v5 )
    (**(void (__fastcall ***)(__int64))(v5 + 16))(v5 + 16);
  *a2 = (struct BamoEdgyControllerClientProxy *)EdgyControllerClientProxy::EdgyControllerClientProxy((__int64)v6, &v9);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v9);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\server\\edgycontrol"
             "lerclientproxy.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
