/*
 * XREFs of sub_1405CE63C @ 0x1405CE63C
 * Callers:
 *     sub_1405CE144 @ 0x1405CE144 (sub_1405CE144.c)
 *     sub_1405CE21C @ 0x1405CE21C (sub_1405CE21C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405CE63C(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  __int64 *i; // r9

  result = qword_140C23D28;
  if ( qword_140C23D28 < a1 )
  {
    v3 = a1 - qword_140C23D28;
    qword_140C23D30 += a1 - qword_140C23D28;
    if ( a1 - qword_140C23D28 < a2 )
    {
      qword_140C23D38 += v3;
    }
    else
    {
      v4 = 0LL;
      for ( i = qword_140018348; ; ++i )
      {
        if ( v3 >= *i )
        {
          result = (unsigned int)(v4 + 1);
          if ( v3 < qword_140018348[result] )
            break;
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= 5 )
          return result;
      }
      ++*(_QWORD *)&byte_140C23D20[8 * v4 + 32];
      *(_QWORD *)&byte_140C23D20[8 * v4 + 72] += v3;
    }
  }
  return result;
}
