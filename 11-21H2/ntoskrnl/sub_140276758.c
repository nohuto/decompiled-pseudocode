/*
 * XREFs of sub_140276758 @ 0x140276758
 * Callers:
 *     sub_140248B24 @ 0x140248B24 (sub_140248B24.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     sub_14029E120 @ 0x14029E120 (sub_14029E120.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_140389670 @ 0x140389670 (sub_140389670.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14039EB90 (CcAddDirtyPagesToExternalCache.c)
 *     sub_140538930 @ 0x140538930 (sub_140538930.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     sub_14053DDB8 @ 0x14053DDB8 (sub_14053DDB8.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_140389160 @ 0x140389160 (sub_140389160.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053DA58 @ 0x14053DA58 (sub_14053DA58.c)
 */

char __fastcall sub_140276758(_BYTE *a1, __int64 a2, __int64 a3, char a4)
{
  char result; // al
  __int64 v5; // r10
  char v7; // cl
  __int64 v8; // rdx

  result = a3;
  v5 = a2;
  if ( byte_140C54C58 == 1 )
  {
    LOBYTE(a3) = a4;
    LOBYTE(a2) = result;
    return sub_14053DA58(v5, a2, a3);
  }
  else
  {
    v7 = a1[1228];
    if ( !v7 || (_BYTE)a3 )
    {
      if ( a4 )
        v8 = 8LL;
      else
        v8 = v7 != 0 ? 16 : 4;
      if ( (_BYTE)a3 )
      {
        result = sub_140389160(a1, v8);
      }
      else if ( !a1[985] )
      {
        if ( !a1[984] )
          KeBugCheckEx(0x34u, 0x366uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = sub_1402E2D20((int)a1 + 920, -30000000, 0, 0, 0LL);
      }
      if ( !a1[1228] )
        a1[985] = 1;
    }
  }
  return result;
}
