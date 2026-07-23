/*
 * XREFs of sub_14076185C @ 0x14076185C
 * Callers:
 *     sub_1407603D4 @ 0x1407603D4 (sub_1407603D4.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14096C4AC @ 0x14096C4AC (sub_14096C4AC.c)
 *     sub_140A6F300 @ 0x140A6F300 (sub_140A6F300.c)
 */

NTSTATUS __fastcall sub_14076185C(UNICODE_STRING *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rsi
  NTSTATUS result; // eax
  int v9; // r14d
  int v10; // eax
  int v11; // ebx
  int v12; // [rsp+40h] [rbp-39h]
  int v13; // [rsp+48h] [rbp-31h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+F8h] [rbp+7Fh] BYREF

  byte_140C4F4A8 = 1;
  v17 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *a4 = 0LL;
  v6 = a2;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  if ( a2 )
    goto LABEL_8;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (int)sub_140A6F300() >= 0 )
    DbgPrintEx(0x66u, 2u, "MmLoadSystemImage: Pulled %wZ from kd\n", a1);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( result >= 0 )
  {
    v6 = (__int64)FileHandle;
LABEL_8:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    v9 = (((a3 & 1) << 21) + 0x100000) | 0x400000;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a3 >= 0 )
      v9 = ((a3 & 1) << 21) + 0x100000;
    if ( (a3 & 1) != 0 )
      v10 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
    else
      v10 = -1;
    v11 = sub_1402D9E3C(
            &v17,
            a2,
            (int)&ObjectAttributes,
            (__int64)a4,
            16,
            v9,
            ((unsigned int)a3 >> 27) & 8,
            v6,
            v12,
            v13,
            v10,
            0,
            0);
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    if ( v11 < 0 )
    {
      sub_14096C4AC(a1, 0LL, 0LL, (unsigned int)v11);
      return v11;
    }
    else
    {
      *a4 = v17;
      return 0;
    }
  }
  return result;
}
