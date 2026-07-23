/*
 * XREFs of VfSpRtlCreateUnicodeString_Exit @ 0x140AE8740
 * Callers:
 *     <none>
 * Callees:
 *     ViSpRtlReplaceStringBuffer @ 0x140AE8794 (ViSpRtlReplaceStringBuffer.c)
 */

__int64 __fastcall VfSpRtlCreateUnicodeString_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return ViSpRtlReplaceStringBuffer(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  return result;
}
