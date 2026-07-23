/*
 * XREFs of sub_1406A185C @ 0x1406A185C
 * Callers:
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1406A185C(__int64 a1)
{
  _SLIST_ENTRY *v2; // rcx

  v2 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v2 && v2 != *(_SLIST_ENTRY **)a1 && v2 != (_SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_140CE241C;
      if ( LOWORD(Lookaside.Alignment) >= (unsigned __int16)word_140CE2410 )
      {
        ++dword_140CE2420;
        sub_14042A5E0(v2, &Lookaside);
      }
      else
      {
        ExpInterlockedPushEntrySList(&Lookaside, v2);
      }
    }
    else
    {
      SeFreePrivileges((PPRIVILEGE_SET)v2);
    }
  }
}
