/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1C00975D0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     IrqLibReleaseArbiterLock @ 0x1C002385C (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0023884 (IrqLibAcquireArbiterLock.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 *v3; // rcx
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  *((_DWORD *)Context + 46) = 0;
  *((_DWORD *)Context + 47) = 0;
  *((_DWORD *)Context + 48) = 0;
  *((_DWORD *)Context + 49) = 0;
  *((_DWORD *)Context + 50) = -1;
  *((_QWORD *)Context + 26) = 0LL;
  v3 = (__int64 *)*((_QWORD *)Context + 95);
  *((_QWORD *)Context + 30) = Context + 232;
  *((_QWORD *)Context + 29) = Context + 232;
  v4 = AMLIGetNamedChild(v3, 1397310559);
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    AMLIEvalNameSpaceObject(v4, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v5);
  }
  IrqLibAcquireArbiterLock(0);
  v6 = (_QWORD *)qword_1C00807D8;
  v7 = Context + 216;
  if ( *(__int64 **)qword_1C00807D8 != &LinkNodeListHead )
    __fastfail(3u);
  *v7 = &LinkNodeListHead;
  *((_QWORD *)Context + 28) = v6;
  *v6 = v7;
  qword_1C00807D8 = (__int64)(Context + 216);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 31));
  *((_QWORD *)Context + 31) = 0LL;
}
