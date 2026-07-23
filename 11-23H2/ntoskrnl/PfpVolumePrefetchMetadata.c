/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x140684C04
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406846E8 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1402F8B88 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x1402F8BE8 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14075D9D0 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14075DAEC (PfpGetPageListCount.c)
 *     PfpFileSetupObjectAttributes @ 0x14075E73C (PfpFileSetupObjectAttributes.c)
 *     PfpPrefetchDirectoryStream @ 0x1407D7DDC (PfpPrefetchDirectoryStream.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r13
  __int16 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  _DWORD *v13; // rbx
  int v14; // ebx
  __int64 result; // rax
  int v16; // r9d
  int v17; // eax
  int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // rax
  unsigned int v21; // r15d
  unsigned __int64 v22; // r12
  unsigned int *v23; // r11
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  __int64 v26; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // r10d
  __int64 v32; // [rsp+60h] [rbp-59h]
  __int64 v33; // [rsp+68h] [rbp-51h]
  __int64 v34; // [rsp+70h] [rbp-49h]
  int v35; // [rsp+78h] [rbp-41h]
  ULONG_PTR v36[2]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v37; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v38[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v39; // [rsp+C0h] [rbp+7h]
  int v40; // [rsp+C8h] [rbp+Fh]
  int v42; // [rsp+130h] [rbp+77h] BYREF
  __int64 v43; // [rsp+138h] [rbp+7Fh] BYREF

  v42 = 0;
  LODWORD(v43) = 0;
  v39 = 0LL;
  v40 = 0;
  v3 = 5LL * a2;
  *(_OWORD *)v36 = 0LL;
  v4 = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  memset(v38, 0, sizeof(v38));
  v5 = a1[3];
  v6 = *(_QWORD *)(*a1 + 32LL);
  v33 = a2;
  v35 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v7 = *(_WORD *)(*a1 + 30LL);
  *(_DWORD *)v5 = 3;
  v34 = v3;
  *(_QWORD *)(v5 + 8) = (8 * (v7 & 7u)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, (_OWORD *)a1 + 3, 0xB0u, a2, &v43);
  v8 = 0LL;
  if ( (*(_DWORD *)(v6 + 8 * v3 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      *(_DWORD *)(v5 + 4) = 0;
      if ( (unsigned int)v8 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 )
      {
        do
        {
          v9 = 3 * v8;
          v8 = (unsigned int)(v8 + 1);
          v10 = *(_QWORD *)(v6 + 8 * v3 + 16) + 16 * v9;
          v11 = *(_QWORD *)(v10 + 8);
          if ( (*(_BYTE *)v10 & 0x10) != 0 )
            v4 = v10;
          if ( v11 )
          {
            *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 4))++ + 16) = v11;
            if ( *(_DWORD *)(v5 + 4) >= *((_DWORD *)a1 + 8) )
              break;
          }
        }
        while ( (unsigned int)v8 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 );
        v32 = v4;
      }
      if ( !*(_DWORD *)(v5 + 4) )
        break;
      if ( (unsigned int)PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) < 0x80 )
      {
LABEL_31:
        v14 = -1073741248;
        goto LABEL_16;
      }
      v14 = IopXxxControlFile(*(HANDLE *)((v19 << 6) + a1[2]), (__int64)v36, 590112, v5, 8 * v18 + 16, 0LL, 0, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v5 + 4));
      if ( v14 < 0 )
        goto LABEL_16;
      if ( v14 == 259 )
        KeBugCheckEx(0x191u, 0x161CuLL, 0LL, 0LL, 0LL);
      v4 = v32;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 );
    if ( v4 )
    {
      v20 = *a1;
      v21 = 0;
      v43 = 0LL;
      ++*(_DWORD *)(v20 + 88);
      if ( *(_DWORD *)(v4 + 16) )
      {
        do
        {
          *(_DWORD *)(v5 + 4) = 0;
          if ( v21 >= *(_DWORD *)(v4 + 16) )
            break;
          v22 = v43;
          v23 = (unsigned int *)(a1 + 4);
          v24 = 0;
          v25 = 0;
          do
          {
            v26 = *(_QWORD *)(v4 + 24);
            v27 = v22;
            v28 = *(_QWORD *)(v26 + 16LL * v21);
            v29 = v28 + *(unsigned int *)(v26 + 16LL * v21 + 8);
            if ( v28 >= v22 )
              v27 = v28;
            if ( v27 < v29 )
            {
              while ( 1 )
              {
                v30 = v27 >> 10;
                v27 += 4096LL;
                *(_QWORD *)(v5 + 8LL * v24 + 16) = v30;
                v25 = *(_DWORD *)(v5 + 4) + 1;
                *(_DWORD *)(v5 + 4) = v25;
                v24 = v25;
                if ( v25 >= *((_DWORD *)a1 + 8) )
                  break;
                if ( v27 >= v29 )
                  goto LABEL_42;
              }
              v22 = v27;
LABEL_42:
              v23 = (unsigned int *)(a1 + 4);
            }
            v24 = v25;
            if ( v25 >= *v23 )
              break;
            ++v21;
          }
          while ( v21 < *(_DWORD *)(v4 + 16) );
          v43 = v22;
          v3 = v34;
          if ( !v25 )
            break;
          if ( (unsigned int)PfpCheckPrefetchAbort(a1)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) < 0x80 )
          {
            goto LABEL_31;
          }
          v14 = IopXxxControlFile(*(HANDLE *)((v33 << 6) + a1[2]), (__int64)v36, 590112, v5, 8 * v31 + 16, 0LL, 0, 0);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v5 + 4));
          if ( v14 < 0 )
            goto LABEL_16;
          if ( v14 == 259 )
            KeBugCheckEx(0x191u, 0x1681uLL, 0LL, 0LL, 0LL);
          v4 = v32;
        }
        while ( v21 < *(_DWORD *)(v32 + 16) );
      }
    }
  }
  v12 = 0LL;
  if ( (*(_DWORD *)(v6 + 8 * v3 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v13 = (_DWORD *)(*(_QWORD *)(v6 + 8 * v3 + 16) + 48 * v12);
      if ( (*v13 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((_DWORD)a1, (_DWORD)v13, a2, (unsigned int)&v37, (__int64)v38, (__int64)&v42);
        v17 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v33 << 6),
                (_DWORD)v13,
                v16,
                (__int64)v38,
                v42);
        v14 = v17;
        if ( v17 < 0 )
        {
          if ( v17 == -1073741248 )
            goto LABEL_16;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88LL);
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 );
  }
  v14 = 0;
LABEL_16:
  result = (unsigned int)v14;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v35;
  return result;
}
