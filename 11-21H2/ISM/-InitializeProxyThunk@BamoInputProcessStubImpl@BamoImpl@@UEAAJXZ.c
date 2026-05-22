/*
 * XREFs of ?InitializeProxyThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800B1B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoInputProcessStubImpl::InitializeProxyThunk(BamoImpl::BamoInputProcessStubImpl *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 3);
  v3 = *(_QWORD *)(v1 + 40);
  v4 = v1 - 16;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7796,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5,
      v9);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**(_QWORD **)(v4 + 56) + 8LL))(
         *(_QWORD *)(v4 + 56),
         v4,
         (char *)this - 16);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 56) + 56LL))(*(_QWORD *)(v4 + 56), v4);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x779A,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
  return v6;
}
