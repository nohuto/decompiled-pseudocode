/*
 * XREFs of TtmpSessionWorker @ 0x1409A5B30
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     MmGetSessionById @ 0x1402C20C0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 *     MmAttachSession @ 0x1403564F0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     TtmiSessionDeviceListWorker @ 0x1409A2F10 (TtmiSessionDeviceListWorker.c)
 *     TtmpActivateSessionWorker @ 0x1409A51F8 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1409A53EC (TtmpDeactivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1409A546C (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 *     TtmiLogSessionWorkerPass @ 0x1409AA03C (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x1409AA104 (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x1409AA198 (TtmiLogSessionWorkerStop.c)
 *     TtmiSessionTerminalListWorker @ 0x1409AB490 (TtmiSessionTerminalListWorker.c)
 */

__int64 __fastcall TtmpSessionWorker(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // r13
  __int64 v4; // r14
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  _KPROCESS *SessionById; // rax
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  unsigned int i; // r15d
  __int64 v14; // rdx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  char v18; // bl
  unsigned int v19; // ebp
  unsigned int v20; // eax
  unsigned int v21; // ebx
  char v23; // [rsp+20h] [rbp-68h] BYREF
  char v24[7]; // [rsp+21h] [rbp-67h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v25; // [rsp+28h] [rbp-60h] BYREF

  memset(&v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v24[0] = 0;
  v4 = 0LL;
  v23 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v5 = *a1;
  TtmiLogSessionWorkerStart(*a1);
  v6 = a1[1] & 0xFFFFFFFC | 2;
  a1[1] = v6;
  *((_QWORD *)a1 + 29) = KeGetCurrentThread();
  if ( (v6 & 4) == 0 )
  {
    SessionById = (_KPROCESS *)MmGetSessionById(v5);
    v4 = (__int64)SessionById;
    if ( !SessionById )
    {
      v8 = -1073740715;
      v9 = 0xFFFFFFFFLL;
      v10 = 3221226581LL;
      v11 = 2910LL;
LABEL_4:
      TtmiLogError("TtmpSessionWorker", v11, v9, v10);
      goto LABEL_25;
    }
    v12 = MmAttachSession(SessionById, (__int64)&v25);
    v8 = v12;
    if ( v12 < 0 )
    {
      v10 = (unsigned int)v12;
      v9 = (unsigned int)v12;
      v11 = 2919LL;
      goto LABEL_4;
    }
    v3 = 1;
  }
  v8 = 0;
  for ( i = 1; ; ++i )
  {
    v21 = a1[56];
    a1[56] = 0;
    v16 = v21 & 7;
    if ( !v16 )
      break;
    TtmiLogSessionWorkerPass(v5, v16, i);
    if ( (v16 & 2) != 0 )
    {
      TtmiSessionTerminalListWorker(a1, &v23, v24);
      v15 = (v16 & 0xFD ^ (v16 & 0xFD | (unsigned __int8)(4 * v23))) & 4 ^ v16 & 0xFFFFFFFD;
      v16 = ((unsigned __int8)v15 ^ (unsigned __int8)(v15 | v24[0])) & 1 ^ v15;
    }
    v17 = v16;
    v18 = v16 & 0xFB;
    v19 = v17 >> 2;
    if ( (_BYTE)v19 )
    {
      if ( (a1[1] & 0x10) != 0 )
      {
        v8 = TtmpActivateSessionWorker((__int64)a1, v14);
        if ( v8 != 259 )
        {
          v20 = a1[1];
          if ( (v20 & 0x1000) != 0 )
          {
            a1[1] = v20 & 0xFFFFEFFF;
LABEL_17:
            TtmiSessionDeviceListWorker((__int64)a1);
            goto LABEL_18;
          }
        }
      }
    }
    if ( (v18 & 1) != 0 )
      goto LABEL_17;
LABEL_18:
    if ( (_BYTE)v19 && (a1[1] & 0x20) != 0 )
      v8 = TtmpDeactivateSessionWorker((__int64)a1, v14);
  }
  if ( v3 )
    MmDetachSession(v4, &v25);
LABEL_25:
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v5, v8);
}
