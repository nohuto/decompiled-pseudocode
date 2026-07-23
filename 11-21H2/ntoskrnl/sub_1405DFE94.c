/*
 * XREFs of sub_1405DFE94 @ 0x1405DFE94
 * Callers:
 *     sub_140835590 @ 0x140835590 (sub_140835590.c)
 *     sub_1409AB6B0 @ 0x1409AB6B0 (sub_1409AB6B0.c)
 * Callees:
 *     sub_1403DB3E0 @ 0x1403DB3E0 (sub_1403DB3E0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void sub_1405DFE94()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  int ImageFileKeyOption; // eax
  _DWORD *v3; // rcx
  PIO_APC_ROUTINE v4; // r8
  HANDLE v5; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( ::KeyHandle )
  {
    KeyHandle = ::KeyHandle;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38670;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x11u, &ObjectAttributes) < 0 )
      return;
  }
  v0 = &off_140D054B0;
  v1 = 4LL;
  do
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
    v3 = *(_DWORD **)v0;
    if ( ImageFileKeyOption >= 0 )
    {
      if ( !*v3 )
        *v3 = 1;
    }
    else
    {
      *v3 = v0[4];
    }
    v0 += 6;
    --v1;
  }
  while ( v1 );
  if ( qword_140D06BA8 )
  {
    sub_1403DB3E0(0);
  }
  else
  {
    qword_140D06BA8 = (PIO_APC_ROUTINE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73736644u);
    if ( !qword_140D06BA8 )
    {
      ZwClose(KeyHandle);
      return;
    }
    ::KeyHandle = KeyHandle;
  }
  v4 = qword_140D06BA8;
  v5 = ::KeyHandle;
  *((_QWORD *)qword_140D06BA8 + 2) = sub_1409AB6B0;
  *((_QWORD *)v4 + 3) = 0LL;
  *(_QWORD *)v4 = 0LL;
  if ( ZwNotifyChangeKey(v5, 0LL, v4, (PVOID)1, (PIO_STATUS_BLOCK)v4 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
  {
    ZwClose(::KeyHandle);
    ::KeyHandle = 0LL;
    ExFreePoolWithTag(qword_140D06BA8, 0x73736644u);
    qword_140D06BA8 = 0LL;
  }
}
