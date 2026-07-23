/*
 * XREFs of RtlpHpStackTraceEtwCallback @ 0x180115D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlQueryHeapInformation @ 0x18007D840 (RtlQueryHeapInformation.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

void __fastcall RtlpHpStackTraceEtwCallback(LPCGUID a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-48h] BYREF
  int HeapInformation; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 (__fastcall *v8)(void *, size_t); // [rsp+50h] [rbp-28h]
  _DWORD *v9; // [rsp+58h] [rbp-20h]

  if ( a2 == 2 )
  {
    v5 = RtlpHpEnvHandle;
    v2 = RtlpHpMetadataAlloc(0x4010uLL, 0x4010uLL, 0, &v5);
    v3 = (_DWORD *)v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset((void *)(v2 + 4), 0, 0x400CuLL);
      *v3 = v4;
      v7 = -1LL;
      HeapInformation = 2;
      v9 = v3;
      v8 = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, &HeapInformation, 0x28uLL, 0LL);
      v5 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v3, &v5);
    }
  }
}
