/*
 * XREFs of ?CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x1801059E8
 * Callers:
 *     ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180105DB0 (-CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PE.c)
 *     ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x18010A830 (-UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z.c)
 * Callees:
 *     ?IsLooseMatch@@YA_NQEAG0@Z @ 0x1801085A0 (-IsLooseMatch@@YA_NQEAG0@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CompareAECProcessingModeParameters(
        CSharedStreamGroupProxy *this,
        const struct CProcessingModeParameters *a2,
        enum PMP_MATCH_TYPE *a3)
{
  unsigned __int16 *v3; // rdi
  unsigned __int16 *v5; // rbx

  v3 = (unsigned __int16 *)*((_QWORD *)this + 37);
  v5 = (unsigned __int16 *)*((_QWORD *)a2 + 3);
  *(_DWORD *)a3 = 1;
  if ( !v3 )
  {
    if ( !v5 )
      return 0LL;
    goto LABEL_6;
  }
  if ( !v5 || (unsigned int)_o__wcsicmp(v3, v5) )
LABEL_6:
    *(_DWORD *)a3 = IsLooseMatch(v3, v5) ? 2 : 0;
  return 0LL;
}
