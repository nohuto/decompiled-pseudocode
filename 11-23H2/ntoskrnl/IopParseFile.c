/*
 * XREFs of IopParseFile @ 0x1407BBF10
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 */

__int64 __fastcall IopParseFile(
        struct _FILE_OBJECT *a1,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PFILE_OBJECT *a11)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax

  if ( a2 != IoFileObjectType || !a8 || *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 224 )
    return 3221225508LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  *(_QWORD *)(a8 + 40) = a1;
  return IopParseDevice(RelatedDeviceObject, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
