/*
 * XREFs of sub_14085EA64 @ 0x14085EA64
 * Callers:
 *     sub_14085E9A0 @ 0x14085E9A0 (sub_14085E9A0.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall sub_14085EA64(void **a1, KPROCESSOR_MODE AccessMode, _QWORD *a3)
{
  void *v3; // rcx
  NTSTATUS v6; // ebx
  HANDLE v7; // rcx
  HANDLE v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v9 = 0LL;
  v6 = ObOpenObjectByPointer(v3, 0, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v9);
  if ( v6 < 0 )
  {
    v7 = v9;
  }
  else
  {
    v7 = 0LL;
    *a3 = v9;
    v6 = 0;
    v9 = 0LL;
  }
  if ( v7 )
    ObCloseHandle(v7, AccessMode);
  return (unsigned int)v6;
}
