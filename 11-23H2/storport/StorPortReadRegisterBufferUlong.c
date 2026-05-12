/*
 * XREFs of StorPortReadRegisterBufferUlong @ 0x1C0046DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall StorPortReadRegisterBufferUlong(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 i; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a4; i; --i )
    *a3++ = *a2++;
  return result;
}
