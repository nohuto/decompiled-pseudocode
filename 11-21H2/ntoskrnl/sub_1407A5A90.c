/*
 * XREFs of sub_1407A5A90 @ 0x1407A5A90
 * Callers:
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A9A80 @ 0x1407A9A80 (sub_1407A9A80.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407A5A90(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // rdx
  _SLIST_HEADER *v6; // rcx
  void *v7; // rcx

  v2 = a2;
  v4 = qword_140007310[*(unsigned __int8 *)(a1 - 31)];
  sub_14042A5E0(a1, a2);
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 - 16);
    sub_1402AFC00(a1 - 16);
  }
  if ( (int)sub_14042A5E0(a1, v5) >= 0 )
  {
    if ( (*(_BYTE *)(a1 - 32) & 2) != 0 )
    {
      v6 = &stru_140CF5A80 + 8 * (unsigned __int64)*(unsigned int *)(v4 + 8);
      ++*((_DWORD *)&v6[1].HeaderX64 + 3);
      if ( LOWORD(v6->Alignment) >= LOWORD(v6[1].Alignment) )
      {
        ++LODWORD(v6[2].Alignment);
        sub_14042A5E0(a1 - 48, &stru_140CF5A80);
      }
      else
      {
        ExpInterlockedPushEntrySList(v6, (PSLIST_ENTRY)(a1 - 48));
      }
    }
    else
    {
      v7 = (void *)(a1 - 48);
      if ( *(_QWORD *)(v4 + 48) )
        sub_14042A5E0(v7, &stru_140CF5A80);
      else
        ExFreePoolWithTag(v7, *(_DWORD *)(v4 + 4));
    }
  }
}
