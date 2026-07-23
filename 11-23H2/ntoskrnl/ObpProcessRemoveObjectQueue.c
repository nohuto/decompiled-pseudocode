/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x140749730
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140254830 (KeInsertQueueDpc.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1402F50A0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 *     MmAttachSession @ 0x1403564F0 (MmAttachSession.c)
 *     MmGetNextSession @ 0x14035EE90 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406E36D0 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpRemoveObjectRoutine @ 0x140729970 (ObpRemoveObjectRoutine.c)
 *     MmQuitNextSession @ 0x140884B50 (MmQuitNextSession.c)
 *     ObpDeregisterObject @ 0x14097CB50 (ObpDeregisterObject.c)
 */

void ObpProcessRemoveObjectQueue()
{
  _KPROCESS *NextSession; // rax
  __int64 v1; // rbx
  int v2; // r8d
  __int128 **v3; // r11
  int v4; // r10d
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r9d
  int *v9; // r14
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  signed __int32 v18[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v19; // [rsp+28h] [rbp-70h]
  __int128 *v20; // [rsp+30h] [rbp-68h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v21; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_140C0E290 )
  {
    v15 = __rdtsc();
    v16 = 41929663 * ((((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) >> 4);
    qword_140C0E290 = v16;
    if ( !v16 )
      qword_140C0E290 = 1LL;
    v17 = __rdtsc();
    qword_140C0E298 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) >> 4)) ^ 0xC38LL;
    qword_140C0E2A0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C0E2A0 )
  {
    v19 = &xmmword_140D1F2E0;
    v20 = &xmmword_140D1F160;
    NextSession = (_KPROCESS *)MmGetNextSession(0LL);
    v1 = (__int64)NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession, (__int64)&v21) >= 0 )
      {
        if ( !qword_140C0E2A8 )
          qword_140C0E2A8 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_140D1F170 && (_BYTE)KdDebuggerNotPresent )
        {
          v2 = 0;
          v3 = &v20;
          v4 = 2;
          do
          {
            v5 = 0;
            v6 = *(_QWORD *)*v3;
            v7 = *((_DWORD *)*v3 + 4);
            v8 = v2 + v6 + (unsigned int)*v3;
            if ( v7 )
            {
              v9 = *(int **)*v3;
              do
              {
                v10 = *v9;
                ++v5;
                v11 = *v9++;
                v8 = v5 * ((v10 + *(_DWORD *)((v11 >> 4) + v6)) ^ v8);
              }
              while ( v5 < v7 );
            }
            --v3;
            v2 += 2 * v8;
            --v4;
          }
          while ( v4 );
          if ( v2 != qword_140C0E2A8 && !qword_140C0E260 )
          {
            v18[8] = -2071986176;
            qword_140C0E260 = (unsigned int)__ROL4__(-2071986176, 233);
            xmmword_140C0E268 = 0LL;
            qword_140C0E278 = 266LL;
            qword_140C0E280 = v6;
          }
        }
        MmDetachSession(v1, &v21);
      }
      MmQuitNextSession(v1);
    }
    if ( qword_140C0E260 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiScanQueues )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiScanQueues,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_140C0E288 = 3903744LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_140C0E2A0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  do
  {
    v12 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v13 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v12);
      if ( v13 )
        ObpHandleRevocationBlockRemoveObject(v13);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v12);
      v14 = *(_QWORD *)(v12 + 8);
      ObpRemoveObjectRoutine(v12, 1);
      v12 = v14;
    }
    while ( v14 && v14 != 1 );
  }
  while ( ObpRemoveObjectList != 1 || _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL) != 1 );
  _InterlockedOr(v18, 0);
  if ( ObpRemoveObjectWait )
    ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
}
