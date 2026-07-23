/*
 * XREFs of MiCaptureRetpolineRelocationTables @ 0x1406A723C
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x140830F70 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlValidateRetpolineRelocation @ 0x14020CA94 (RtlValidateRetpolineRelocation.c)
 *     MiIsRetpolineEnabled @ 0x14020EBC0 (MiIsRetpolineEnabled.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     MiFreeImageRetpolineContext @ 0x1406A88E0 (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureRetpolineRelocationTables(
        char *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        char a6,
        __int64 *a7)
{
  char *v9; // rbx
  PVOID v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rsi
  char *v14; // r15
  __int64 v15; // r13
  unsigned int v16; // eax
  __int64 *v17; // rbx
  int v18; // ebx
  PVOID Pool; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-58h] BYREF
  ULONG v23; // [rsp+24h] [rbp-54h] BYREF
  char *v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  char v29; // [rsp+A8h] [rbp+30h]

  v9 = a1;
  v24 = 0LL;
  v22 = 0;
  v29 = 0;
  v10 = RtlImageDirectoryEntryToData(a1, 1u, 0xCu, &v23);
  if ( v10 )
  {
    v11 = (_DWORD)v10 - (_DWORD)v9;
    *(_DWORD *)a7 = v11;
    if ( v11 > a2 )
    {
LABEL_30:
      v18 = -1073741701;
      goto LABEL_28;
    }
  }
  else
  {
    *(_DWORD *)a7 = 0;
  }
  if ( *a5 == 1 )
  {
    v12 = a5[1] + a4 + 8;
    v13 = (unsigned int)(a4 + 8);
    while ( (unsigned int)v13 < v12 )
    {
      if ( v13 + 12 > (unsigned __int64)v12 )
        goto LABEL_30;
      v14 = &v9[v13];
      v24 = &v9[v13];
      v25 = *(_QWORD *)&v9[v13];
      v15 = *(unsigned int *)&v9[v13 + 8];
      v16 = v13 + 12;
      if ( (int)v13 + 12 < (unsigned int)v13 )
        goto LABEL_30;
      v13 = v16 + (unsigned int)v15;
      if ( (unsigned int)v13 < v16 || (unsigned int)v13 > v12 )
        goto LABEL_30;
      v17 = 0LL;
      if ( v25 == 3 )
      {
        v17 = a7 + 1;
      }
      else if ( v25 == 4 )
      {
        if ( MiIsRetpolineEnabled() )
          v17 = a7 + 2;
      }
      else if ( v25 == 5 && MiIsRetpolineEnabled() )
      {
        v17 = a7 + 3;
      }
      if ( v17 )
      {
        v29 = 1;
        if ( *v17 )
          goto LABEL_30;
        Pool = MiAllocatePool(256, v15 + 12, 0x7252694Du);
        *v17 = (__int64)Pool;
        if ( !Pool )
        {
          v18 = -1073741670;
          goto LABEL_28;
        }
        memmove(Pool, v14, v15 + 12);
        v21 = *v17;
        *(_QWORD *)v21 = v25;
        *(_DWORD *)(v21 + 8) = v15;
        v18 = RtlValidateRetpolineRelocation(*v17, a2, a3, &v22);
        if ( v18 < 0 )
          goto LABEL_28;
        *((_DWORD *)a7 + 1) += v22;
      }
      v9 = a1;
    }
    if ( v29 )
      return 0;
    v18 = -1073741637;
  }
  else
  {
    v18 = -1073741637;
  }
LABEL_28:
  MiFreeImageRetpolineContext(a7);
  return (unsigned int)v18;
}
