/*
 * XREFs of EtwpWriteBufferCompressed @ 0x1801266CC
 * Callers:
 *     EtwpFlushBuffer @ 0x18005B4D4 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBuffer @ 0x180084780 (RtlCompressBuffer.c)
 *     NtWriteFile @ 0x1800A0FB0 (NtWriteFile.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, UCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r10
  int v7; // eax
  UCHAR *v10; // r9
  ULONG v11; // r10d
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebp
  ULONG v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  ULONG v18; // ecx
  ULONG Length; // eax
  int v20; // r8d
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // eax
  char *v26; // rcx
  size_t v27; // r8
  char *v28; // rdx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  ULONG v31; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a1 + 436);
  *a4 = 0;
  v7 = *(_DWORD *)(a1 + 432);
  *a3 = 0;
  v10 = (UCHAR *)(v4 + *(_QWORD *)(a1 + 424) + 72LL);
  v11 = v7 - v4 - 72;
  if ( v11 >= *(_DWORD *)(a1 + 192) )
    v11 = *(_DWORD *)(a1 + 192);
  v12 = RtlCompressBuffer(3u, a2 + 72, *((_DWORD *)a2 + 12) - 72, v10, v11, 0, &v31, *(PVOID *)(a1 + 416));
  v13 = v12;
  if ( v12 == -1073741789 )
  {
    v14 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 424) + *(unsigned int *)(a1 + 436)), a2, v14);
  }
  else
  {
    if ( v12 < 0 )
    {
      *a4 = 1;
      return (unsigned int)v13;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v15 = *(unsigned int *)(a1 + 436);
    v16 = *(_QWORD *)(a1 + 424);
    *(_OWORD *)(v15 + v16) = *(_OWORD *)a2;
    *(_OWORD *)(v15 + v16 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v15 + v16 + 32) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v15 + v16 + 48) = *((_OWORD *)a2 + 3);
    *(_QWORD *)(v15 + v16 + 64) = *((_QWORD *)a2 + 8);
    v14 = v31 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 436) + *(_QWORD *)(a1 + 424)) = v14;
  v17 = *(_DWORD *)(a1 + 436);
  ++*(_DWORD *)(a1 + 440);
  v18 = v14 + v17;
  *(_DWORD *)(a1 + 436) = v18;
  Length = *(_DWORD *)(a1 + 192);
  if ( v18 >= Length )
  {
    v13 = NtWriteFile(
            *(HANDLE *)(a1 + 128),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 424),
            Length,
            (PLARGE_INTEGER)(a1 + 344),
            0LL);
    if ( v13 >= 0 )
    {
      v23 = *(unsigned int *)(a1 + 192);
      *(_QWORD *)(a1 + 344) += v23;
      v24 = *(_DWORD *)(a1 + 436) - v23;
      v25 = *(_DWORD *)(a1 + 440);
      *(_DWORD *)(a1 + 436) = v24;
      *(_DWORD *)(a1 + 444) = v24;
      if ( v24 )
      {
        v26 = *(char **)(a1 + 424);
        v27 = v24;
        *(_DWORD *)(a1 + 440) = 1;
        v28 = &v26[*(unsigned int *)(a1 + 192)];
        *a3 = v25 - 1;
        memmove(v26, v28, v27);
      }
      else
      {
        *(_DWORD *)(a1 + 440) = 0;
        *a3 = v25;
      }
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 444);
      v21 = *(_DWORD *)(a1 + 440);
      *(_DWORD *)(a1 + 436) = v20;
      v22 = v21 - 1;
      if ( !v20 )
        v22 = v21;
      *a4 = v22;
      *(_DWORD *)(a1 + 440) = v20 != 0;
    }
  }
  return (unsigned int)v13;
}
