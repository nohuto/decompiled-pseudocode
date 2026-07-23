/*
 * XREFs of sub_140658DCC @ 0x140658DCC
 * Callers:
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 * Callees:
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_1404183E0 @ 0x1404183E0 (sub_1404183E0.c)
 *     sub_1404186A0 @ 0x1404186A0 (sub_1404186A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

__int64 __fastcall sub_140658DCC(
        _QWORD *Object,
        void *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9,
        char a10)
{
  _OWORD *v11; // r12
  __int64 result; // rax
  PFAST_IO_WRITE FastIoWrite; // r15
  __int64 v14; // r14
  char v15; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v17; // rcx
  PRKEVENT v18; // rcx
  __int64 v19; // [rsp+60h] [rbp-98h] BYREF
  char v20[2]; // [rsp+68h] [rbp-90h]
  char v21; // [rsp+6Ah] [rbp-8Eh]
  int v22; // [rsp+6Bh] [rbp-8Dh]
  char v23; // [rsp+6Fh] [rbp-89h]
  _QWORD *v24; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-80h]
  PRKEVENT Event; // [rsp+80h] [rbp-78h]
  __int64 v27; // [rsp+88h] [rbp-70h]
  __int64 v28; // [rsp+90h] [rbp-68h]
  __int64 v29; // [rsp+98h] [rbp-60h]
  __int64 v30; // [rsp+A0h] [rbp-58h]
  int v31; // [rsp+A8h] [rbp-50h]
  int v32; // [rsp+ACh] [rbp-4Ch]
  __int64 v33; // [rsp+B0h] [rbp-48h] BYREF
  int v34; // [rsp+B8h] [rbp-40h]
  int v35; // [rsp+BCh] [rbp-3Ch]
  __int64 v36; // [rsp+C0h] [rbp-38h]
  PIRP Irp; // [rsp+110h] [rbp+18h] BYREF

  v22 = 0;
  v23 = 0;
  v32 = 0;
  Irp = 0LL;
  v19 = 0LL;
  *(_WORD *)v20 = 0;
  v21 = 1;
  v24 = Object;
  DeviceObject = 0LL;
  Event = 0LL;
  v27 = a3;
  v28 = a4;
  v11 = a5;
  v29 = (__int64)a5;
  v30 = a6;
  v31 = a7;
  v33 = 0LL;
  v34 = 0;
  v35 = 0;
  v36 = 0LL;
  result = sub_1404186A0((__int64)&v19, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !v20[1] || !Object[6] )
      goto LABEL_16;
    FastIoWrite = DeviceObject->DriverObject->FastIoDispatch->FastIoWrite;
    if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(DeviceObject->DriverObject) )
      v14 = sub_140A8A9AC();
    else
      v14 = 0LL;
    v15 = sub_14042A5E0(Object, &v33);
    if ( v14 )
      sub_140A8A8D4(v14, FastIoWrite);
    if ( v15 )
    {
      CurrentThread = KeGetCurrentThread();
      ++*((_QWORD *)CurrentThread + 113);
      __incgsdword(0x2EE0u);
      v17 = KeGetCurrentThread();
      *((_QWORD *)v17 + 116) = *((_QWORD *)v17 + 116);
      __addgsqword(0x2EF0u, 0LL);
      *v11 = 0LL;
      v18 = Event;
      if ( Event )
      {
        if ( (Object[10] & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v18 = Event;
        }
        ObfDereferenceObject(v18);
      }
      sub_1402AD350((volatile __int32 *)Object);
      ObfDereferenceObject(Object);
      return 0LL;
    }
    else
    {
LABEL_16:
      result = sub_1404183E0((__int64)&v19, &Irp);
      if ( (int)result >= 0 )
        return sub_140731680(DeviceObject, Irp, v20[0], v20[1], 1);
    }
  }
  return result;
}
