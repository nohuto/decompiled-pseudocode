/*
 * XREFs of sub_1C007F8D0 @ 0x1C007F8D0
 * Callers:
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007F7A4 @ 0x1C007F7A4 (sub_1C007F7A4.c)
 */

__int64 __fastcall sub_1C007F8D0(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // di
  __int64 result; // rax

  v6 = 0;
  while ( 1 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)a2 = 1;
    *(_WORD *)(a2 + 24) = *(_WORD *)(a1 + 28);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 16) = a3;
    *(_QWORD *)(a1 + 16) = a2;
    *(_DWORD *)a2 = 2;
    result = sub_1C007F7A4((int **)a1, a2);
    if ( (int)result >= 0 )
      break;
    result = sub_1C007B340(a1, (volatile __int32 *)a2, result);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_DWORD)result == -1073741309 )
    {
      if ( v6 )
        return result;
      v6 = 1;
    }
    else if ( !v6 )
    {
      return result;
    }
  }
  return result;
}
