/*
 * XREFs of PiDrvDbUnloadHive @ 0x14086745C
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x140811C48 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408671C0 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     ZwUnloadKey2 @ 0x14041EBF0 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x14041EC10 (ZwUnloadKeyEx.c)
 */

NTSTATUS __fastcall PiDrvDbUnloadHive(UNICODE_STRING *a1, void *a2)
{
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  v3.ObjectName = a1;
  v3.RootDirectory = 0LL;
  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  if ( a2 )
    return ZwUnloadKeyEx(&v3, a2);
  else
    return ZwUnloadKey2(&v3, 0);
}
