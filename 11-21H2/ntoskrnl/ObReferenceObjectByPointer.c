/*
 * XREFs of ObReferenceObjectByPointer @ 0x1402E0270
 * Callers:
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_14071CAFC @ 0x14071CAFC (sub_14071CAFC.c)
 *     sub_14078362C @ 0x14078362C (sub_14078362C.c)
 *     sub_140784700 @ 0x140784700 (sub_140784700.c)
 *     sub_14078CD70 @ 0x14078CD70 (sub_14078CD70.c)
 *     sub_140796F10 @ 0x140796F10 (sub_140796F10.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 *     sub_140846BEC @ 0x140846BEC (sub_140846BEC.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 BugCheckParameter4; // rbx

  if ( !ObjectType )
  {
    if ( !AccessMode )
    {
      v4 = (volatile signed __int64 *)((char *)Object - 48);
      goto LABEL_3;
    }
    return -1073741788;
  }
  v4 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != *((_BYTE *)ObjectType + 40) )
    return -1073741788;
LABEL_3:
  if ( dword_140D05010 )
    sub_1405C5EC8((_DWORD)v4);
  BugCheckParameter4 = _InterlockedIncrement64(v4);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v4 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
