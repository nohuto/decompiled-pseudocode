/*
 * XREFs of sub_14020C810 @ 0x14020C810
 * Callers:
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_1405980C8 @ 0x1405980C8 (sub_1405980C8.c)
 * Callees:
 *     sub_14020C178 @ 0x14020C178 (sub_14020C178.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 *     sub_140374EA8 @ 0x140374EA8 (sub_140374EA8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140556050 @ 0x140556050 (sub_140556050.c)
 *     sub_1405562E8 @ 0x1405562E8 (sub_1405562E8.c)
 *     sub_140652638 @ 0x140652638 (sub_140652638.c)
 */

NTSTATUS __fastcall sub_14020C810(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        LARGE_INTEGER a4,
        void *a5,
        int a6,
        int a7,
        char a8,
        __int64 a9,
        struct _IO_STATUS_BLOCK *a10,
        IRP **a11)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v17; // rdx
  IRP *v18; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v21; // rdx
  NTSTATUS result; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // eax
  bool v31; // zf

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8474u);
    __addgsdword(0x8478u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v17) = RelatedDeviceObject->StackSize;
  v18 = (IRP *)sub_1402AACA0(RelatedDeviceObject, v17, 0LL);
  if ( !v18 )
  {
    if ( (unsigned int)sub_140374EA8(a1) )
    {
      _InterlockedAdd(&dword_140C474E0, 1u);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      v25 = sub_1405562E8(v24, v23, 1LL);
    }
    else
    {
      _InterlockedAdd(&dword_140C474E4, 1u);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      v25 = sub_140556050(RelatedDeviceObject, v23, 0LL);
    }
    v18 = (IRP *)v25;
    if ( !v25 )
      return -1073741670;
  }
  if ( a11 )
    *a11 = v18;
  v18->AllocationFlags |= 0x20u;
  CurrentStackLocation = v18->Tail.Overlay.CurrentStackLocation;
  v18->MdlAddress = a2;
  v18->Flags = ((a6 + 1) << 17) | 3;
  v18->Tail.Overlay.Thread = KeGetCurrentThread();
  v18->Tail.Overlay.OriginalFileObject = a1;
  v18->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  v18->RequestorMode = 0;
  v18->UserIosb = a10;
  v18->Overlay.AllocationSize = a4;
  v18->Overlay.AsynchronousParameters.UserApcContext = a5;
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = a2->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Flags |= a8;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentThread = KeGetCurrentThread();
  if ( a9 )
    sub_14020C178((__int64)v18, *(_QWORD *)(a9 + 24), (__int64)CurrentThread, 0);
  else
    sub_1403437A0(v18, CurrentThread);
  sub_1402AE1B0(v18);
  if ( a7 )
  {
    LOBYTE(v21) = a7;
    sub_140652638(v18, v21);
  }
  result = IofCallDriver(RelatedDeviceObject, v18);
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    a10->Information = 0LL;
    a10->Status = result;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    sub_14042A5E0(a5, a10, 0LL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = *((_QWORD *)CurrentPrcb + 4375);
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v31 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 259;
  }
  return result;
}
