/*
 * XREFs of EtwpWriteBufferCompressed @ 0x18012524C
 * Callers:
 *     EtwpFlushBuffer @ 0x18005E4D4 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBuffer @ 0x180083F80 (RtlCompressBuffer.c)
 *     NtWriteFile @ 0x18009EEF0 (NtWriteFile.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // eax
  int v9; // ebp
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  char *v21; // rcx
  size_t v22; // r8
  char *v23; // rdx
  int v25; // [rsp+80h] [rbp+8h]

  *a4 = 0;
  *a3 = 0;
  v8 = RtlCompressBuffer(3u);
  v9 = v8;
  if ( v8 == -1073741789 )
  {
    v10 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 424) + *(unsigned int *)(a1 + 436)), a2, v10);
  }
  else
  {
    if ( v8 < 0 )
    {
      *a4 = 1;
      return (unsigned int)v9;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v11 = *(unsigned int *)(a1 + 436);
    v12 = *(_QWORD *)(a1 + 424);
    *(_OWORD *)(v11 + v12) = *a2;
    *(_OWORD *)(v11 + v12 + 16) = a2[1];
    *(_OWORD *)(v11 + v12 + 32) = a2[2];
    *(_OWORD *)(v11 + v12 + 48) = a2[3];
    *(_QWORD *)(v11 + v12 + 64) = *((_QWORD *)a2 + 8);
    v10 = v25 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 436) + *(_QWORD *)(a1 + 424)) = v10;
  v13 = *(_DWORD *)(a1 + 436);
  ++*(_DWORD *)(a1 + 440);
  v14 = v10 + v13;
  *(_DWORD *)(a1 + 436) = v14;
  if ( v14 >= *(_DWORD *)(a1 + 192) )
  {
    v9 = NtWriteFile();
    if ( v9 >= 0 )
    {
      v18 = *(unsigned int *)(a1 + 192);
      *(_QWORD *)(a1 + 344) += v18;
      v19 = *(_DWORD *)(a1 + 436) - v18;
      v20 = *(_DWORD *)(a1 + 440);
      *(_DWORD *)(a1 + 436) = v19;
      *(_DWORD *)(a1 + 444) = v19;
      if ( v19 )
      {
        v21 = *(char **)(a1 + 424);
        v22 = v19;
        *(_DWORD *)(a1 + 440) = 1;
        v23 = &v21[*(unsigned int *)(a1 + 192)];
        *a3 = v20 - 1;
        memmove(v21, v23, v22);
      }
      else
      {
        *(_DWORD *)(a1 + 440) = 0;
        *a3 = v20;
      }
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 444);
      v16 = *(_DWORD *)(a1 + 440);
      *(_DWORD *)(a1 + 436) = v15;
      v17 = v16 - 1;
      if ( !v15 )
        v17 = v16;
      *a4 = v17;
      *(_DWORD *)(a1 + 440) = v15 != 0;
    }
  }
  return (unsigned int)v9;
}
