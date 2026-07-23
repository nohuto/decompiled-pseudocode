/*
 * XREFs of sub_140207028 @ 0x140207028
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1406785F0 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 *     sub_140678698 @ 0x140678698 (sub_140678698.c)
 *     sub_140724418 @ 0x140724418 (sub_140724418.c)
 */

_UNKNOWN **__fastcall sub_140207028(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR a2,
        __int64 *a3,
        _BYTE *a4,
        _BYTE *a5)
{
  _UNKNOWN **result; // rax
  __int64 *v6; // rsi
  __int64 *v9; // rdx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a3;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( !dword_140D3B1C4 )
  {
    v9 = a3;
    LOBYTE(a3) = *((_BYTE *)KeGetCurrentThread() + 562);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_140724418)(stru_140D3CA10, v9, a3);
    if ( !(_BYTE)result )
    {
      v10 = *v6;
      if ( !*v6 )
        v10 = v6[2];
      result = (_UNKNOWN **)sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v10 + 232), 0, 0);
      if ( !(_BYTE)result )
        return (_UNKNOWN **)sub_140678698(SecurityDescriptor, a2);
    }
  }
  return result;
}
