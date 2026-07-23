/*
 * XREFs of sub_1409EE518 @ 0x1409EE518
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_1409EE394 @ 0x1409EE394 (sub_1409EE394.c)
 */

__int64 __fastcall sub_1409EE518(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 i; // r8
  signed __int32 v8[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !dword_140D06B40 )
    return 3221225659LL;
  if ( !a3 || a3 > 4 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1024) || (result = sub_1409EE394(a1), (int)result >= 0) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v8[8] = i;
      if ( (unsigned int)i >= a3 )
        break;
      *(_WORD *)(*(_QWORD *)(a1 + 1024) + 2 * i + 12) = *(_WORD *)(a2 + 4 * i);
    }
    _InterlockedOr(v8, 0);
    *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 8LL) = a3;
    return 0LL;
  }
  return result;
}
