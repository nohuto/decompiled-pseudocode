/*
 * XREFs of sub_140B28EB0 @ 0x140B28EB0
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C2A50 @ 0x1406C2A50 (sub_1406C2A50.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

char sub_140B28EB0()
{
  int v0; // ebx
  __int64 v1; // rax
  __int64 *v2; // rdi
  PCALLBACK_OBJECT *v3; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v7[16]; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+100h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  qword_140C15890 = 0LL;
  qword_140C15888 = (__int64)&qword_140C15880;
  qword_140C15880 = (__int64)&qword_140C15880;
  RtlInitUnicodeString(&DestinationString, L"Callback");
  memset(v7, 0, 0x78uLL);
  BYTE2(v7[0]) |= 4u;
  LOWORD(v7[0]) = 120;
  LODWORD(v7[1]) = 256;
  v7[9] = sub_1406E0DD0;
  HIDWORD(v7[4]) = 512;
  *(_OWORD *)((char *)&v7[1] + 4) = xmmword_140B579B0;
  HIDWORD(v7[3]) = 2031617;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v7, 0LL, (__int64)&qword_140D06D70) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CCB0;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( (int)sub_1406C2A50((__int64)&Handle) >= 0 )
    {
      NtClose(Handle);
      stru_140C15860.Header.WaitListHead.Blink = &stru_140C15860.Header.WaitListHead;
      v0 = 0;
      stru_140C15860.Header.WaitListHead.Flink = &stru_140C15860.Header.WaitListHead;
      LOWORD(stru_140C15860.Header.Lock) = 0;
      stru_140C15860.Header.Size = 6;
      stru_140C15860.Header.SignalState = 0;
      if ( !&qword_140C158B8 )
        return 1;
      v1 = 0LL;
      v2 = off_140A39A30;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)off_140A39A30[v1 + 1]);
        v3 = (PCALLBACK_OBJECT *)*v2;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ExCreateCallback(v3, &ObjectAttributes, 1u, 1u) < 0 )
          break;
        v1 = 2LL * (unsigned int)++v0;
        v2 = &off_140A39A30[v1];
        if ( !off_140A39A30[v1] )
          return 1;
      }
    }
  }
  return 0;
}
