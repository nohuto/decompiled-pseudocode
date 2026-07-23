/*
 * XREFs of sub_1405AC580 @ 0x1405AC580
 * Callers:
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_14097CD04 @ 0x14097CD04 (sub_14097CD04.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_14028799C @ 0x14028799C (sub_14028799C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall sub_1405AC580(HANDLE Handle, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4, _QWORD *a5)
{
  _QWORD *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v10; // rax
  void *v11; // r8
  int v12; // r9d
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = a5;
  v14 = 0LL;
  Object = 0LL;
  *a5 = 0LL;
  if ( Handle == (HANDLE)-1LL )
    return 0;
  if ( ObReferenceObjectByHandleWithTag(Handle, a2, MmSectionObjectType, a3, 0x68506D4Du, &Object, 0LL) < 0 )
  {
    result = ObReferenceObjectByHandleWithTag(Handle, 8u, (POBJECT_TYPE)PsProcessType, a3, 0x68506D4Du, &v14, 0LL);
    if ( result >= 0 )
      *a4 = v14;
  }
  else
  {
    v10 = sub_140287970((__int64)Object);
    if ( sub_14028799C(v10) )
    {
      *v6 = v11;
      return v12;
    }
    else
    {
      ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
      return -1073741816;
    }
  }
  return result;
}
