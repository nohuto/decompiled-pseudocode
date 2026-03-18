/*
 * XREFs of UsbhGetTopOfBusStack @ 0x1C002CD18
 * Callers:
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C0002650 (UsbhReferenceListAdd.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0004A70 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

__int64 __fastcall UsbhGetTopOfBusStack(__int64 a1)
{
  volatile __int64 *v2; // rax
  volatile __int64 *v3; // rdi
  __int64 v4; // r9
  NTSTATUS v5; // esi
  _UNICODE_STRING Object; // [rsp+58h] [rbp+28h] BYREF

  Object.Buffer = 0LL;
  *(_QWORD *)&Object.Length = 0LL;
  v2 = (volatile __int64 *)FdoExt(a1);
  v3 = v2;
  if ( (v2[320] & 1) != 0 )
  {
    *(_QWORD *)&Object.Length = *((_QWORD *)v2 + 151);
    UsbhReferenceListAdd(a1, *(__int64 *)&Object.Length, 1918062420);
    ObfReferenceObject(*(PVOID *)&Object.Length);
    v4 = _InterlockedExchange64(v3 + 152, *(__int64 *)&Object.Length);
    Log(a1, 8, 1920091215, v4, *(__int64 *)&Object.Length);
    v5 = 0;
  }
  else
  {
    v5 = UsbhSyncSendInternalIoctl(a1, 0x22000Fu, (unsigned __int64)&Object.Buffer, &Object);
    if ( v5 >= 0 )
    {
      UsbhReferenceListAdd(a1, *(__int64 *)&Object.Length, 1918062420);
      _InterlockedExchange64(v3 + 152, *(__int64 *)&Object.Length);
      ObfDereferenceObject(Object.Buffer);
    }
  }
  Log(a1, 8, 1733313615, v5, *(__int64 *)&Object.Length);
  return (unsigned int)v5;
}
