/*
 * XREFs of sub_140840A78 @ 0x140840A78
 * Callers:
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 * Callees:
 *     sub_140840AEC @ 0x140840AEC (sub_140840AEC.c)
 */

__int64 __fastcall sub_140840A78(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 i; // rdi

  if ( !a1 )
    return 3221225485LL;
  result = ((__int64 (*)(void))sub_140840AEC)();
  if ( (int)result >= 0 )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(a1 + 48) )
    {
      while ( 1 )
      {
        result = sub_140840AEC(*(_QWORD *)(a1 + 8 * v3 + 56));
        if ( (int)result < 0 )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 48) )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 52); i = (unsigned int)(i + 1) )
      {
        result = sub_140840AEC(*(_QWORD *)(a1 + 8 * i + 1048));
        if ( (int)result < 0 )
          break;
      }
    }
  }
  return result;
}
