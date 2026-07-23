/*
 * XREFs of sub_1406C3E60 @ 0x1406C3E60
 * Callers:
 *     sub_14079B518 @ 0x14079B518 (sub_14079B518.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

_UNKNOWN **__fastcall sub_1406C3E60(__int64 a1)
{
  _UNKNOWN **result; // rax
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (_QWORD *)(a1 + 328);
  v3 = 2LL;
  do
  {
    v4 = v2;
    v5 = 24LL;
    do
    {
      if ( *v4 )
      {
        result = (_UNKNOWN **)sub_14042A5E0(*v4, *((unsigned int *)v4 - 4));
        *((_DWORD *)v4 - 2) = 0;
        *v4 = 0LL;
        *((_DWORD *)v4 - 4) = 0;
      }
      v4 += 3;
      --v5;
    }
    while ( v5 );
    v2 += 79;
    --v3;
  }
  while ( v3 );
  return result;
}
