/*
 * XREFs of sub_1407F7428 @ 0x1407F7428
 * Callers:
 *     sub_1407D5A10 @ 0x1407D5A10 (sub_1407D5A10.c)
 * Callees:
 *     sub_14035AB2C @ 0x14035AB2C (sub_14035AB2C.c)
 */

__int64 __fastcall sub_1407F7428(_QWORD *a1, unsigned __int32 a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  signed __int32 v6; // edi
  unsigned __int32 v7; // edx
  __int64 v8; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = a1[45];
  _m_prefetchw((const void *)(v3 + 144));
  v6 = *(_DWORD *)(v3 + 144);
  while ( v6 != a2 )
  {
    v7 = v6;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 144), a2, v6);
    v6 = result;
    if ( (_DWORD)result == v7 )
    {
      if ( !a1[4] )
        return result;
      if ( v7 < a2 )
      {
        v8 = a2 - v7;
        do
        {
          result = sub_14035AB2C(a1, 1, 0, 0);
          --v8;
        }
        while ( v8 );
      }
    }
    else if ( (unsigned int)result >= a2 )
    {
      return result;
    }
  }
  return result;
}
