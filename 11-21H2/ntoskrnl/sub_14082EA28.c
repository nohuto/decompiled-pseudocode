/*
 * XREFs of sub_14082EA28 @ 0x14082EA28
 * Callers:
 *     sub_140B0E670 @ 0x140B0E670 (sub_140B0E670.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateEvent @ 0x14041C060 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x14041E7A0 (ZwResetEvent.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14082EC0C @ 0x14082EC0C (sub_14082EC0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14082EA28(__int64 a1, void *a2)
{
  _DWORD *Pool2; // rdi
  int Status; // ebx
  __int64 v6; // rcx
  unsigned int v7; // ecx
  int v8; // eax
  bool v9; // zf
  int v10; // ecx
  unsigned int v11; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v12[3]; // [rsp+54h] [rbp-45h] BYREF
  int v13; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+64h] [rbp-35h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  int v16; // [rsp+70h] [rbp-29h] BYREF
  ULONG OutputBuffer[2]; // [rsp+78h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1h] BYREF
  __int64 InputBuffer; // [rsp+C8h] [rbp+2Fh] BYREF
  int v22; // [rsp+D0h] [rbp+37h]

  *(_QWORD *)OutputBuffer = 0LL;
  v11 = 0;
  Pool2 = 0LL;
  InputBuffer = 0LL;
  v22 = 0;
  v13 = 0;
  v16 = 0;
  *(_QWORD *)&v12[1] = 0LL;
  v14 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a2 )
    return (unsigned int)-1073741811;
  Status = sub_14082EC0C(a1, 131097LL, &Handle);
  if ( Status >= 0 )
  {
    v12[0] = 4;
    Status = sub_14077FC64(Handle, L"BootDriverFlags", &v13, &v16, v12);
    if ( Status == -1073741772 )
    {
      v22 = 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Status = ZwCreateEvent((PHANDLE)&v12[1], 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( Status >= 0 )
      {
        Status = ZwDeviceIoControlFile(
                   a2,
                   *(HANDLE *)&v12[1],
                   0LL,
                   0LL,
                   &IoStatusBlock,
                   0x2D1400u,
                   &InputBuffer,
                   0xCu,
                   OutputBuffer,
                   8u);
        if ( Status == 259 )
        {
          Status = ZwWaitForSingleObject(*(HANDLE *)&v12[1], 0, 0LL);
          if ( Status < 0 )
            goto LABEL_4;
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, OutputBuffer[1], 1852403792LL);
          if ( !Pool2 )
          {
            Status = -1073741670;
            goto LABEL_4;
          }
          ZwResetEvent(*(HANDLE *)&v12[1], 0LL);
          Status = ZwDeviceIoControlFile(
                     a2,
                     *(HANDLE *)&v12[1],
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     0x2D1400u,
                     &InputBuffer,
                     0xCu,
                     Pool2,
                     OutputBuffer[1]);
          if ( Status == 259 )
          {
            Status = ZwWaitForSingleObject(*(HANDLE *)&v12[1], 0, 0LL);
            if ( Status < 0 )
              goto LABEL_4;
            Status = IoStatusBlock.Status;
          }
          if ( Status < 0 )
            goto LABEL_4;
          v6 = 0LL;
          if ( *(_QWORD *)&qword_140D00AC0 )
            v6 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
          Status = sub_14077FFEC(
                     v6,
                     2147483650LL,
                     (__int64)L"System\\CurrentControlSet\\Control",
                     0,
                     1u,
                     (__int64)&KeyHandle);
          if ( Status < 0 )
            goto LABEL_4;
          v12[0] = 4;
          Status = sub_14077FC64(KeyHandle, L"BootDriverFlags", &v13, &v14, v12);
          if ( Status < 0 )
            goto LABEL_4;
          v7 = v14 & 0xFFFFFFE3;
          v11 = v14 & 0xFFFFFFE3;
          v8 = Pool2[7];
          if ( v8 > 12 )
          {
            if ( v8 == 13 )
            {
              v10 = v7 | 0x1C;
              goto LABEL_46;
            }
            if ( v8 > 16 )
            {
              if ( v8 == 17 || v8 == 18 )
                goto LABEL_47;
              v9 = v8 == 19;
LABEL_43:
              if ( !v9 )
                goto LABEL_44;
LABEL_47:
              Status = sub_1406D5A30(Handle, L"BootDriverFlags", 4u, &v11, 4u);
              goto LABEL_4;
            }
          }
          else
          {
            if ( v8 == 12 )
            {
              v10 = v7 | 8;
              goto LABEL_46;
            }
            if ( v8 > 0 )
            {
              if ( v8 <= 6 )
                goto LABEL_47;
              if ( v8 != 7 )
              {
                if ( v8 <= 10 )
                  goto LABEL_47;
                v9 = v8 == 11;
                goto LABEL_43;
              }
              v10 = v7 | 0x14;
LABEL_46:
              v11 = v10;
              goto LABEL_47;
            }
          }
LABEL_44:
          v11 = v14;
          goto LABEL_47;
        }
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( *(_QWORD *)&v12[1] )
    ZwClose(*(HANDLE *)&v12[1]);
  return (unsigned int)Status;
}
