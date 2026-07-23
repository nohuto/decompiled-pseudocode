/*
 * XREFs of sub_14093FC6C @ 0x14093FC6C
 * Callers:
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AA860 @ 0x1402AA860 (sub_1402AA860.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14093FC6C(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  IRP *v8; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v10; // rax
  struct _KEVENT *v11; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h]

  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = 0LL;
  v16 = 0;
  v15 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = Object->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v16 = 0;
      v15 = 0LL;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      LOBYTE(v6) = RelatedDeviceObject->StackSize;
      v7 = sub_1402AA860((__int64)RelatedDeviceObject, v6);
      v8 = (IRP *)v7;
      *(_QWORD *)(v7 + 192) = Object;
      *(_QWORD *)(v7 + 152) = KeGetCurrentThread();
      *(_BYTE *)(v7 + 64) = 0;
      if ( v4 )
      {
        p_Event = 0LL;
      }
      else
      {
        *(_DWORD *)(v7 + 16) = 4;
        p_Event = &Event;
      }
      *(_QWORD *)(v7 + 80) = p_Event;
      *(_QWORD *)(v7 + 72) = &v14;
      v10 = *(_QWORD *)(v7 + 184);
      v8->Overlay.AllocationSize.QuadPart = 0LL;
      *(_BYTE *)(v10 - 72) = 6;
      *(_QWORD *)(v10 - 24) = Object;
      *(_DWORD *)(v10 - 64) = 20;
      *(_DWORD *)(v10 - 56) = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)&v15;
      ObfReferenceObject(Object);
      sub_1402AE1B0((__int64)v8);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        v11 = &Object->Event;
        if ( !v4 )
          v11 = &Event;
        KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
      }
      result = (unsigned int)v14;
      if ( (_DWORD)v14 != -1073741670 && (_DWORD)v14 != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
