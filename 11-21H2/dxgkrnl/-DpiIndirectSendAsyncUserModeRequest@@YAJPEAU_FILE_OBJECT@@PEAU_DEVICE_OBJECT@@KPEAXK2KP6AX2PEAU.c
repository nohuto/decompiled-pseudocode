/*
 * XREFs of ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C0392338
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C03929B0 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C00604C4 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectSendAsyncUserModeRequest(
        struct _FILE_OBJECT *Object,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3,
        void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        void (*a8)(void *, struct _IO_STATUS_BLOCK *),
        void *a9,
        bool *a10)
{
  __int64 v13; // rbx
  size_t v14; // rdi
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // eax
  _QWORD *PoolWithTag; // r14
  __int64 v19; // rcx
  void (*v20)(void *, struct _IO_STATUS_BLOCK *); // rax
  PIRP Irp; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  void *v23; // rax
  __int64 v24; // rax
  void *v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = 0LL;
  if ( !Object )
  {
    WdLogSingleEntry1(3LL, DeviceObject);
    LODWORD(v13) = -1073741130;
    goto LABEL_21;
  }
  v14 = (unsigned int)Size;
  v15 = a7;
  v16 = Size;
  if ( (unsigned int)Size <= a7 )
    v16 = a7;
  v17 = v16 + 56;
  if ( v17 < 0x38 )
  {
    v13 = -1073741675LL;
    v19 = 2LL;
    goto LABEL_20;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v17, 0x74727044u);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v26);
  v26 = PoolWithTag;
  a10 = 0LL;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&a10);
  if ( !PoolWithTag )
  {
    v13 = -1073741801LL;
    v19 = 6LL;
LABEL_20:
    WdLogSingleEntry1(v19, v13);
    goto LABEL_21;
  }
  v20 = a8;
  *PoolWithTag = Object;
  PoolWithTag[3] = v20;
  PoolWithTag[4] = a9;
  *((_DWORD *)PoolWithTag + 12) = 1;
  LODWORD(v13) = ObReferenceObjectByPointer(Object, 0x10000000u, (POBJECT_TYPE)IoFileObjectType, 0);
  if ( (int)v13 >= 0 )
  {
    Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
    v13 = (__int64)Irp;
    if ( Irp )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v23 = a6;
      if ( !v15 )
        v23 = 0LL;
      CurrentStackLocation[-1].MajorFunction = 14;
      CurrentStackLocation[-1].Parameters.Read.Length = v15;
      CurrentStackLocation[-1].Parameters.Create.Options = v14;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2296832;
      *(_QWORD *)(v13 + 112) = v23;
      PoolWithTag[5] = v23;
      if ( (_DWORD)v14 || v15 )
      {
        *(_QWORD *)(v13 + 24) = PoolWithTag + 7;
        if ( (_DWORD)v14 )
          memmove(PoolWithTag + 7, a4, v14);
      }
      CurrentStackLocation[-1].FileObject = Object;
      v24 = *(_QWORD *)(v13 + 184);
      v26 = 0LL;
      *(_QWORD *)(v24 - 16) = DpiIndirectIoCompleteRoutine;
      *(_QWORD *)(v24 - 8) = PoolWithTag;
      *(_BYTE *)(v24 - 69) = -32;
      LODWORD(v13) = IofCallDriver(DeviceObject, (PIRP)v13);
    }
    else
    {
      LODWORD(v13) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
  }
LABEL_21:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v26);
  return (unsigned int)v13;
}
