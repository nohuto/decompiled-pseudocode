/*
 * XREFs of sub_140B54800 @ 0x140B54800
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     IoGetConfigurationInformation @ 0x140811D00 (IoGetConfigurationInformation.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140837640 (RtlCreateUnicodeStringFromAsciiz.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B545E4 @ 0x140B545E4 (sub_140B545E4.c)
 *     sub_140B54680 @ 0x140B54680 (sub_140B54680.c)
 *     sub_140B54FF8 @ 0x140B54FF8 (sub_140B54FF8.c)
 */

__int64 __fastcall sub_140B54800(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  _QWORD *v3; // r14
  const void *v4; // r15
  _DWORD *v5; // r12
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  HANDLE v8; // rcx
  int *v9; // rbx
  unsigned int v10; // esi
  ULONG DiskCount; // r13d
  ULONG_PTR v12; // rax
  ULONG OutputBufferLength; // edi
  int *OutputBuffer; // rax
  NTSTATUS v15; // eax
  int v16; // ecx
  bool v17; // zf
  unsigned int v18; // edi
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR SourceString[64]; // [rsp+B0h] [rbp-50h] BYREF

  v20 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v3 = *(_QWORD **)a2;
  v4 = *(const void **)(a2 + 8);
  if ( !*(_QWORD *)a2 )
    return 3221225485LL;
  if ( !v4 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a2 + 16) )
    return 3221225485LL;
  v5 = *(_DWORD **)(a2 + 24);
  if ( !v5 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(PCSTR *)(a1 + 184)) )
    return 3221225473LL;
  ConfigurationInformation = IoGetConfigurationInformation();
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  DiskCount = ConfigurationInformation->DiskCount;
  Handle = 0LL;
  if ( DiskCount )
  {
    do
    {
      if ( (int)sub_1402E1280(SourceString, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v10) >= 0
        && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( Handle )
        {
          ZwClose(Handle);
          Handle = 0LL;
        }
        if ( ZwOpenFile(&Handle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) >= 0 )
        {
          v12 = sub_140B54FF8(Handle);
          if ( v12 )
          {
            sub_140348B40(v12);
          }
          else
          {
            if ( v9 )
              sub_140348B40((ULONG_PTR)v9);
            for ( OutputBufferLength = 4096; ; OutputBufferLength *= 2 )
            {
              OutputBuffer = (int *)ExAllocatePool2(64LL, OutputBufferLength, 0x42646856u);
              v9 = OutputBuffer;
              if ( !OutputBuffer )
                break;
              v15 = ZwDeviceIoControlFile(
                      Handle,
                      0LL,
                      0LL,
                      0LL,
                      &IoStatusBlock,
                      0x70050u,
                      0LL,
                      0,
                      OutputBuffer,
                      OutputBufferLength);
              if ( v15 != -1073741789 )
              {
                if ( v15 >= 0 )
                {
                  v16 = *(_DWORD *)v3;
                  if ( *v9 == *(_DWORD *)v3 )
                  {
                    if ( v16 )
                    {
                      if ( v16 != 1 )
                        break;
                      v17 = RtlCompareMemory(v9 + 2, v4, 0x10uLL) == 16;
                    }
                    else
                    {
                      v17 = RtlCompareMemory(v9 + 2, v4, 4uLL) == 4;
                    }
                    if ( v17 && (int)sub_140B545E4(v9, v3, &v20) >= 0 )
                    {
                      v18 = sub_140B54680((__int64)Handle, v10, v20, v5);
                      goto LABEL_35;
                    }
                  }
                }
                break;
              }
              sub_140348B40((ULONG_PTR)v9);
            }
          }
        }
      }
      ++v10;
    }
    while ( v10 < DiskCount );
    v8 = Handle;
  }
  v18 = -1073741810;
  if ( v9 )
  {
LABEL_35:
    sub_140348B40((ULONG_PTR)v9);
    v8 = Handle;
  }
  if ( v8 )
    ZwClose(v8);
  return v18;
}
