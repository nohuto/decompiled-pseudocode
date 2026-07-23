/*
 * XREFs of sub_1406F8640 @ 0x1406F8640
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

signed __int64 __fastcall sub_1406F8640(_QWORD *a1, char a2, char a3)
{
  bool v4; // bp
  signed __int64 result; // rax
  signed __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  signed __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // eax
  signed __int64 *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi

  v4 = a1[198] != 0LL;
  result = (unsigned int)dword_140D3CA20;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( (dword_140D3CA20 & 0x10) != 0 )
      {
        v13 = (signed __int64 *)&stru_140CF6040;
        v14 = 64LL;
        do
        {
          result = (signed __int64)sub_140281870(v13);
          v15 = result;
          if ( result )
          {
            if ( (*(_DWORD *)(result + 16) & 1) != 0 )
              sub_14042A5E0(*(_QWORD *)(a1[68] + 1088LL), a1[154]);
            result = sub_140281930(v13, v15);
          }
          ++v13;
          --v14;
        }
        while ( v14 );
      }
    }
    else if ( (dword_140D3CA20 & 8) != 0 )
    {
      v6 = (signed __int64 *)&stru_140CF6040;
      v7 = 64LL;
      do
      {
        result = (signed __int64)sub_140281870(v6);
        v8 = result;
        if ( result )
        {
          v12 = *(_DWORD *)(result + 16);
          if ( (v12 & 1) == 0 && (!v4 || (v12 & 2) != 0) )
            sub_14042A5E0(*(_QWORD *)(a1[68] + 1088LL), a1[154]);
          result = sub_140281930(v6, v8);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  else if ( (dword_140D3CA20 & 0x10) != 0 || (result = (unsigned int)dword_140D3CA20, (dword_140D3CA20 & 8) != 0) )
  {
    v9 = (signed __int64 *)&stru_140CF6040;
    v10 = 64LL;
    do
    {
      result = (signed __int64)sub_140281870(v9);
      v11 = result;
      if ( result )
      {
        if ( !v4 || (*(_DWORD *)(result + 16) & 2) != 0 )
          sub_14042A5E0(*(_QWORD *)(a1[68] + 1088LL), a1[154]);
        result = sub_140281930(v9, v11);
      }
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
