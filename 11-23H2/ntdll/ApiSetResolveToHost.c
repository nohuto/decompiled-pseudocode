/*
 * XREFs of ApiSetResolveToHost @ 0x180019BC0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpApplyFileNameRedirection @ 0x1800198D4 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     ApiSetQueryApiSetPresence @ 0x180077770 (ApiSetQueryApiSetPresence.c)
 * Callees:
 *     ApiSetpSearchForApiSetHost @ 0x180014B50 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x180019D10 (ApiSetpSearchForApiSet.c)
 *     ApiSetResolveToHost_V7 @ 0x18009EE48 (ApiSetResolveToHost_V7.c)
 */

__int64 __fastcall ApiSetResolveToHost(_BYTE *a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v7; // rbx
  char v9; // di
  _QWORD *v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  _WORD *v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rcx

  v7 = (__int64)a1;
  if ( *a1 == 7 )
    return ApiSetResolveToHost_V7((_DWORD)a1, (_DWORD)a2, a3, (_DWORD)a4, a5);
  if ( *(_DWORD *)a1 == 6 && (a1[8] & 4) != 0 )
  {
    a1 += 28;
    if ( *a1 == 7 )
      return ApiSetResolveToHost_V7((_DWORD)a1, (_DWORD)a2, a3, (_DWORD)a4, a5);
  }
  v9 = 0;
  *(_OWORD *)a5 = 0LL;
  if ( *a2 >= 8u )
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = *v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      v12 = *a2;
      v13 = (_WORD *)((char *)v10 + v12);
      do
      {
        if ( (unsigned int)v12 <= 1 )
          break;
        LODWORD(v12) = v12 - 2;
        --v13;
      }
      while ( *v13 != 45 );
      v14 = (unsigned __int16)v12 >> 1;
      if ( v14 )
      {
        v15 = ApiSetpSearchForApiSet(v7, *((_QWORD *)a2 + 1), v14, v10);
        if ( v15 )
        {
          if ( a3 && *(_DWORD *)(v15 + 20) > 1u )
          {
            v16 = ApiSetpSearchForApiSetHost(v15, *(const WCHAR **)(a3 + 8), *(_WORD *)a3 >> 1, v7);
LABEL_19:
            v9 = 1;
            *(_QWORD *)(a5 + 8) = v7 + *(unsigned int *)(v16 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v16 + 16);
            *(_WORD *)a5 = *(_WORD *)(v16 + 16);
            goto LABEL_20;
          }
          if ( *(_DWORD *)(v15 + 20) )
          {
            v16 = v7 + *(unsigned int *)(v15 + 16);
            goto LABEL_19;
          }
        }
      }
    }
  }
LABEL_20:
  *a4 = v9;
  return 0LL;
}
