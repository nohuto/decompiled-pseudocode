/*
 * XREFs of IoCreateStreamFileObjectLite @ 0x14074CD20
 * Callers:
 *     sub_14074C2EC @ 0x14074C2EC (sub_14074C2EC.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
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
