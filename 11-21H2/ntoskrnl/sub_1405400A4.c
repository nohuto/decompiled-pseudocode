/*
 * XREFs of sub_1405400A4 @ 0x1405400A4
 * Callers:
 *     sub_140540028 @ 0x140540028 (sub_140540028.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_140928158 @ 0x140928158 (sub_140928158.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140881A9A @ 0x140881A9A (sub_140881A9A.c)
 *     sub_1409283F4 @ 0x1409283F4 (sub_1409283F4.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1405400A4(PVOID Object, PVOID a2, void *a3, unsigned int a4, unsigned int a5, PRKEVENT a6)
{
  NTSTATUS v10; // eax
  HANDLE v11; // r8
  NTSTATUS result; // eax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v16[34]; // [rsp+80h] [rbp-80h] BYREF

  IoStatusBlock = 0LL;
  *(_OWORD *)P = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[5]) = 5;
  v16[7] = a3;
  v16[8] = (HANDLE)__PAIR64__(a5, a4);
  if ( (int)sub_140881A9A(a3, P) >= 0 )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenFile(&v16[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
    v11 = v16[6];
    if ( v10 < 0 )
      v11 = 0LL;
    v16[6] = v11;
    ExFreePoolWithTag(P[1], 0);
  }
  if ( a6 )
  {
    result = sub_1409283F4(Object, a2, a6);
    if ( result >= 0 )
      return result;
  }
  else
  {
    result = sub_14092A070(Object);
  }
  if ( v16[6] )
    return ObCloseHandle(v16[6], 0);
  return result;
}
