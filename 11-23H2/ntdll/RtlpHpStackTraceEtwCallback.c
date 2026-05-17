/*
 * XREFs of RtlpHpStackTraceEtwCallback @ 0x180117620
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180065DE8 (RtlpHpMetadataAlloc.c)
 *     RtlQueryHeapInformation @ 0x18008B500 (RtlQueryHeapInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpStackTraceEtwCallback(__int64 a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 == 2 )
  {
    v5 = RtlpHpEnvHandle;
    v2 = RtlpHpMetadataAlloc(0x4010uLL, 0x4010uLL, 0, &v5);
    v3 = (_DWORD *)v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset_thunk_772440563353939046((void *)(v2 + 4), 0, 0x400CuLL);
      *v3 = v4;
      v6[1] = -1LL;
      LODWORD(v6[0]) = 2;
      v6[3] = v3;
      v6[2] = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, 5, v6, 0x28uLL, 0LL);
      v5 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v3, &v5);
    }
  }
}
