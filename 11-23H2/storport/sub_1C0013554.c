/*
 * XREFs of sub_1C0013554 @ 0x1C0013554
 * Callers:
 *     sub_1C0018658 @ 0x1C0018658 (sub_1C0018658.c)
 * Callees:
 *     sub_1C0013728 @ 0x1C0013728 (sub_1C0013728.c)
 *     sub_1C0013774 @ 0x1C0013774 (sub_1C0013774.c)
 */

char __fastcall sub_1C0013554(__int64 a1)
{
  char result; // al
  __int64 v2; // rax
  char v3; // r10
  char v4; // r11
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // r8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  result = 0;
  v8 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    if ( (unsigned __int8)sub_1C0013774(&v7, a1) )
    {
LABEL_3:
      while ( 1 )
      {
        v2 = sub_1C0013728(&v7);
        if ( !v2 )
          break;
        v5 = *(_BYTE *)(v2 + 3);
        v6 = 0;
        if ( v5 )
        {
          while ( (*(_BYTE *)(v6 + v2 + 4) & 0xDF) == 0 )
          {
            v6 += v3;
            if ( v6 >= v5 )
              goto LABEL_3;
          }
          return 0;
        }
      }
      if ( v4 )
        return v3;
    }
    return 0;
  }
  return result;
}
