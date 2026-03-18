/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x140967BF4
 * Callers:
 *     PiSwDestroyDeviceObject @ 0x1409671AC (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x1409676D0 (PiSwProcessRemove.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x14081A5C4 (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x140967B84 (PiSwRemovePdoAssociation.c)
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
