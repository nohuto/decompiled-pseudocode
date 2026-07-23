/*
 * XREFs of sub_1406B4800 @ 0x1406B4800
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 */

__int64 __fastcall sub_1406B4800(
        struct _FILE_OBJECT *a1,
        POBJECT_TYPE *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax

  if ( a2 != IoFileObjectType || !a8 || *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 224 )
    return 3221225508LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  *(_QWORD *)(a8 + 40) = a1;
  return sub_14072B8B0((ULONG_PTR)RelatedDeviceObject, a5, a6, a7, a8, a9, a10, a11);
}
