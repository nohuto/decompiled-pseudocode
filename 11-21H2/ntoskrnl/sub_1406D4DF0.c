/*
 * XREFs of sub_1406D4DF0 @ 0x1406D4DF0
 * Callers:
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 *     sub_1409B07D4 @ 0x1409B07D4 (sub_1409B07D4.c)
 * Callees:
 *     sub_14024F74C @ 0x14024F74C (sub_14024F74C.c)
 *     sub_14024F7C8 @ 0x14024F7C8 (sub_14024F7C8.c)
 *     sub_14024F90C @ 0x14024F90C (sub_14024F90C.c)
 *     sub_14024FB60 @ 0x14024FB60 (sub_14024FB60.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     sub_1406D4D48 @ 0x1406D4D48 (sub_1406D4D48.c)
 *     sub_1406D4EFC @ 0x1406D4EFC (sub_1406D4EFC.c)
 */

__int64 __fastcall sub_1406D4DF0(__int64 a1, ULONG_PTR a2, __int64 a3, _BYTE *a4)
{
  int v4; // eax
  _RTL_BALANCED_NODE *v5; // rbx
  const WCHAR *v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // rcx
  _RTL_BALANCED_NODE *v15; // rax
  __int64 v16; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  __int64 v20; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = 0;
  v16 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a4 )
    *a4 = 0;
  v10 = *(const WCHAR **)(a3 + 24);
  if ( v10 )
  {
    RtlInitUnicodeString(&DestinationString, v10);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwCreateFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( v12 < 0 )
      goto LABEL_11;
    v15 = (_RTL_BALANCED_NODE *)sub_1406D4D48(a2, *(_QWORD *)(a2 + 1544));
    v5 = v15;
    if ( !v15 )
    {
      v12 = -1073741670;
      goto LABEL_11;
    }
    sub_14024F7C8(v15);
    v4 = (int)Handle;
    v11 = (__int64)v5;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 1544);
  }
  v12 = sub_14024F90C(a3, v4, v11, (__int64)&v20, (__int64)&v16);
  if ( v12 < 0 )
  {
    if ( v5 )
    {
      sub_14024F74C(v5);
      sub_140366814((__int64)v5);
    }
    v13 = v20;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      sub_1406D4EFC(a1);
      *a4 = 1;
    }
    v13 = 0LL;
    *(_QWORD *)(a1 + 40) = v20;
    *(_QWORD *)(a1 + 24) = v16;
    *(_QWORD *)(a1 + 48) = v5;
    v12 = 0;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
  }
  if ( v13 )
    sub_14024FB60(v13);
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
