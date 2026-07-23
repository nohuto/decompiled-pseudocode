/*
 * XREFs of PfSnPrefetchFileMetadata @ 0x1407D806C
 * Callers:
 *     PfSnGetSectionObject @ 0x14075CB90 (PfSnGetSectionObject.c)
 *     PfSnPrefetchMetadata @ 0x14075E7D4 (PfSnPrefetchMetadata.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     NtWaitForSingleObject @ 0x1406E36F0 (NtWaitForSingleObject.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     NtResetEvent @ 0x1407D81A0 (NtResetEvent.c)
 */

__int64 __fastcall PfSnPrefetchFileMetadata(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        IRP *EventHandle)
{
  unsigned int Status; // r10d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // rsi
  unsigned int v14; // r14d
  void *v15; // r9
  int v16; // r13d
  unsigned int v17; // ebx
  int v18; // [rsp+48h] [rbp-50h]
  struct _IO_STATUS_BLOCK v19; // [rsp+60h] [rbp-38h] BYREF

  Status = 0;
  v19 = 0LL;
  if ( a5 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( v10 <= a4 || v10 - a4 < a5 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 96) & 7 | (8 * (*(_DWORD *)(a1 + 100) & 7 | 8));
      if ( a4 || a5 > 0x300 )
      {
        v13 = *(_QWORD *)(a1 + 80);
        v14 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)v13 = 3;
        *(_QWORD *)(v13 + 8) = v11;
        v15 = (void *)(v13 + 16);
        do
        {
          v16 = 768;
          if ( a5 - v14 < 0x300 )
            v16 = a5 - v14;
          *(_DWORD *)(v13 + 4) = v16;
          memmove(v15, (const void *)(a3 + 16 + 8LL * (v14 + a4)), (unsigned int)(8 * v16));
          v17 = 8 * *(_DWORD *)(v13 + 4) + 16;
          NtResetEvent(EventHandle, 0LL);
          Status = IopXxxControlFile(a2, EventHandle, 0LL, 0LL, &v19, 0x90120u, (char *)v13, v17, 0LL, 0, 0);
          if ( Status == 259 )
          {
            NtWaitForSingleObject(EventHandle, 0, 0LL);
            Status = v19.Status;
          }
          if ( (Status & 0xC0000000) == 0xC0000000 )
            break;
          v14 += v16;
          v15 = (void *)(v13 + 16);
        }
        while ( v14 < a5 );
      }
      else
      {
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 4) = a5;
        NtResetEvent(EventHandle, 0LL);
        Status = IopXxxControlFile(
                   a2,
                   EventHandle,
                   0LL,
                   0LL,
                   &v19,
                   0x90120u,
                   (char *)a3,
                   8 * a5 + 16,
                   0LL,
                   a4 & v18,
                   a4);
        if ( Status == 259 )
        {
          NtWaitForSingleObject(EventHandle, 0, 0LL);
          Status = v19.Status;
        }
        *(_DWORD *)(a3 + 4) = v10;
      }
    }
  }
  return Status;
}
