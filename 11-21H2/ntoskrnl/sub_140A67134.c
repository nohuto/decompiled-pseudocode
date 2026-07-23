/*
 * XREFs of sub_140A67134 @ 0x140A67134
 * Callers:
 *     sub_140A67248 @ 0x140A67248 (sub_140A67248.c)
 * Callees:
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_140A67134(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = qword_140D088C0[a2];
  result = sub_140593218(a1, v3 - 384, 49280LL);
  if ( (int)result >= 0 )
  {
    result = sub_140593218(a1, *(_QWORD *)(v3 + 8), 2288LL);
    if ( (int)result >= 0 )
    {
      result = sub_140593218(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 2944LL);
      if ( (int)result >= 0 )
      {
        result = sub_140593218(a1, *(_QWORD *)(v3 + 35264), 1232LL);
        if ( (int)result >= 0 )
        {
          result = sub_140593218(a1, *(_QWORD *)(*(_QWORD *)(v3 + 35264) + 152LL), 0x2000LL);
          if ( (int)result >= 0 )
          {
            result = sub_140593218(a1, *(_QWORD *)(*(_QWORD *)(v3 + 35264) + 248LL) - 4096LL, 0x2000LL);
            if ( (int)result >= 0 )
            {
              result = sub_140593218(a1, *(_QWORD *)(v3 + 344), *(unsigned __int16 *)(v3 + 342));
              if ( (int)result >= 0 )
                return sub_140593218(a1, *(_QWORD *)(v3 + 360), *(unsigned __int16 *)(v3 + 358));
            }
          }
        }
      }
    }
  }
  return result;
}
