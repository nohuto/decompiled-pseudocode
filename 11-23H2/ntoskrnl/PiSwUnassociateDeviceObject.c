/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x140967DF4
 * Callers:
 *     PiSwDestroyDeviceObject @ 0x1409673AC (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x1409678D0 (PiSwProcessRemove.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x14081A894 (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x140967D84 (PiSwRemovePdoAssociation.c)
 */

void __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  __int64 *v1; // rdi
  void *v2; // rbx

  v1 = *(__int64 **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
}
