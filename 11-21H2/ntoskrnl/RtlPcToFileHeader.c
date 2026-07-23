/*
 * XREFs of RtlPcToFileHeader @ 0x1403870E0
 * Callers:
 *     sub_140294C30 @ 0x140294C30 (sub_140294C30.c)
 *     sub_1403EB1A8 @ 0x1403EB1A8 (sub_1403EB1A8.c)
 *     sub_1405EEC28 @ 0x1405EEC28 (sub_1405EEC28.c)
 *     sub_140631D34 @ 0x140631D34 (sub_140631D34.c)
 *     sub_140758C68 @ 0x140758C68 (sub_140758C68.c)
 *     KeSetTracepoint @ 0x140962320 (KeSetTracepoint.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_140297AE0 @ 0x140297AE0 (sub_140297AE0.c)
 */

PVOID __cdecl RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_140E00030 + 1)
    && (unsigned __int64)PcValue < *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
  {
    v4 = xmmword_140E00030;
  }
  else
  {
    sub_140297AE0((unsigned __int64)PcValue, (__int64)&v4);
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
