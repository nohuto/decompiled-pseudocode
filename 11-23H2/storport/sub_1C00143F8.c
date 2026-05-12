/*
 * XREFs of sub_1C00143F8 @ 0x1C00143F8
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00144AC @ 0x1C00144AC (sub_1C00144AC.c)
 *     sub_1C0074A70 @ 0x1C0074A70 (sub_1C0074A70.c)
 */

__int64 __fastcall sub_1C00143F8(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  volatile signed __int32 *v3; // rbx
  ULONG Options; // r14d
  BOOLEAN Lock; // r15
  signed int v8; // ebp

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  if ( Options == 1 )
  {
    v3 = (volatile signed __int32 *)(a1 + 92);
  }
  else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
  {
    v3 = (volatile signed __int32 *)(a1 + 100);
  }
  else if ( CurrentStackLocation->Parameters.Create.Options == 3 )
  {
    v3 = (volatile signed __int32 *)(a1 + 96);
  }
  v8 = sub_1C00144AC(*(_QWORD *)(a1 + 24));
  if ( v8 >= 0 && v3 )
  {
    if ( Lock )
      _InterlockedIncrement(v3);
    else
      _InterlockedDecrement(v3);
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 32));
    if ( Options == 1 )
      sub_1C0074A70(*(_QWORD *)(a1 + 32), *(unsigned int *)v3);
  }
  return sub_1C0003440(a2, 0, v8);
}
