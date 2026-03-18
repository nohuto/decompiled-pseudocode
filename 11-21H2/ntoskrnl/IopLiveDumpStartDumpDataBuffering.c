/*
 * XREFs of IopLiveDumpStartDumpDataBuffering @ 0x140A67994
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140A66300 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpTrace @ 0x14055A870 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x14055ABF4 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     KdDecodeDataBlock @ 0x140564FF8 (KdDecodeDataBlock.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140A66DB4 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpStartDumpDataBuffering(const GUID *a1)
{
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 *v4; // rdx
  int v5; // r8d
  unsigned int Data1; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  KdDecodeDataBlock();
  IopLiveDumpTrace();
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)&a1[19], 4LL, &v8, v2);
  IopLiveDumpTrace();
  if ( KdpBootedNodebug )
  {
    v3 = KiWaitNever;
    v4 = (__int64 *)&KdDebuggerDataBlock;
    KdpDataBlockEncoded = 1;
    v5 = 112;
    do
    {
      *v4 = v3 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(KiWaitAlways ^ *v4), v3);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  Data1 = a1[5].Data1;
  if ( (Data1 & 0x80u) != 0 )
  {
    *(_QWORD *)a1[33].Data4 = v8;
    LOBYTE(Data1) = IopLiveDumpTraceCaptureDumpDataBufferingDuration(a1);
  }
  return Data1;
}
