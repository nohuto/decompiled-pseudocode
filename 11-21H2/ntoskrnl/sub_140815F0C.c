/*
 * XREFs of sub_140815F0C @ 0x140815F0C
 * Callers:
 *     sub_140815DC8 @ 0x140815DC8 (sub_140815DC8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140815F88 @ 0x140815F88 (sub_140815F88.c)
 */

__int64 __fastcall sub_140815F0C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  __int64 v4; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16818, 0LL);
  if ( a1 )
  {
    v4 = sub_140815F88(a1);
    v2 = v4;
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 44) )
        v2 = 0LL;
      else
        *(_DWORD *)(v4 + 44) = 1;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16818, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
