/*
 * XREFs of InitOnceScanIndexes @ 0x140756CF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x140755648 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140755DD8 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x140755E5C (SdbReadWORDTag.c)
 *     SdbGetFirstChild @ 0x140757B34 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x140757B94 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall InitOnceScanIndexes(PRTL_RUN_ONCE a1, _DWORD *a2, PVOID *a3)
{
  unsigned int v3; // esi
  char *v6; // r12
  unsigned int FirstChild; // eax
  __int64 v8; // r8
  unsigned int v9; // ebp
  unsigned int i; // eax
  unsigned int v11; // r14d
  unsigned int FirstTag; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax

  v3 = 0;
  if ( a2 && a3 )
  {
    v6 = (char *)(a2 + 12);
    memset(a2 + 12, 0, 0xA00uLL);
    FirstChild = SdbGetFirstChild(a2, 0LL);
    v9 = FirstChild;
    if ( FirstChild && (unsigned __int16)SdbGetTagFromTagID(a2, FirstChild, v8) == 30722 )
    {
      a2[659] = 0;
      for ( i = SdbFindFirstTag(a2, v9, 30723LL); ; i = SdbFindNextTag((__int64)a2, v9, v11) )
      {
        v11 = i;
        if ( !i )
        {
          *a3 = v6;
          return 1;
        }
        if ( a2[659] == 64 )
          goto LABEL_20;
        FirstTag = SdbFindFirstTag(a2, i, 14338LL);
        if ( !FirstTag )
          goto LABEL_20;
        LOWORD(a2[10 * a2[659] + 13]) = SdbReadWORDTag((__int64)a2, FirstTag, 0LL);
        v13 = SdbFindFirstTag(a2, v11, 14339LL);
        if ( !v13 )
          goto LABEL_20;
        HIWORD(a2[10 * a2[659] + 13]) = SdbReadWORDTag((__int64)a2, v13, 0LL);
        v14 = SdbFindFirstTag(a2, v11, 16406LL);
        a2[10 * a2[659] + 20] = v14 ? SdbReadDWORDTag((__int64)a2, v14, 0LL) : 0;
        v15 = SdbFindFirstTag(a2, v11, 38913LL);
        if ( !v15 )
          break;
        a2[10 * a2[659]++ + 12] = v15;
      }
      LOWORD(a2[10 * a2[659] + 13]) = 0;
    }
LABEL_20:
    AslLogCallPrintf(1LL);
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
