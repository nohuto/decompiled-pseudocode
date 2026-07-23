/*
 * XREFs of sub_140340130 @ 0x140340130
 * Callers:
 *     sub_1402459E8 @ 0x1402459E8 (sub_1402459E8.c)
 *     IoSynchronousPageWrite @ 0x140248520 (IoSynchronousPageWrite.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_1403CF888 @ 0x1403CF888 (sub_1403CF888.c)
 * Callees:
 *     sub_14020C178 @ 0x14020C178 (sub_14020C178.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 *     sub_140374EA8 @ 0x140374EA8 (sub_140374EA8.c)
 *     sub_140556050 @ 0x140556050 (sub_140556050.c)
 *     sub_1405562E8 @ 0x1405562E8 (sub_1405562E8.c)
 */

NTSTATUS __fastcall sub_140340130(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // r8d
  __int64 v16; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8474u);
    __addgsdword(0x8478u, (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  v14 = sub_1402AACA0((__int64)RelatedDeviceObject, v13, 0LL);
  if ( !v14 )
  {
    if ( (unsigned int)sub_140374EA8(a1) )
    {
      _InterlockedIncrement(&dword_140C474F0);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      v21 = sub_1405562E8(v20, v19, 1LL);
    }
    else
    {
      _InterlockedIncrement(&dword_140C474F4);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      v21 = sub_140556050(RelatedDeviceObject, v19, 0LL);
    }
    v14 = v21;
    if ( !v21 )
      return -1073741670;
  }
  *(_BYTE *)(v14 + 71) |= 0x20u;
  *(_QWORD *)(v14 + 8) = a2;
  *(_DWORD *)(v14 + 16) = 67;
  v15 = sub_14033D760((__int64)KeGetCurrentThread());
  if ( v15 < 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0
      || *((_BYTE *)CurrentThread + 562) == 1
      || (*((_BYTE *)KeGetCurrentThread() + 1384) & 0x40) != 0
      || *((_QWORD *)KeGetCurrentThread() + 162) == 2LL )
    {
      ++dword_140C46D0C;
    }
    else
    {
      ++dword_140C46D10;
      v15 = 2;
    }
  }
  *(_QWORD *)(v14 + 72) = a7;
  *(_BYTE *)(v14 + 64) = 0;
  *(_QWORD *)(v14 + 80) = a4;
  *(_DWORD *)(v14 + 16) = ((v15 << 17) + 0x20000) | 0x43;
  *(_QWORD *)(v14 + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(v14 + 192) = a1;
  *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 4;
  *(_DWORD *)(v16 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v16 - 48) = *a3;
  *(_BYTE *)(v16 - 70) |= a5;
  *(_QWORD *)(v16 - 24) = a1;
  if ( a6 )
    sub_14020C178(v14, *(_QWORD *)(a6 + 24), *(_QWORD *)(v14 + 152), 0);
  else
    sub_1403437A0(v14, *(_QWORD *)(v14 + 152));
  sub_1402AE1B0(v14);
  return IofCallDriver(RelatedDeviceObject, (PIRP)v14);
}
