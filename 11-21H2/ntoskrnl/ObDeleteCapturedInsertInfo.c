/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x140680050
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     ExCreateDpcEvent @ 0x14063E200 (ExCreateDpcEvent.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 */

__int64 __fastcall ObDeleteCapturedInsertInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v8; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 - 16);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      if ( v6 )
      {
        LOBYTE(v5) = *(_BYTE *)(v5 + 16);
        LOBYTE(a3) = 1;
        SeReleaseSecurityDescriptor(v6, v5, a3, a4);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
        v5 = *(_QWORD *)(a1 - 16);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *((_QWORD *)CurrentPrcb + 264);
      ++*(_DWORD *)(v8 + 28);
      if ( *(_WORD *)v8 < *(_WORD *)(v8 + 16)
        || (++*(_DWORD *)(v8 + 32),
            v8 = *((_QWORD *)CurrentPrcb + 265),
            ++*(_DWORD *)(v8 + 28),
            *(_WORD *)v8 < *(_WORD *)(v8 + 16)) )
      {
        result = (__int64)ExpInterlockedPushEntrySList((PSLIST_HEADER)v8, (PSLIST_ENTRY)v5);
      }
      else
      {
        ++*(_DWORD *)(v8 + 32);
        result = sub_14042A5E0(v5, v5);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
  return result;
}
