/*
 * XREFs of sub_1407DC5E4 @ 0x1407DC5E4
 * Callers:
 *     sub_1407DCCD8 @ 0x1407DCCD8 (sub_1407DCCD8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 */

char __fastcall sub_1407DC5E4(wchar_t *SubStr)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v5; // bp
  const wchar_t *v6; // rcx
  wchar_t *v7; // rbx
  wchar_t *v8; // rax
  wchar_t *v10; // rdx

  v1 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( SubStr[v3] );
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C544F8, 0LL);
  do
    ++v1;
  while ( word_140C543F0[v1] );
  v6 = word_140C543F0;
  v7 = (wchar_t *)&qword_140C54300 + v1 + 120;
  while ( 1 )
  {
    v8 = wcsstr(v6, SubStr);
    if ( !v8 || v8 < word_140C543F0 || v8 >= v7 )
      break;
    if ( v8 == word_140C543F0 || *(v8 - 1) == 44 )
    {
      v10 = &v8[(unsigned int)v3];
      if ( v10 == v7 || *v10 == 44 )
      {
        v5 = 1;
        break;
      }
    }
    v6 = v8 + 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C544F8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140C544F8);
  sub_1402AFC00((ULONG_PTR)qword_140C544F8);
  KeLeaveCriticalRegion();
  return v5;
}
