/*
 * XREFs of ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1800447FC
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800440DC (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180042C08 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180042C3C (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180044944 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180047320 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??0?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z @ 0x180064038 (--0-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z.c)
 *     ??$_Emplace_reallocate@AEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAV23@@Z @ 0x1800E8524 (--$_Emplace_reallocate@AEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@-$vector.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderData::CheckPrimitives(CRenderData *this)
{
  unsigned int v2; // ebx
  int i; // eax
  CVisual *v4; // rbx
  int VisualTree; // eax
  unsigned int v6; // ebx
  __int64 *v8[6]; // [rsp+20h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v10; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+28h] BYREF
  struct CVisualTree *v12; // [rsp+80h] [rbp+30h] BYREF
  void *v13; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  v8[1] = 0LL;
  v8[0] = (__int64 *)CDataStreamWriter::FlushData((CRenderData *)((char *)this + 72));
  for ( i = CDataBlockReader::GetFirstItemSafe(v8, &v10, &v13, &v11);
        ;
        i = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v8, &v10, &v13, &v11) )
  {
    if ( i )
    {
      *((_BYTE *)this + 297) = v2 <= 1;
      return 0LL;
    }
    if ( v10 == 456 )
      goto LABEL_6;
    if ( v10 == 455 )
    {
LABEL_19:
      ++v2;
      continue;
    }
    if ( v10 <= 0x1C9 )
      goto LABEL_22;
    if ( v10 <= 0x1CC )
      goto LABEL_6;
    if ( v10 == 463 )
      break;
    if ( v10 == 462 )
      goto LABEL_6;
    if ( v10 == 461 )
      goto LABEL_19;
    if ( v10 - 464 > 1 )
LABEL_22:
      ModuleFailFastForHRESULT(2291663875LL, retaddr);
LABEL_7:
    ;
  }
  v12 = 0LL;
  v4 = *(CVisual **)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)v13 + 1));
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v12);
  VisualTree = CVisual::GetVisualTree(v4, &v12, 1);
  v6 = VisualTree;
  if ( VisualTree >= 0 )
  {
    if ( *((_QWORD *)this + 22) == *((_QWORD *)this + 23) )
    {
      std::vector<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> &>(
        (char *)this + 168,
        *((_QWORD *)this + 22),
        &v12);
    }
    else
    {
      wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::com_ptr_t<CVisualTree,wil::err_returncode_policy>(
        *((_QWORD *)this + 22),
        v12);
      *((_QWORD *)this + 22) += 8LL;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
LABEL_6:
    v2 = 2;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x190,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\renderdata.cpp",
    (const char *)(unsigned int)VisualTree);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v6;
}
