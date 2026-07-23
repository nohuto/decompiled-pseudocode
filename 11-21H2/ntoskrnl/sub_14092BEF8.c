/*
 * XREFs of sub_14092BEF8 @ 0x14092BEF8
 * Callers:
 *     sub_14092BA58 @ 0x14092BA58 (sub_14092BA58.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateTimer @ 0x14041D060 (ZwCreateTimer.c)
 *     sub_140540B20 @ 0x140540B20 (sub_140540B20.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_14092BEF8(__int64 a1)
{
  __int64 v1; // rsi
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE TimerHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  TimerHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 512;
  v3 = ZwCreateTimer(&TimerHandle, 0x1F0003u, &ObjectAttributes, NotificationTimer);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v5 = sub_140732D40((ULONG_PTR)TimerHandle, 2031619, (__int64)ExTimerObjectType, 0, 0x57676244u, &Object, 0LL, 0LL);
    v4 = v5;
    if ( v5 >= 0 )
    {
      ZwClose(TimerHandle);
      TimerHandle = 0LL;
      *(_QWORD *)(v1 + 16) = Object;
      v6 = sub_140540B20();
      if ( !v6 )
      {
        DbgPrintEx(5u, 0, "DBGK: Could not allocate timer.\n");
        return 3221225495LL;
      }
      *(_QWORD *)(a1 + 120) = v6;
      *v6 = 0LL;
      v6[2] = sub_14092BDD0;
      v6[3] = a1;
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Failed to reference timer, status 0x%X\n", v5);
      if ( Object )
      {
        ObfDereferenceObject(Object);
        *(_QWORD *)(v1 + 16) = 0LL;
      }
      if ( TimerHandle )
        ZwClose(TimerHandle);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Failed to create timer, status 0x%X\n", v3);
  }
  return v4;
}
