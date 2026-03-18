/*
 * XREFs of IoCreateStreamFileObjectLite @ 0x140767C90
 * Callers:
 *     RawMountVolume @ 0x14079236C (RawMountVolume.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x140767CE0 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectLite(PFILE_OBJECT FileObject, PDEVICE_OBJECT DeviceObject)
{
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF
  struct _FILE_OBJECT *v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  LODWORD(v3) = 196624;
  IoCreateStreamFileObjectEx2(&v3, FileObject, DeviceObject, &v4, 0LL);
  return v4;
}
