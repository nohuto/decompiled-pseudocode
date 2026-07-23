/*
 * XREFs of sub_14078003C @ 0x14078003C
 * Callers:
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140827BDC @ 0x140827BDC (sub_140827BDC.c)
 *     sub_140827DE0 @ 0x140827DE0 (sub_140827DE0.c)
 *     sub_14085D278 @ 0x14085D278 (sub_14085D278.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 *     sub_140A2D760 @ 0x140A2D760 (sub_140A2D760.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x14041DC40 (ZwOpenKeyEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14085D278 @ 0x14085D278 (sub_14085D278.c)
 *     sub_140A2D9B4 @ 0x140A2D9B4 (sub_140A2D9B4.c)
 */

__int64 __fastcall sub_14078003C(char *a1, const WCHAR *a2, ULONG a3, ACCESS_MASK a4, PHANDLE KeyHandle, __int64 a6)
{
  void *v6; // rbx
  void *v10; // rsi
  int inited; // edi
  NTSTATUS (__stdcall *v13)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *v16; // [rsp+A0h] [rbp+30h] BYREF

  v6 = 0LL;
  v16 = 0LL;
  v10 = a1;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = sub_14085D278(a1, &v16);
    if ( inited < 0 )
      goto LABEL_7;
    v6 = v16;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_8;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v6 )
    v10 = v6;
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.Attributes = (a3 & 8) != 0 ? 832 : 576;
  ObjectAttributes.ObjectName = &DestinationString;
  if ( a6 )
  {
    inited = sub_140A2D9B4((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, a3, a6);
    if ( inited == -1073741702 )
    {
      if ( byte_140D04CE0 )
      {
        v13 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_140D04CD0;
      }
      else
      {
        v13 = ZwOpenKeyTransacted;
        byte_140D04CE0 = 1;
        qword_140D04CD0 = (__int64)ZwOpenKeyTransacted;
      }
      if ( !v13 || (inited = sub_14042A5E0(KeyHandle, a4), inited == -1073741702) )
        inited = -1072103420;
    }
  }
  else
  {
    inited = ZwOpenKeyEx(KeyHandle, a4, &ObjectAttributes, a3);
  }
LABEL_7:
  v6 = v16;
LABEL_8:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)inited;
}
