/*
 * XREFs of sub_1409A08A8 @ 0x1409A08A8
 * Callers:
 *     sub_14099613C @ 0x14099613C (sub_14099613C.c)
 * Callees:
 *     sub_14098D434 @ 0x14098D434 (sub_14098D434.c)
 */

_UNKNOWN **__fastcall sub_1409A08A8(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 i; // rdi
  __int64 v4; // rbp
  __int64 j; // rbx
  __int64 v6; // rdi
  __int64 k; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 904); i = (unsigned int)(i + 1) )
  {
    result = *(_UNKNOWN ***)(a1 + 896);
    v4 = (__int64)result[i];
    for ( j = v4; j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(_QWORD *)(j + 80) )
        result = (_UNKNOWN **)sub_14098D434(j, v4);
    }
  }
  v6 = *(_QWORD *)(a1 + 48);
  for ( k = v6; k; k = *(_QWORD *)(k + 16) )
  {
    if ( *(_QWORD *)(k + 80) )
      result = (_UNKNOWN **)sub_14098D434(k, v6);
  }
  return result;
}
