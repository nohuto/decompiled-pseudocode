/*
 * XREFs of CcCopyBytesToUserBuffer @ 0x140262440
 * Callers:
 *     CcMapAndCopyFromCache @ 0x1406F5E20 (CcMapAndCopyFromCache.c)
 * Callees:
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     FsRtlIsNtstatusExpected @ 0x140359EA0 (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1405379A0 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x140537CB0 (CcLockSystemCacheBuffer.c)
 *     HviCopyMemory @ 0x1405B60D4 (HviCopyMemory.c)
 */

__int64 __fastcall CcCopyBytesToUserBuffer(char *a1, char *Src, size_t Size, char a4)
{
  unsigned int v5; // ebx
  char *v6; // r15
  char *v7; // rax
  unsigned int v8; // edi
  struct _MDL *v9; // r13
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  __int64 v14; // [rsp+38h] [rbp-40h]
  struct _MDL *v15; // [rsp+40h] [rbp-38h] BYREF
  char *v16; // [rsp+80h] [rbp+8h]
  unsigned int v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = a1;
  v5 = Size;
  v6 = Src;
  v7 = a1;
  v8 = 0;
  v9 = 0LL;
  v15 = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  v17 = 0;
  if ( a4 )
  {
    v10 = CcLockSystemCacheBuffer((_DWORD)Src, (unsigned int)&v15, Size, 0, (__int64)&v17);
    v14 = v10;
    v9 = v15;
    if ( !v10 )
    {
      v8 = v17;
      goto LABEL_9;
    }
    v7 = v16;
  }
  while ( v5 )
  {
    if ( v5 >= 0x40000 )
      v11 = 0x40000;
    else
      v11 = v5;
    if ( a4 )
    {
      HviCopyMemory(v7, v10, v11);
      v12 = v11;
    }
    else
    {
      v12 = v11;
      memmove(v7, v6, v11);
    }
    v5 -= v11;
    v7 = &v16[v12];
    v16 += v12;
    v10 = v14;
    if ( a4 )
    {
      v10 = v12 + v14;
      v14 += v12;
    }
    else
    {
      v6 += v12;
    }
  }
LABEL_9:
  if ( v9 )
  {
    MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  return v8;
}
