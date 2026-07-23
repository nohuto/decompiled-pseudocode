/*
 * XREFs of sub_140882180 @ 0x140882180
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407D9F00 @ 0x1407D9F00 (sub_1407D9F00.c)
 *     sub_1407DABA4 @ 0x1407DABA4 (sub_1407DABA4.c)
 */

LONG __fastcall sub_140882180(__int64 a1)
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
  Object[3] = &stru_140CF5E10;
  qword_140C4EA20 = sub_1402F5718();
  while ( 1 )
  {
    do
    {
      v2 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      v3 = v2;
      if ( v2 == 258 )
      {
        v3 = 3;
        break;
      }
    }
    while ( v2 >= 4 );
    result = KeResetEvent((PRKEVENT)Object[v3]);
    if ( !v3 )
      return result;
    if ( dword_140C4EB78 >= (unsigned int)dword_140C4EB7C )
    {
      if ( v3 == 1 )
        goto LABEL_33;
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
              v8 = sub_1407D9F00();
              v9 = v8;
              if ( !v8 && (unsigned int)sub_1407DABA4() == -1073741670 )
                break;
              ++v7;
              if ( v9 || v7 >= 0x3E8 )
                goto LABEL_17;
            }
            KeDelayExecutionThread(0, 0, &Interval);
LABEL_17:
            if ( (unsigned __int64)(sub_1402F5718() - qword_140C4EA20) > 0xB2D05E00 )
              sub_1407DABA4();
          }
        }
        else
        {
          v10 = (unsigned __int8)sub_1407D9F00();
          v11 = sub_1407DABA4();
          if ( !v10 )
          {
            if ( v11 == -1073741670 )
              KeDelayExecutionThread(0, 0, &Interval);
            sub_1407D9F00();
          }
        }
      }
      else
      {
        v12 = 0;
        do
        {
          v13 = sub_1407D9F00();
          v14 = v13;
          if ( (!v13 || *(_DWORD *)(a1 + 80)) && (unsigned int)sub_1407DABA4() == -1073741670 )
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
LABEL_33:
        KeSetEvent((PRKEVENT)(a1 + 56), 0, 0);
      }
    }
  }
}
