/*
 * XREFs of ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180105DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x1801059E8 (-CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@.c)
 *     ?CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180105A60 (-CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeP.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CompareProcessingModeParameters(
        CSharedStreamGroupProxy *this,
        const struct CProcessingModeParameters *a2,
        enum PMP_MATCH_TYPE *a3)
{
  CSharedStreamGroupProxy *v3; // rbp
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (CSharedStreamGroupProxy *)((char *)this - 8);
  *(_DWORD *)a3 = 1;
  v6 = CSharedStreamGroupProxy::CompareAECProcessingModeParameters(
         (CSharedStreamGroupProxy *)((char *)this - 8),
         a2,
         (enum PMP_MATCH_TYPE *)&v11);
  if ( v6 < 0 )
  {
    v7 = 1862LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = v11;
  if ( v11 == 1 || (*(_DWORD *)a3 = v11, v9) )
  {
    v6 = CSharedStreamGroupProxy::CompareEffectTogglesProcessingModeParameters(v3, a2, (enum PMP_MATCH_TYPE *)&v11);
    if ( v6 < 0 )
    {
      v7 = 1870LL;
      goto LABEL_3;
    }
    if ( v11 != 1 )
      *(_DWORD *)a3 = v11;
  }
  return 0LL;
}
