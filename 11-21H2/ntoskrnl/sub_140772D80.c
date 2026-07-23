/*
 * XREFs of sub_140772D80 @ 0x140772D80
 * Callers:
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_140772B6C @ 0x140772B6C (sub_140772B6C.c)
 *     sub_140827DE0 @ 0x140827DE0 (sub_140827DE0.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_14085D278 @ 0x14085D278 (sub_14085D278.c)
 *     sub_140A2D938 @ 0x140A2D938 (sub_140A2D938.c)
 */

__int64 __fastcall sub_140772D80(
        char *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        PHANDLE KeyHandle,
        PULONG Disposition,
        __int64 a9)
{
  void *v9; // rdi
  void *v13; // rsi
  int inited; // ebx
  int v15; // r9d
  int v16; // ecx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *v20; // [rsp+B0h] [rbp+30h] BYREF

  v9 = 0LL;
  v20 = 0LL;
  v13 = a1;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = sub_14085D278(a1, &v20);
    if ( inited < 0 )
      goto LABEL_9;
    v9 = v20;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_10;
  ObjectAttributes.Length = 48;
  v16 = (32 * (a3 & 8 | 6)) | 2;
  if ( !a6 )
    v16 = 32 * (a3 & 8 | 6);
  if ( v9 )
    v13 = v9;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Attributes = v16 | 0x200;
  ObjectAttributes.SecurityDescriptor = a5;
  ObjectAttributes.RootDirectory = v13;
  if ( a9 )
  {
    inited = sub_140A2D938((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, v15);
    if ( inited == -1073741702 )
      inited = -1072103420;
  }
  else
  {
    inited = ZwCreateKey(KeyHandle, a4, &ObjectAttributes, 0, 0LL, a3, Disposition);
  }
LABEL_9:
  v9 = v20;
LABEL_10:
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)inited;
}
