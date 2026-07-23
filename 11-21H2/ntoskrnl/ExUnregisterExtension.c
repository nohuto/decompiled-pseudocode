/*
 * XREFs of ExUnregisterExtension @ 0x140A02740
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A0282C @ 0x140A0282C (sub_140A0282C.c)
 */

__int64 __fastcall ExUnregisterExtension(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  ULONG_PTR Count; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  p_Count = &a1[9].Count;
  v4 = sub_140347C10((__int64)&a1[9], 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    sub_14029F120(p_Count, v4, (__int64)p_Count);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  if ( a1[6].Count )
    sub_14042A5E0(2LL, a1[7].Count);
  ExWaitForRundownProtectionRelease(a1 + 8);
  Count = a1[6].Count;
  a1[10].Count = 0LL;
  if ( Count )
    sub_14042A5E0(3LL, a1[7].Count);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Count, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_Count);
  sub_1402AFC00((ULONG_PTR)p_Count);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return sub_140A0282C(a1);
}
