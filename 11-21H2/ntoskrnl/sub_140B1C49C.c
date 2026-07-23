/*
 * XREFs of sub_140B1C49C @ 0x140B1C49C
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     sub_1402D87F0 @ 0x1402D87F0 (sub_1402D87F0.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     RtlIsStateSeparationEnabled @ 0x140699680 (RtlIsStateSeparationEnabled.c)
 *     sub_140A5A4CC @ 0x140A5A4CC (sub_140A5A4CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1C6B0 @ 0x140B1C6B0 (sub_140B1C6B0.c)
 */

void __fastcall sub_140B1C49C(int a1)
{
  ULONG *PoolWithTag; // rbx
  WCHAR *v3; // rdi
  unsigned int v4; // r12d
  __int64 v5; // rcx
  unsigned int v6; // r15d
  PCWSTR *v7; // r14
  NTSTATUS ValueKey; // eax
  int v9; // eax
  PVOID v10; // rax
  __int64 v11; // rsi
  BOOLEAN IsStateSeparationEnabled; // al
  __int64 v13; // rdx
  WCHAR *v14; // rcx
  WCHAR v15; // ax
  WCHAR v16; // ax
  WCHAR *v17; // rax
  ULONG DataSize[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE DestinationString[3]; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v23[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v25; // [rsp+F8h] [rbp-10h]
  int v26; // [rsp+FCh] [rbp-Ch]
  int v27; // [rsp+100h] [rbp-8h]
  int v28; // [rsp+104h] [rbp-4h]
  const wchar_t *v29; // [rsp+108h] [rbp+0h]
  const wchar_t *v30; // [rsp+110h] [rbp+8h]
  int v31; // [rsp+118h] [rbp+10h]
  int v32; // [rsp+11Ch] [rbp+14h]
  int v33; // [rsp+120h] [rbp+18h]
  int v34; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v35; // [rsp+128h] [rbp+20h]
  const wchar_t *v36; // [rsp+130h] [rbp+28h]

  v23[0] = -937207777;
  DataSize[0] = 0;
  KeyHandle = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  v24[0] = L"VsmIdkBlob";
  v23[1] = 1254716583;
  v24[1] = L"system32\\config\\VSMIDK";
  v23[2] = -1274918465;
  v29 = L"VsmHbkBlob";
  PoolWithTag = 0LL;
  v23[3] = 1271024649;
  v30 = L"system32\\config\\VSMHBK";
  v3 = 0LL;
  v25 = 1759588193;
  v35 = L"VsmLKeyBlob";
  v4 = 0;
  v26 = 1265287039;
  v36 = L"system32\\config\\VSMLKEY";
  IoStatusBlock = 0LL;
  v27 = 1264598702;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v28 = 1186665675;
  v31 = 646995484;
  v32 = 1215474106;
  v33 = -1787939400;
  v34 = -970048220;
  if ( (int)sub_140A5A4CC(&KeyHandle) < 0 )
    goto LABEL_13;
  v6 = 0;
  v7 = (PCWSTR *)v24;
  while ( 1 )
  {
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
    DataSize[0] = 0;
    if ( !a1 )
    {
      v9 = sub_140B1C6B0(v5, &v23[8 * v6], 0LL, 0LL, DataSize);
      if ( v9 == -1073741789 )
      {
        PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, DataSize[0], 0x64506142u);
        if ( PoolWithTag )
        {
LABEL_20:
          if ( (int)sub_140B1C6B0(v5, &v23[8 * v6], 0LL, PoolWithTag, DataSize) >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], *v7);
            ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&DestinationString[1], 0, 3u, PoolWithTag, DataSize[0]);
          }
          goto LABEL_8;
        }
      }
      else if ( v9 >= 0 )
      {
        goto LABEL_20;
      }
      goto LABEL_8;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], *v7);
    ValueKey = ZwQueryValueKey(
                 KeyHandle,
                 (PUNICODE_STRING)&DestinationString[1],
                 KeyValuePartialInformation,
                 0LL,
                 0,
                 DataSize);
    if ( ValueKey == -1073741789 )
      break;
    if ( ValueKey >= 0 )
      goto LABEL_23;
LABEL_8:
    ++v6;
    v7 += 4;
    if ( v6 >= 3 )
      goto LABEL_9;
  }
  PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, DataSize[0], 0x64506142u);
  if ( !PoolWithTag )
    goto LABEL_8;
LABEL_23:
  if ( ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&DestinationString[1],
         KeyValuePartialInformation,
         PoolWithTag,
         DataSize[0],
         DataSize) < 0 )
    goto LABEL_8;
  ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&DestinationString[1]);
  if ( v3 )
  {
    v3[v4] = 0;
LABEL_40:
    if ( (int)sub_1402D87F0(v3, 260LL, (__int64)v7[1]) >= 0 )
    {
      RtlInitUnicodeStringEx((PUNICODE_STRING)&DestinationString[1], v3);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(
             DestinationString,
             0x40100000u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             0,
             0,
             0x60u,
             0LL,
             0) >= 0 )
      {
        ZwWriteFile(DestinationString[0], 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag + 3, PoolWithTag[2], 0LL, 0LL);
        ZwClose(DestinationString[0]);
        DestinationString[0] = 0LL;
      }
    }
    goto LABEL_8;
  }
  v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x208uLL, 0x656E6F4Eu);
  v3 = (WCHAR *)v10;
  if ( v10 )
  {
    v11 = -(__int64)v10;
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v13 = 260LL;
    v14 = v3;
    if ( IsStateSeparationEnabled )
    {
      do
      {
        if ( v13 == -2147483386 )
          break;
        v15 = *(WCHAR *)((char *)v14 + (_QWORD)L"\\OSDataRoot\\Windows\\" + v11);
        if ( !v15 )
          break;
        *v14++ = v15;
        --v13;
      }
      while ( v13 );
      v4 = 20;
    }
    else
    {
      do
      {
        if ( v13 == -2147483386 )
          break;
        v16 = *(WCHAR *)((char *)v14 + (_QWORD)L"\\SystemRoot\\" + v11);
        if ( !v16 )
          break;
        *v14++ = v16;
        --v13;
      }
      while ( v13 );
      v4 = 12;
    }
    v17 = v14 - 1;
    if ( v13 )
      v17 = v14;
    *v17 = 0;
    if ( v13 )
      goto LABEL_40;
  }
LABEL_9:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
