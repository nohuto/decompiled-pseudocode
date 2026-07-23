/*
 * XREFs of sub_1409CD41C @ 0x1409CD41C
 * Callers:
 *     sub_1409C5B80 @ 0x1409C5B80 (sub_1409C5B80.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 */

struct _KTHREAD *__fastcall sub_1409CD41C(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // r15
  __int64 i; // rcx
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = PsAttachSiloToCurrentThread(a1);
  v4 = 0LL;
  v5 = 16LL;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v7 = qword_140D3CA78;
    --*((_WORD *)CurrentThread + 242);
    v8 = &stru_140CF66C0 + (v2 & 3);
    ExAcquireResourceExclusiveLite(v8, 1u);
    for ( i = *(_QWORD *)(v4 + v7); i; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 160) == a1 )
      {
        v10 = *(_QWORD *)(i + 24);
        if ( !v10 || (*(_DWORD *)(i + 32) & 8) == 0 && v10 == 1 )
        {
          v13 = *(_QWORD *)(i + 8);
          ExReleaseResourceLite(v8);
          sub_1402F9540((__int64)KeGetCurrentThread());
          sub_14069BDD0(&v13, 0);
          v11 = KeGetCurrentThread();
          --*((_WORD *)v11 + 242);
          ExAcquireResourceExclusiveLite(v8, 1u);
          i = qword_140D3CA78 + 8 * v2;
        }
      }
    }
    ExReleaseResourceLite(v8);
    sub_1402F9540((__int64)KeGetCurrentThread());
    ++v2;
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  return PsDetachSiloFromCurrentThread(v3);
}
