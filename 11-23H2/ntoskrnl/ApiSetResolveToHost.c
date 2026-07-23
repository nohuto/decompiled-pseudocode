/*
 * XREFs of ApiSetResolveToHost @ 0x14035F5D8
 * Callers:
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x140861F94 (ExIsMultiSessionSku.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x14035F720 (ApiSetpSearchForApiSet.c)
 *     ApiSetResolveToHost_V7 @ 0x14041705C (ApiSetResolveToHost_V7.c)
 *     ApiSetpSearchForApiSetHost @ 0x140614E38 (ApiSetpSearchForApiSetHost.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v7; // rbx
  char v9; // di
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  _WORD *v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rcx

  v7 = a1;
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetResolveToHost_V7(a1, (_DWORD)a2, a3, (_DWORD)a4, a5);
  if ( *(_DWORD *)a1 == 6 && (*(_DWORD *)(a1 + 8) & 4) != 0 )
  {
    a1 += 28LL;
    if ( *(_BYTE *)a1 == 7 )
      return ApiSetResolveToHost_V7(a1, (_DWORD)a2, a3, (_DWORD)a4, a5);
  }
  v9 = 0;
  *(_OWORD *)a5 = 0LL;
  v10 = *a2;
  if ( (unsigned int)v10 >= 8 )
  {
    v11 = (_QWORD *)*((_QWORD *)a2 + 1);
    v12 = *v11 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
    {
      v13 = v10;
      v14 = (_WORD *)((char *)v11 + v10);
      do
      {
        if ( v13 <= 1 )
          break;
        v13 -= 2;
        --v14;
      }
      while ( *v14 != 45 );
      v15 = (unsigned __int16)v13 >> 1;
      if ( v15 )
      {
        v16 = ApiSetpSearchForApiSet(v7, v11, v15, a4);
        if ( v16 )
        {
          if ( a3 && *(_DWORD *)(v16 + 20) > 1u )
          {
            v17 = ApiSetpSearchForApiSetHost(v16, *(_QWORD *)(a3 + 8), *(_WORD *)a3 >> 1, v7);
LABEL_19:
            v9 = 1;
            *(_QWORD *)(a5 + 8) = v7 + *(unsigned int *)(v17 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v17 + 16);
            *(_WORD *)a5 = *(_WORD *)(v17 + 16);
            goto LABEL_20;
          }
          if ( *(_DWORD *)(v16 + 20) )
          {
            v17 = v7 + *(unsigned int *)(v16 + 16);
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
