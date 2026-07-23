/*
 * XREFs of PfTLoggingWorker @ 0x140838ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PfpFlushBuffers @ 0x14074B200 (PfpFlushBuffers.c)
 *     PfTGenerateTrace @ 0x14079CD94 (PfTGenerateTrace.c)
 */

LONG __fastcall PfTLoggingWorker(__int64 a1)
{
  NTSTATUS v2; // eax
  int v3; // ebx
  LONG result; // eax
  int v5; // ebx
  int v6; // ebx
  unsigned int v7; // ebx
  unsigned __int8 v8; // al
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int8 v13; // al
  int v14; // edi
  int v15; // eax
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+78h] [rbp-90h] BYREF

  Interval.QuadPart = -300000LL;
  Timeout.QuadPart = -3000000000LL;
  KeSetBasePriorityThread(KeGetCurrentThread(), -1);
  Object[0] = (PVOID)(a1 + 96);
  Object[1] = (PVOID)(a1 + 32);
  Object[2] = (PVOID)(a1 + 8);
  Object[3] = &stru_140D0C150;
  qword_140C65200 = KiQueryUnbiasedInterruptTime();
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      v3 = v2;
      if ( v2 == 258 )
        break;
      if ( v2 < 4 )
        goto LABEL_4;
    }
    v3 = 3;
LABEL_4:
    result = KeResetEvent((PRKEVENT)Object[v3]);
    if ( !v3 )
      return result;
    if ( dword_140C65358 >= (unsigned int)dword_140C6535C )
    {
      if ( v3 == 1 )
        goto LABEL_19;
    }
    else
    {
      v5 = v3 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            v7 = 0;
            while ( 1 )
            {
              v8 = PfpFlushBuffers();
              v9 = v8;
              if ( !v8 && (unsigned int)PfTGenerateTrace() == -1073741670 )
                break;
              ++v7;
              if ( v9 || v7 >= 0x3E8 )
                goto LABEL_12;
            }
            KeDelayExecutionThread(0, 0, &Interval);
LABEL_12:
            if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - qword_140C65200) > 0xB2D05E00 )
              PfTGenerateTrace();
          }
        }
        else
        {
          v10 = (unsigned __int8)PfpFlushBuffers();
          v11 = PfTGenerateTrace();
          if ( !v10 )
          {
            if ( v11 == -1073741670 )
              KeDelayExecutionThread(0, 0, &Interval);
            PfpFlushBuffers();
          }
        }
      }
      else
      {
        v12 = 0;
        do
        {
          v13 = PfpFlushBuffers();
          v14 = v13;
          if ( (!v13 || *(_DWORD *)(a1 + 80)) && (unsigned int)PfTGenerateTrace() == -1073741670 )
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v15 = 1000;
          }
          else
          {
            v15 = 1;
          }
          v12 += v15;
        }
        while ( !v14 && v12 < 0x2710 );
LABEL_19:
        KeSetEvent((PRKEVENT)(a1 + 56), 0, 0);
      }
    }
  }
}
