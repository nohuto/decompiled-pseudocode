/*
 * XREFs of ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x18014BEE4
 * Callers:
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18014C15C (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 * Callees:
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x18003B2E8 (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyControllerClientProxy::EdgyControllerClientProxy(__int64 a1, __int64 *a2)
{
  struct EdgyConnection *v4; // rax
  const char *v5; // r9
  struct EdgyConnection *v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoEdgyControllerClientProxyImpl::`vftable';
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &EdgyControllerClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *(_QWORD *)(a1 + 8) = &EdgyControllerClientProxy::`vftable'{for `IEdgyControllerClientProxy'};
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 7LL;
  *(_WORD *)(a1 + 88) = 0;
  v4 = EdgyConnection::Get();
  v6 = v4;
  *(_QWORD *)(a1 + 120) = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v4 + 8LL))(v4);
  v7 = *a2;
  *(_QWORD *)(a1 + 128) = *a2;
  if ( v7 )
    (**(void (__fastcall ***)(__int64, struct EdgyConnection *))(v7 + 16))(v7 + 16, v6);
  if ( !*a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      39LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\server\\edgycontr"
               "ollerclientproxy.cpp",
      v5);
  if ( !*(_QWORD *)(a1 + 120) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      40LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\server\\edgycontr"
               "ollerclientproxy.cpp",
      v5);
  return a1;
}
