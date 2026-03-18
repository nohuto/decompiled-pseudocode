/*
 * XREFs of ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x1C0387D84
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C0202BC4 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x1C0387B88 (-ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParseIntArray(const unsigned __int16 *a1, unsigned int *a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned int v8; // esi
  unsigned __int16 i; // r8

  LODWORD(v4) = *a4;
  v5 = 0;
  if ( a3 )
  {
    while ( 2 )
    {
      *a2 = 0;
      v8 = 0;
      for ( i = a1[(unsigned int)v4]; i >= 0x30u && i <= 0x39u; i = a1[v4] )
      {
        v4 = (unsigned int)(v4 + 1);
        ++v8;
        *a2 = i + 2 * (5 * *a2 - 24);
        if ( v8 >= 5 )
          goto LABEL_12;
      }
      if ( v5 < a3 - 1 )
      {
        if ( a1[(unsigned int)v4] != 46 )
        {
LABEL_12:
          WdLogSingleEntry1(3LL, a1);
          return 3221225485LL;
        }
        LODWORD(v4) = v4 + 1;
      }
      ++v5;
      ++a2;
      if ( v5 < a3 )
        continue;
      break;
    }
  }
  *a4 = v4;
  return 0LL;
}
