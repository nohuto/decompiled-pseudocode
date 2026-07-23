/*
 * XREFs of sub_1402F42D4 @ 0x1402F42D4
 * Callers:
 *     sub_14023F108 @ 0x14023F108 (sub_14023F108.c)
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     sub_1402EA7E4 @ 0x1402EA7E4 (sub_1402EA7E4.c)
 *     sub_1402F411C @ 0x1402F411C (sub_1402F411C.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     sub_1402F4380 @ 0x1402F4380 (sub_1402F4380.c)
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402F42D4(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v8; // r11d
  int v9; // ebx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx

  v8 = a3;
  v9 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (unsigned int)dword_140D06884 <= 1 )
    {
LABEL_3:
      result = a6;
      if ( a6 )
        return sub_14042A5E0(a7, a2);
      return result;
    }
  }
  else if ( !(unsigned int)sub_1402F4380(a1, a3) )
  {
    goto LABEL_3;
  }
  sub_1402FFB70(a1, v9, v8, a4, a5);
  if ( a6 )
    sub_14042A5E0(a7, v12);
  v16 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 11648);
    if ( !(_DWORD)result )
      break;
    if ( (++v16 & dword_140D0527C) == 0
      && (dword_140D0689C & 0x40) != 0
      && (unsigned __int8)sub_14039EA10(v13, v12, v14, v15) )
    {
      sub_14039D930(v16);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
