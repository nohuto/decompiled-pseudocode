/*
 * XREFs of RtlpFcMapBuffers @ 0x180071044
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800710A4 (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     RtlpFcMapSingleBuffer @ 0x180071264 (RtlpFcMapSingleBuffer.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18012E2EC (RtlpFcSectionTypeToBufferType.c)
 */

__int64 __fastcall RtlpFcMapBuffers(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 result; // rax

  v4 = 0LL;
  do
  {
    v5 = RtlpFcSectionTypeToBufferType((unsigned int)v4);
    result = RtlpFcMapSingleBuffer(a1 + 8 * ((unsigned int)v4 + 1LL + 2 * v4), a2 + 24LL * v5);
    if ( (int)result < 0 )
      break;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < 3 );
  return result;
}
