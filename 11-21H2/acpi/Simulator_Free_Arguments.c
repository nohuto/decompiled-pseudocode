/*
 * XREFs of Simulator_Free_Arguments @ 0x1C0064DF4
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     AMLIRegEventHandler @ 0x1C00292D8 (AMLIRegEventHandler.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C0064AF0 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 */

__int64 __fastcall Simulator_Free_Arguments(int a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  unsigned __int16 v6; // ax

  if ( a1 > 0 && a2 )
  {
    v3 = (__int64)a2;
    v4 = (unsigned int)a1;
    v5 = a2 + 4;
    do
    {
      v6 = *((_WORD *)v5 - 15);
      if ( v6 >= 2u && (v6 <= 5u || v6 > 6u && (v6 <= 0xCu || v6 == 14 || v6 > 0x81u && v6 <= 0x84u)) )
      {
        if ( *v5 )
          FreeObjData(v3);
      }
      v3 += 40LL;
      v5 += 5;
      --v4;
    }
    while ( v4 );
    HeapFree(a2);
  }
  return 0LL;
}
