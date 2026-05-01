/*
 * XREFs of SdbGetDatabaseID @ 0x180095224
 * Callers:
 *     SdbpValidateAndApplyCompatFlags @ 0x180095B2C (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbReadBinaryTag @ 0x18009936C (SdbReadBinaryTag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int FirstTag; // eax
  const char *v7; // r9
  int v8; // r8d
  unsigned int v9; // eax
  const void *v10; // rsi

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( (v2 & 2) != 0 )
  {
    v10 = (const void *)(a1 + 28);
  }
  else
  {
    FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
    if ( !FirstTag )
    {
      v7 = "Failed to get root tag";
      v8 = 440;
LABEL_4:
      AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", v8, (_DWORD)v7);
      return v3;
    }
    v9 = SdbFindFirstTag(a1, FirstTag, 36871LL);
    if ( !v9 )
    {
      v7 = "Failed to get the database id";
      v8 = 446;
      goto LABEL_4;
    }
    v10 = (const void *)(a1 + 28);
    if ( !(unsigned int)SdbReadBinaryTag(a1, v9, a1 + 28, 16LL) )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", 451, (unsigned int)"Failed to read database id 0x%lx");
      return v3;
    }
    *(_DWORD *)(a1 + 24) |= 2u;
    v2 = *(_DWORD *)(a1 + 24);
  }
  if ( (v2 & 2) != 0 )
  {
    memmove_0(a2, v10, 0x10uLL);
    return 1;
  }
  return v3;
}
