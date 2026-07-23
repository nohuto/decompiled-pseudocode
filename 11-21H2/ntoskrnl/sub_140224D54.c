/*
 * XREFs of sub_140224D54 @ 0x140224D54
 * Callers:
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

bool __fastcall sub_140224D54(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // di
  __int64 v4; // r8
  ULONG_PTR i; // rbx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23C48, 0LL);
  for ( i = qword_140C23B70; (ULONG_PTR *)i != &qword_140C23B70; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 96) )
    {
      v7 = a1;
      if ( (unsigned __int8)sub_14042A5E0(16LL, &v7, v4) )
      {
        if ( !v3 )
          v3 = *(_DWORD *)(i + 24) >= 0;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23C48, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140C23C48);
  sub_1402AFC00((ULONG_PTR)&qword_140C23C48);
  KeLeaveCriticalRegion();
  return v3;
}
