/*
 * XREFs of sub_14055DD48 @ 0x14055DD48
 * Callers:
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_140298AF8 @ 0x140298AF8 (sub_140298AF8.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_14055DD48(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // esi
  _QWORD v8[8]; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_140D088C0[a2];
  result = sub_140593218(a1, v3 - 384, 49280LL);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( !v5 || !sub_14028FBF0(v5) )
      goto LABEL_11;
    result = sub_140593218(a1, *(_QWORD *)(v3 + 8), 2288LL);
    if ( (int)result < 0 )
      return result;
    result = sub_140593218(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 2944LL);
    if ( (int)result < 0 )
      return result;
    v6 = *(_QWORD *)(v3 + 8);
    if ( (*(_DWORD *)(v6 + 120) & 0x20000) != 0 )
    {
      memset(v8, 0, sizeof(v8));
      v7 = 0;
      sub_140298AF8((_QWORD *)v6, v8, 1);
      while ( 1 )
      {
        result = sub_140593218(a1, v8[1], v8[0] - v8[1]);
        if ( (int)result < 0 )
          break;
        if ( (unsigned int)++v7 >= 0x64 || !sub_140298AF8(*(_QWORD **)(v3 + 8), v8, 0) )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
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
  return result;
}
