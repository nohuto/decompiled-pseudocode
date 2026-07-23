/*
 * XREFs of sub_140205CA8 @ 0x140205CA8
 * Callers:
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 * Callees:
 *     sub_1406962A4 @ 0x1406962A4 (sub_1406962A4.c)
 *     sub_140696EC8 @ 0x140696EC8 (sub_140696EC8.c)
 */

__int64 __fastcall sub_140205CA8(__int64 a1, char a2, __int128 *a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rsi
  __int128 v12; // xmm0
  _DWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h]

  v5 = 0;
  v13[1] = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
      return (unsigned int)-1073741637;
    if ( a4 )
    {
      v10 = a5;
      if ( a5 )
      {
        if ( a3 && *(_WORD *)a3 && *((_QWORD *)a3 + 1) )
        {
          if ( *(_WORD *)a3 >= 0x110u )
            return (unsigned int)-1073741562;
          if ( a4 > 0xA )
            return (unsigned int)-1073741811;
          goto LABEL_5;
        }
      }
    }
    return (unsigned int)-1073741776;
  }
  if ( a4 )
    return (unsigned int)-1073741776;
  v10 = a5;
  if ( a5 || a3 && (*(_WORD *)a3 || *((_QWORD *)a3 + 1)) )
    return (unsigned int)-1073741776;
LABEL_5:
  if ( *(_QWORD *)(a1 + 1152) )
  {
    sub_140696EC8(*(_QWORD *)(a1 + 216));
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
  if ( a2 )
  {
    v12 = *a3;
    v13[0] = 1;
    v14 = v12;
    return (unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64))sub_1406962A4)(a1, v13, a4, v10);
  }
  return v5;
}
