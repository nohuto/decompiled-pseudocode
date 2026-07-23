/*
 * XREFs of sub_1409EDB30 @ 0x1409EDB30
 * Callers:
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 * Callees:
 *     RtlCompressBuffer @ 0x140244760 (RtlCompressBuffer.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1409EDB30(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  int v3; // edi
  ULONG v4; // eax
  __int64 v7; // r9
  int v8; // r10d
  UCHAR *v9; // r9
  int v10; // r8d
  ULONG v11; // r10d
  NTSTATUS v12; // eax
  unsigned int v13; // ebp
  ULONG v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  ULONG v18; // ecx
  ULONG Length; // eax
  NTSTATUS v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  __int64 v25; // r9
  int v26; // edx
  int v27; // eax
  unsigned int v28; // edx
  int v29; // ecx
  int v30; // eax
  char *v31; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  ULONG v34; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 52);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 40) + 72LL;
  v8 = *(_DWORD *)(a1 + 48) - v2;
  v34 = 0;
  v9 = (UCHAR *)(v2 + v7);
  v10 = *((_DWORD *)a2 + 12);
  v11 = v8 - 72;
  IoStatusBlock = 0LL;
  if ( v11 >= v4 )
    v11 = v4;
  v12 = RtlCompressBuffer(3u, (PUCHAR)a2 + 72, v10 - 72, v9, v11, 0, &v34, *(PVOID *)(a1 + 32));
  v13 = v12;
  if ( v12 == -1073741789 )
  {
    v14 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 40) + *(unsigned int *)(a1 + 52)), a2, v14);
  }
  else
  {
    if ( v12 < 0 )
    {
      ++*(_DWORD *)(a1 + 24);
      return v13;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v15 = *(unsigned int *)(a1 + 52);
    v16 = *(_QWORD *)(a1 + 40);
    *(_OWORD *)(v15 + v16) = *a2;
    *(_OWORD *)(v15 + v16 + 16) = a2[1];
    *(_OWORD *)(v15 + v16 + 32) = a2[2];
    *(_OWORD *)(v15 + v16 + 48) = a2[3];
    *(_QWORD *)(v15 + v16 + 64) = *((_QWORD *)a2 + 8);
    v14 = v34 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 52) + *(_QWORD *)(a1 + 40)) = v14;
  v17 = *(_DWORD *)(a1 + 52);
  ++*(_DWORD *)(a1 + 56);
  v18 = v14 + v17;
  Length = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 52) = v18;
  if ( v18 >= Length )
  {
    v20 = ZwWriteFile(
            *(HANDLE *)a1,
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 40),
            Length,
            (PLARGE_INTEGER)(a1 + 8),
            0LL);
    v21 = *(_DWORD *)(a1 + 56);
    v13 = v20;
    if ( v20 < 0 )
    {
      v22 = *(_DWORD *)(a1 + 24) + v21;
      v23 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 52) = v23;
      LOBYTE(v3) = v23 != 0;
      v24 = v22 - 1;
      if ( !v23 )
        v24 = v22;
      *(_DWORD *)(a1 + 24) = v24;
      goto LABEL_16;
    }
    v25 = *(unsigned int *)(a1 + 16);
    v26 = *(_DWORD *)(a1 + 52);
    v27 = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(a1 + 8) += v25;
    v28 = v26 - v25;
    *(_DWORD *)(a1 + 52) = v28;
    *(_DWORD *)(a1 + 60) = v28;
    v29 = v21 + v27;
    if ( !v28 )
    {
      *(_DWORD *)(a1 + 20) = v29;
LABEL_16:
      *(_DWORD *)(a1 + 56) = v3;
      return v13;
    }
    v30 = v29 - 1;
    v31 = *(char **)(a1 + 40);
    *(_DWORD *)(a1 + 20) = v30;
    *(_DWORD *)(a1 + 56) = 1;
    memmove(v31, &v31[v25], v28);
  }
  return v13;
}
