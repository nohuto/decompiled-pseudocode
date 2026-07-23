/*
 * XREFs of sub_140B2BEEC @ 0x140B2BEEC
 * Callers:
 *     sub_140B2BE4C @ 0x140B2BE4C (sub_140B2BE4C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

__int64 sub_140B2BEEC()
{
  __int64 result; // rax

  result = 0LL;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
  {
    result = (unsigned int)dword_140C5AFD0;
    if ( (dword_140C5AFD0 & 1) == 0 )
    {
      result = dword_140C5AFD0 | 2u;
      dword_140C5AFD0 |= 2u;
    }
  }
  return result;
}
