/*
 * XREFs of sub_14074D9EC @ 0x14074D9EC
 * Callers:
 *     sub_14074D800 @ 0x14074D800 (sub_14074D800.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void __fastcall sub_14074D9EC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 **v5; // rax
  _SLIST_ENTRY *v6; // rdx

  if ( *a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A0A0, 0LL);
    v4 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (__int64)v5;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A0A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C2A0A0);
    sub_1402AFC00((ULONG_PTR)&qword_140C2A0A0);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v6 = (_SLIST_ENTRY *)a1[31];
    if ( v6 )
      sub_140203D88((__int64)&stru_140CF5A00, v6, a3);
  }
}
