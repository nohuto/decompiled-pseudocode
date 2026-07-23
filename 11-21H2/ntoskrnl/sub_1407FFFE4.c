/*
 * XREFs of sub_1407FFFE4 @ 0x1407FFFE4
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 *     sub_140A6C7A8 @ 0x140A6C7A8 (sub_140A6C7A8.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     sub_140363D98 @ 0x140363D98 (sub_140363D98.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 *     sub_140800160 @ 0x140800160 (sub_140800160.c)
 */

void __fastcall sub_1407FFFE4(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *i; // rcx
  _UNKNOWN **v3; // rax
  _QWORD *v4; // rdi
  struct _KTHREAD *j; // rdx
  struct _KTHREAD *v6; // rax
  struct _KTHREAD *v7; // rbx
  signed __int32 v8[8]; // [rsp+0h] [rbp-79h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v10[112]; // [rsp+60h] [rbp-19h] BYREF
  BOOLEAN Enable; // [rsp+E0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+6Fh] BYREF
  LARGE_INTEGER Timeout; // [rsp+F0h] [rbp+77h] BYREF

  Enable = a1;
  memset(v10, 0, 0x58uLL);
  Object = 0LL;
  Timeout.QuadPart = -100000000LL;
  memset(&Event, 0, sizeof(Event));
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  ExAcquireFastMutex(&stru_140C11580);
  byte_140C115B8 = Enable;
  _InterlockedOr(v8, 0);
  for ( i = 0LL; ; i = v4 )
  {
    v3 = sub_140363D98(i);
    v4 = v3;
    if ( !v3 )
      break;
    if ( (int)sub_140800160(v3, &Object) >= 0 )
    {
      for ( j = 0LL; ; j = v7 )
      {
        v6 = (struct _KTHREAD *)sub_1407E7750((__int64)Object, j);
        v7 = v6;
        if ( !v6 )
          break;
        if ( (*((_DWORD *)v6 + 345) & 1) != 0 )
        {
          if ( v6 == CurrentThread )
          {
            KeSetKernelStackSwapEnable(Enable);
          }
          else
          {
            KeInitializeApc((__int64)v10, (__int64)v6, 0, (__int64)sub_140A516C0, 0LL, 0LL, 0, (__int64)&Enable);
            if ( KeInsertQueueApc((__int64)v10, (__int64)&Event, 0LL, 3)
              && KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258
              && !KeRemoveQueueApc((__int64)v10) )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            }
          }
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  KeReleaseGuardedMutex(&stru_140C11580);
}
