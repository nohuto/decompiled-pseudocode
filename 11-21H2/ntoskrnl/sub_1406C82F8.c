/*
 * XREFs of sub_1406C82F8 @ 0x1406C82F8
 * Callers:
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 * Callees:
 *     sub_140248854 @ 0x140248854 (sub_140248854.c)
 *     sub_140248914 @ 0x140248914 (sub_140248914.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     sub_1403A5AF0 @ 0x1403A5AF0 (sub_1403A5AF0.c)
 *     sub_1406C8478 @ 0x1406C8478 (sub_1406C8478.c)
 *     sub_1406C8550 @ 0x1406C8550 (sub_1406C8550.c)
 *     sub_14075EE80 @ 0x14075EE80 (sub_14075EE80.c)
 */

__int64 __fastcall sub_1406C82F8(_SLIST_ENTRY *Object, int a2)
{
  int v2; // ebx
  bool v3; // bp
  __int64 v5; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  __int64 v7; // rcx
  NTSTATUS v8; // edi
  PSLIST_ENTRY v9; // rax

  v2 = 0;
  v3 = 0;
  if ( a2 < 0 )
    v2 = 0x10000000;
  if ( (a2 & 0x10000) != 0 )
    v2 |= 16 * (a2 & 0xF00000 | 0x4000000);
  KeWaitForSingleObject(&::Object, Executive, 0, 0, 0LL);
  v5 = sub_140248854((__int64)Object);
  if ( v5 )
  {
    KeReleaseMutex(&::Object, 0);
    v8 = 0x40000000;
    sub_1402E0164(v5);
  }
  else
  {
    if ( (v2 & 0x10000000) != 0
      || (AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)Object),
          LOBYTE(v7) = AttachedDeviceReference->StackSize + 1,
          sub_1406C8550(v7),
          ObfDereferenceObject(AttachedDeviceReference),
          v8 = ObReferenceObjectByPointer(Object, 0, 0LL, 0),
          v8 >= 0) )
    {
      v9 = sub_140248914(Object, v2);
      v5 = (__int64)v9;
      if ( v9 )
      {
        _InterlockedAdd((volatile signed __int32 *)&v9[3], 1u);
        KeReleaseMutex(&::Object, 0);
        if ( (v2 & 0x10000000) != 0 )
        {
          v8 = sub_14075EE80(v5, 0LL);
          if ( v8 < 0 )
            v3 = 1;
        }
        else
        {
          v8 = sub_1406C8478(0LL, v5);
          v3 = v8 < 0;
        }
        sub_1402E0164(v5);
      }
      else
      {
        KeReleaseMutex(&::Object, 0);
        v8 = -1073741670;
      }
    }
    else
    {
      KeReleaseMutex(&::Object, 0);
    }
    if ( v3 )
      sub_1403A5AF0(v5);
  }
  return (unsigned int)v8;
}
