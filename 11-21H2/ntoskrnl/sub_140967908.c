/*
 * XREFs of sub_140967908 @ 0x140967908
 * Callers:
 *     sub_14096799C @ 0x14096799C (sub_14096799C.c)
 *     sub_140967A0C @ 0x140967A0C (sub_140967A0C.c)
 *     sub_140967A74 @ 0x140967A74 (sub_140967A74.c)
 *     sub_140967AE4 @ 0x140967AE4 (sub_140967AE4.c)
 *     sub_140967B4C @ 0x140967B4C (sub_140967B4C.c)
 *     sub_140967BBC @ 0x140967BBC (sub_140967BBC.c)
 *     sub_140967C2C @ 0x140967C2C (sub_140967C2C.c)
 *     sub_140967C94 @ 0x140967C94 (sub_140967C94.c)
 *     sub_140967D90 @ 0x140967D90 (sub_140967D90.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140967908(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C2A080, 0LL);
  for ( i = (PVOID *)off_140C08E98; i != &off_140C08E98; i = (PVOID *)*i )
    sub_14042A5E0(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C2A080, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C2A080);
  return sub_1402AFC00((ULONG_PTR)&qword_140C2A080);
}
