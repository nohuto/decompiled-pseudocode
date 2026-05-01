/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x1800977D4
 * Callers:
 *     SdbGetPathCustomSdb @ 0x180097280 (SdbGetPathCustomSdb.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslGuidToString @ 0x18009E360 (AslGuidToString.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(_WORD *a1)
{
  signed int v2; // ebx
  const char *v3; // r9
  int v4; // r8d
  _WORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  signed __int64 v11; // r8
  __int16 v12; // r9
  char *v13; // rax

  *a1 = 0;
  v2 = AslGuidToString();
  if ( v2 >= 0 )
  {
    v5 = a1;
    v6 = 43LL;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v6;
    }
    while ( v6 );
    v7 = (43 - v6) & -(__int64)(v6 != 0);
    v2 = v6 == 0 ? 0xC000000D : 0;
    if ( v6 )
    {
      v8 = (char *)&a1[v7];
      v9 = 43 - v7;
      if ( 43 != v7 )
      {
        v10 = 2147483646LL;
        v11 = (char *)L".sdb" - v8;
        do
        {
          if ( !v10 )
            break;
          v12 = *(_WORD *)&v8[v11];
          if ( !v12 )
            break;
          *(_WORD *)v8 = v12;
          --v10;
          v8 += 2;
          --v9;
        }
        while ( v9 );
      }
      v13 = v8 - 2;
      if ( v9 )
        v13 = v8;
      v2 = v9 == 0 ? 0x80000005 : 0;
      *(_WORD *)v13 = 0;
    }
    if ( v2 >= 0 )
      return 0;
    v3 = "RtlStringCchCatW failed [%x]";
    v4 = 817;
  }
  else
  {
    v3 = "AslGuidToString failed [%x]";
    v4 = 811;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetCustomSdbFileName", v4, (_DWORD)v3);
  return (unsigned int)v2;
}
