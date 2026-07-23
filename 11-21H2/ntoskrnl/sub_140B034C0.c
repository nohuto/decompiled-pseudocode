/*
 * XREFs of sub_140B034C0 @ 0x140B034C0
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlIsStateSeparationEnabled @ 0x140699680 (RtlIsStateSeparationEnabled.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     sub_14081BE48 @ 0x14081BE48 (sub_14081BE48.c)
 *     sub_140829740 @ 0x140829740 (sub_140829740.c)
 */

char __fastcall sub_140B034C0(int a1)
{
  _UNKNOWN **v1; // rax
  char v2; // bl
  __int64 v4; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  ULONG BufferLengthOut[4]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+A8h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+2D0h] [rbp+1C8h] BYREF

  v1 = &retaddr;
  memset(DestinationString, 0, sizeof(DestinationString));
  v2 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LOBYTE(v4) = 0;
  if ( !a1 )
  {
    dword_140C1F820 = 0;
    dword_140C1F760 = 0;
    dword_140C1F764 = 0;
    qword_140C1F730 = 0LL;
    memset(&unk_140C1F648, 0, 0xE8uLL);
    memset(&dword_140C1F780, 0, 0xA0uLL);
    LODWORD(dword_140C1F780) = 2;
    qword_140C1F810 = (__int64)&off_140C03A40;
    qword_140C1F7F0 = 0LL;
    word_140C1F7F8 = 0;
    dword_140C1F7FC = 0;
    byte_140C1F800 = 0;
    qword_140C1F804 = 0LL;
    dword_140C1F818 = 22;
    qword_140C1F640 = 0LL;
    LOBYTE(v1) = sub_140829740((__int64)&unk_140C1F6D0, (__int64)sub_1405D89F0, 0LL);
    return (char)v1;
  }
  if ( a1 != 1 )
    return (char)v1;
  if ( RtlIsStateSeparationEnabled() )
  {
    if ( RtlGetPersistedStateLocation(
           L"PowerButton",
           0LL,
           0LL,
           LocationTypeRegistry,
           SourceString,
           0x208u,
           BufferLengthOut) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(DestinationString, 0x11u, &ObjectAttributes) >= 0 )
      {
        qword_140C1F758 = (__int64)DestinationString[0];
        qword_140C1F750 = (__int64)sub_140808C90;
        *(_QWORD *)qword_140C1F740 = 0LL;
        LOBYTE(v1) = sub_14081BE48(DestinationString[0], 1, &v4);
        if ( (_BYTE)v4 )
          return (char)v1;
      }
    }
  }
  else
  {
    v2 = 1;
  }
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v1) = ZwOpenKey(DestinationString, 0x11u, &ObjectAttributes);
  if ( (int)v1 >= 0 )
  {
    if ( v2 )
    {
      qword_140C1F750 = (__int64)sub_140808C90;
      qword_140C1F758 = (__int64)DestinationString[0];
      *(_QWORD *)qword_140C1F740 = 0LL;
    }
    LOBYTE(v1) = sub_14081BE48(DestinationString[0], v2, &v4);
  }
  return (char)v1;
}
