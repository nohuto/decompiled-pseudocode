/*
 * XREFs of TtmiOpenDefaultTerminal @ 0x1409AB29C
 * Callers:
 *     TtmpDispatchOpenTerminal @ 0x1409A69CC (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 */

__int64 __fastcall TtmiOpenDefaultTerminal(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, HANDLE *a4)
{
  void *v4; // rcx
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  int v10; // r9d
  int v11; // r8d
  int v12; // edx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(void **)(a1 + 24);
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v4, a2, TtmpTerminalObjectType, 0, &Object, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = v8;
    v11 = v8;
    v12 = 926;
LABEL_5:
    TtmiLogError("TtmiOpenDefaultTerminal", v12, v11, v10);
    return (unsigned int)v9;
  }
  v9 = ObOpenObjectByPointer(Object, a3 == 0 ? 0x200 : 0, 0LL, a2, TtmpTerminalObjectType, a3, a4);
  ObfDereferenceObject(Object);
  if ( v9 < 0 )
  {
    v10 = v9;
    v11 = v9;
    v12 = 951;
    goto LABEL_5;
  }
  return (unsigned int)v9;
}
