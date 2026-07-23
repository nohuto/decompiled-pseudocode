/*
 * XREFs of sub_140B12A50 @ 0x140B12A50
 * Callers:
 *     sub_140B10CAC @ 0x140B10CAC (sub_140B10CAC.c)
 * Callees:
 *     sub_140AD6B90 @ 0x140AD6B90 (sub_140AD6B90.c)
 *     sub_140B1D468 @ 0x140B1D468 (sub_140B1D468.c)
 */

__int64 sub_140B12A50()
{
  __int64 result; // rax

  _mm_lfence();
  if ( !(_DWORD)InitSafeBootMode )
    return (unsigned int)(__ROR4__((unsigned __int8)byte_140C09804 | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)byte_140C09804 | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  result = sub_140B1D468();
  if ( (int)result >= 0 )
    return (unsigned int)(__ROR4__((unsigned __int8)byte_140C09804 | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)byte_140C09804 | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  return result;
}
