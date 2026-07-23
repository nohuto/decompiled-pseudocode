/*
 * XREFs of sub_14083B300 @ 0x14083B300
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041B8C0 @ 0x14041B8C0 (sub_14041B8C0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F3B48 @ 0x1405F3B48 (sub_1405F3B48.c)
 *     sub_14083B480 @ 0x14083B480 (sub_14083B480.c)
 *     PoRequestShutdownEvent @ 0x14083B7D0 (PoRequestShutdownEvent.c)
 *     sub_1409C5A40 @ 0x1409C5A40 (sub_1409C5A40.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 */

void __fastcall sub_14083B300(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  _DWORD *v2; // rdi
  int v3; // eax
  __int64 HostSilo; // rbx
  __int16 v5; // ax
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v8; // bl
  bool v9; // al
  struct _KTHREAD *v10; // rcx
  bool v11; // si
  bool v12; // r14
  char *v13; // rax
  struct _KEVENT Event; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+80h] [rbp-88h]
  int v18; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+8Ch] [rbp-7Ch]
  _BYTE v20[504]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v21[128]; // [rsp+288h] [rbp+180h] BYREF

  memset(v20, 0, sizeof(v20));
  memset(&v21[2], 0, 0x1F8uLL);
  *(_QWORD *)&Event.Header.Lock = 0LL;
  PROCESS = (PRKPROCESS)*((_QWORD *)KeGetCurrentThread() + 23);
  ObfReferenceObject(PROCESS);
  v1 = PoRequestShutdownEvent(0LL);
  if ( v1 < 0 )
  {
    ZwClose(qword_140D3CEE8);
    qword_140D3CEE8 = 0LL;
    sub_1409CF1A0((unsigned int)v1);
  }
  else
  {
    v19 = 0;
    v21[1] = 0;
    v2 = 0LL;
    v18 = 33554904;
    v21[0] = 33554904;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v3 = sub_14041B8C0((__int64)qword_140D3CEE8, (__int64)&Event, (__int64)v2);
            v2 = 0LL;
          }
          while ( v3 < 0 && (v3 == -1073741823 || v3 == -1073741813 || v3 == -1073741281) );
          HostSilo = *(_QWORD *)&Event.Header.Lock;
          if ( *(_QWORD *)&Event.Header.Lock == -8LL )
          {
            HostSilo = PsGetHostSilo();
            *(_QWORD *)&Event.Header.Lock = HostSilo;
          }
          v5 = v19 & 0x7FFF;
          LOWORD(v19) = v5;
          if ( v5 != 1 )
            break;
          if ( (unsigned int)(*(_DWORD *)&v20[32] - 1) <= 0xB )
          {
            v6 = PsAttachSiloToCurrentThread(HostSilo);
            sub_14042A5E0(&v18, v21);
            PsDetachSiloFromCurrentThread(v6);
            v2 = v21;
            v21[6] = *(_DWORD *)&v20[16];
            *(_OWORD *)&v21[2] = *(_OWORD *)v20;
          }
        }
        if ( v5 == 5 )
          break;
        if ( v5 == 10 )
          sub_14083B480(&v18);
      }
      if ( PsIsHostSilo(HostSilo) )
      {
        dword_140C1B314 = 0;
        memset(&Object, 0, sizeof(Object));
        v17 = 0LL;
        memset(&v16, 0, sizeof(v16));
        Event.Header.WaitListHead = 0LL;
        KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)&v16.Header.WaitListHead, NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)&Object.Header.WaitListHead, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceExclusiveLite(&stru_140C5B010, 1u);
        qword_140C5B0B0 = (__int64)&Event.Header.WaitListHead;
        v8 = qword_140C5AFF0 == (_QWORD)&qword_140C5AFF0;
        ExReleaseResourceLite(&stru_140C5B010);
        sub_1402F9540((__int64)KeGetCurrentThread());
        v9 = sub_1405F3B48((__int64)&Object.Header.WaitListHead);
        v10 = KeGetCurrentThread();
        v11 = v9;
        --*((_WORD *)v10 + 242);
        ExAcquireResourceExclusiveLite(&stru_140C5AEE0, 1u);
        qword_140C5AF80 = (__int64)&v16.Header.WaitListHead;
        v12 = qword_140C5AEC0 == (_QWORD)&qword_140C5AEC0;
        ExReleaseResourceLite(&stru_140C5AEE0);
        sub_1402F9540((__int64)KeGetCurrentThread());
        if ( !v8 )
          KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
        if ( v11 )
          KeWaitForSingleObject(&Object.Header.WaitListHead, Executive, 0, 0, 0LL);
        if ( !v12 )
          KeWaitForSingleObject(&v16.Header.WaitListHead, Executive, 0, 0, 0LL);
        ZwClose(qword_140D3CEE8);
        qword_140D3CEE8 = 0LL;
        HostSilo = *(_QWORD *)&Event.Header.Lock;
      }
      v13 = (char *)sub_140204738(HostSilo);
      sub_1409C5A40(v13 + 784);
      if ( PsIsHostSilo(*(__int64 *)&Event.Header.Lock) )
        break;
      ObfDereferenceObjectWithTag(*(PVOID *)&Event.Header.Lock, 0x74536553u);
      *(_QWORD *)&Event.Header.Lock = MmBadPointer;
    }
  }
}
