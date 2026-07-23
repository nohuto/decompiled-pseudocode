/*
 * XREFs of sub_1406C2D34 @ 0x1406C2D34
 * Callers:
 *     sub_1406C2FDC @ 0x1406C2FDC (sub_1406C2FDC.c)
 *     RtlOpenImageFileOptionsKey @ 0x1406DD890 (RtlOpenImageFileOptionsKey.c)
 *     sub_1409B5C20 @ 0x1409B5C20 (sub_1409B5C20.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_1406C2E68 @ 0x1406C2E68 (sub_1406C2E68.c)
 *     sub_1406C2EE8 @ 0x1406C2EE8 (sub_1406C2EE8.c)
 */

__int64 __fastcall sub_1406C2D34(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  unsigned int v4; // r8d
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned int v9; // r8d
  bool v10; // r15
  __int64 result; // rax
  HANDLE v12; // r14
  ULONG v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  NTSTATUS v16; // ebx
  __int128 i; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  Handle = 0LL;
  *a4 = 0LL;
  v4 = *a1;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v7 = v4;
  *(&ObjectAttributes.Length + 1) = 0;
  v8 = *((_QWORD *)a1 + 1) + v4;
  for ( i = 0LL; v7; v7 -= 2 )
  {
    if ( *(_WORD *)(v8 - 2) == 92 )
      break;
    v8 -= 2LL;
  }
  v9 = v4 - v7;
  *((_QWORD *)&i + 1) = v8;
  LOWORD(i) = v9;
  if ( (unsigned __int16)v9 != v9 )
    return 3221225507LL;
  v10 = dword_140D01438 != 0;
  result = sub_1406C2E68(&Handle);
  if ( (int)result >= 0 )
  {
    v12 = Handle;
    v13 = 1600;
    v14 = *((_BYTE *)KeGetCurrentThread() + 562) == 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    if ( !v14 )
      v13 = 576;
    ObjectAttributes.Attributes = v13;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&i;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( v10 )
      ZwClose(v12);
    if ( v16 >= 0 )
    {
      Handle = KeyHandle;
      v16 = sub_1406C2EE8(&Handle, v15, a1);
      if ( v16 < 0 )
      {
        if ( Handle )
          ZwClose(Handle);
      }
      else
      {
        *a4 = Handle;
      }
    }
    return (unsigned int)v16;
  }
  return result;
}
