/*
 * XREFs of sub_140803F88 @ 0x140803F88
 * Callers:
 *     sub_140803EC0 @ 0x140803EC0 (sub_140803EC0.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140803F88(HANDLE FileHandle, _QWORD *a2)
{
  ULONG OutputBufferLength; // ebp
  SIZE_T v5; // rdx
  unsigned int *v6; // rsi
  _DWORD *OutputBuffer; // rax
  _DWORD *v8; // rdi
  NTSTATUS v9; // eax
  int v10; // ebx
  ULONG v12; // ebp
  SIZE_T i; // rdx
  unsigned int *PoolWithTag; // rax
  NTSTATUS v15; // eax
  SIZE_T v16; // rbp
  _DWORD *v17; // rax
  _QWORD *v18; // rdx
  _DWORD *v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  OutputBufferLength = 18480;
  IoStatusBlock = 0LL;
  v5 = 18480LL;
  v6 = 0LL;
  while ( 1 )
  {
    OutputBuffer = ExAllocatePoolWithTag(PagedPool, v5, 0x4B444342u);
    v8 = OutputBuffer;
    if ( !OutputBuffer )
      return (unsigned int)-1073741670;
    v9 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x70050u,
           0LL,
           0,
           OutputBuffer,
           OutputBufferLength);
    v10 = v9;
    if ( v9 != -1073741789 )
      break;
    ExFreePoolWithTag(v8, 0x4B444342u);
    OutputBufferLength += 9216;
    v5 = OutputBufferLength;
  }
  if ( v9 >= 0 )
    goto LABEL_5;
  v12 = 2056;
  for ( i = 2056LL; ; i = v12 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, i, 0x4B444342u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
      goto LABEL_13;
    }
    v15 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x7400Cu, 0LL, 0, PoolWithTag, v12);
    v10 = v15;
    if ( v15 != -1073741789 )
      break;
    ExFreePoolWithTag(v6, 0x4B444342u);
    v12 += 2048;
  }
  if ( v15 >= 0 )
  {
    ExFreePoolWithTag(v8, 0x4B444342u);
    v16 = 144 * *v6 + 48;
    v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x4B444342u);
    v8 = v17;
    if ( !v17 )
    {
      v10 = -1073741670;
LABEL_6:
      if ( !v6 )
        goto LABEL_7;
      goto LABEL_24;
    }
    memset(v17, 0, v16);
    *v8 = 0;
    v18 = v6 + 2;
    v19 = v8 + 12;
    v8[1] = *v6;
    v20 = 0;
    for ( v8[2] = v6[1]; v20 < *v6; *(v19 - 27) = *((_DWORD *)v18 - 4) )
    {
      *v19 = 0;
      ++v20;
      v21 = *v18;
      v18 += 4;
      *((_QWORD *)v19 + 1) = v21;
      v19 += 36;
      *((_QWORD *)v19 - 16) = *(v18 - 3);
      *(v19 - 30) = *((_DWORD *)v18 - 3);
      *((_BYTE *)v19 - 116) = *((_BYTE *)v18 - 5);
      *((_BYTE *)v19 - 112) = *((_BYTE *)v18 - 8);
      *((_BYTE *)v19 - 111) = *((_BYTE *)v18 - 7);
      *((_BYTE *)v19 - 110) = *((_BYTE *)v18 - 6);
    }
LABEL_5:
    *a2 = v8;
    goto LABEL_6;
  }
LABEL_24:
  ExFreePoolWithTag(v6, 0x4B444342u);
LABEL_7:
  if ( v10 < 0 )
  {
LABEL_13:
    if ( v8 )
      ExFreePoolWithTag(v8, 0x4B444342u);
  }
  return (unsigned int)v10;
}
