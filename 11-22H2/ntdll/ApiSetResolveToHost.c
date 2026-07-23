/*
 * XREFs of ApiSetResolveToHost @ 0x180019DD0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpApplyFileNameRedirection @ 0x180019AE4 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     ApiSetQueryApiSetPresence @ 0x180077100 (ApiSetQueryApiSetPresence.c)
 * Callees:
 *     ApiSetpSearchForApiSetHost @ 0x180014D60 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x180019EF0 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char v5; // bl
  _QWORD *v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _WORD *v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax

  v5 = 0;
  *(_OWORD *)a5 = 0LL;
  if ( *a2 >= 8u )
  {
    v9 = (_QWORD *)*((_QWORD *)a2 + 1);
    v10 = *v9 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v10 == 0x2D004900500041LL || v10 == 0x2D005400580045LL )
    {
      v11 = *a2;
      v12 = (_WORD *)((char *)v9 + v11);
      do
      {
        if ( (unsigned int)v11 <= 1 )
          break;
        LODWORD(v11) = v11 - 2;
        --v12;
      }
      while ( *v12 != 45 );
      v13 = (unsigned __int16)v11 >> 1;
      if ( v13 )
      {
        v14 = ApiSetpSearchForApiSet(a1, *((_QWORD *)a2 + 1), v13);
        if ( v14 )
        {
          if ( a3 && *(_DWORD *)(v14 + 20) > 1u )
          {
            v15 = ApiSetpSearchForApiSetHost(v14, *(const WCHAR **)(a3 + 8), *(_WORD *)a3 >> 1, a1);
            goto LABEL_12;
          }
          if ( *(_DWORD *)(v14 + 20) )
          {
            v15 = a1 + *(unsigned int *)(v14 + 16);
LABEL_12:
            v5 = 1;
            *(_QWORD *)(a5 + 8) = a1 + *(unsigned int *)(v15 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v15 + 16);
            *(_WORD *)a5 = *(_WORD *)(v15 + 16);
          }
        }
      }
    }
  }
  result = 0LL;
  *a4 = v5;
  return result;
}
