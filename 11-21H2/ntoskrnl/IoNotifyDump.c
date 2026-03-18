/*
 * XREFs of IoNotifyDump @ 0x14038D2E0
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x140A4C960 (PopRestoreHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoNotifyDump(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( qword_140C54E00 )
  {
    v1 = a1 - 1;
    if ( !v1 )
    {
      v4 = 3LL;
      return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_140C54E00)(v4, 0LL, 0LL);
    }
    v2 = v1 - 1;
    if ( !v2 )
    {
      v4 = 4LL;
      return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_140C54E00)(v4, 0LL, 0LL);
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      v4 = 5LL;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C54E00)(v4, 0LL, 0LL);
    }
    if ( v3 == 1 )
    {
      v4 = 7LL;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C54E00)(v4, 0LL, 0LL);
    }
  }
  return result;
}
