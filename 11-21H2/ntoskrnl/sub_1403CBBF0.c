/*
 * XREFs of sub_1403CBBF0 @ 0x1403CBBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140246A0C @ 0x140246A0C (sub_140246A0C.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14053B3F8 @ 0x14053B3F8 (sub_14053B3F8.c)
 *     sub_14058A4E8 @ 0x14058A4E8 (sub_14058A4E8.c)
 *     sub_14058AFF8 @ 0x14058AFF8 (sub_14058AFF8.c)
 *     sub_14058B784 @ 0x14058B784 (sub_14058B784.c)
 *     sub_14058BEE4 @ 0x14058BEE4 (sub_14058BEE4.c)
 *     sub_1405BAEEC @ 0x1405BAEEC (sub_1405BAEEC.c)
 */

ULONG_PTR *__fastcall sub_1403CBBF0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v10; // rdx
  ULONG_PTR *result; // rax
  PVOID Object[8]; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1A8h] BYREF

  *(_BYTE *)(a1 + 1681) = 1;
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  *((_DWORD *)CurrentThread + 345) |= 2u;
  Object[0] = (PVOID)(a1 + 104);
  Object[2] = (PVOID)(a1 + 1520);
  Object[1] = (PVOID)(a1 + 1376);
  Object[4] = (PVOID)(a1 + 1616);
  Object[3] = (PVOID)(a1 + 1400);
  Object[5] = (PVOID)(a1 + 1752);
  Object[6] = (PVOID)(a1 + 1976);
  Object[7] = &stru_140C51C10;
  while ( 1 )
  {
    v3 = KeWaitForMultipleObjects(
           8 - (&StartContext != (ULONG_PTR *)a1),
           Object,
           WaitAny,
           WrVirtualMemory,
           0,
           0,
           0LL,
           &WaitBlockArray);
    if ( v3 == 1 )
      goto LABEL_7;
    sub_140246A0C(a1);
    if ( !v3 )
      break;
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                if ( v9 == 1 )
                {
                  KeResetEvent(&stru_140C51C10);
                  while ( (unsigned int)sub_14053B3F8(0LL, v10, 1LL, 0LL)
                       && (unsigned __int64)qword_140C51888 <= 0x8000000 )
                    ;
                }
              }
              else
              {
                KeResetEvent((PRKEVENT)(a1 + 1976));
                sub_1405BAEEC(a1);
              }
            }
            else
            {
              sub_14058AFF8(a1);
            }
          }
          else
          {
            sub_14058B784(a1);
          }
        }
        else
        {
          KeResetEvent((PRKEVENT)(a1 + 1400));
          sub_14058BEE4(a1, 0LL);
        }
      }
      else
      {
        sub_140393EC0(a1, 1);
      }
    }
    else
    {
LABEL_7:
      KeResetEvent((PRKEVENT)(a1 + 1376));
      sub_140246A0C(a1);
    }
  }
  result = &StartContext;
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    while ( *(_QWORD *)(a1 + 1704) != a1 + 1704 && (unsigned int)sub_14058A4E8(a1) )
      ;
    *(_BYTE *)(a1 + 1680) = 1;
    sub_14058B784(a1);
    return (ULONG_PTR *)sub_14058AFF8(a1);
  }
  return result;
}
