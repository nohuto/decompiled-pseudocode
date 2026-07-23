/*
 * XREFs of sub_14050BE98 @ 0x14050BE98
 * Callers:
 *     sub_1403A5440 @ 0x1403A5440 (sub_1403A5440.c)
 * Callees:
 *     sub_14050BF10 @ 0x14050BF10 (sub_14050BF10.c)
 */

__int64 __fastcall sub_14050BE98(int a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v8; // rdx

  v3 = (unsigned __int16)a2;
  v5 = (unsigned __int16)a2;
  LOBYTE(a2) = a3;
  result = sub_14050BF10(v5, a2);
  if ( a1 > 0 )
  {
    result = sub_14050BF10((unsigned int)(v3 + 1), a3 >> 8);
    if ( a1 > 1 )
    {
      sub_14050BF10((unsigned int)(v3 + 2), HIWORD(a3));
      LOBYTE(v8) = HIBYTE(a3);
      return sub_14050BF10((unsigned int)(v3 + 3), v8);
    }
  }
  return result;
}
