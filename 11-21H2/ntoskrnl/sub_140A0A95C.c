/*
 * XREFs of sub_140A0A95C @ 0x140A0A95C
 * Callers:
 *     sub_140A0A644 @ 0x140A0A644 (sub_140A0A644.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     sub_140A0A848 @ 0x140A0A848 (sub_140A0A848.c)
 */

__int64 __fastcall sub_140A0A95C(HANDLE KeyHandle, unsigned int **a2, unsigned int *a3)
{
  ULONG v4; // edi
  ULONG v5; // edx
  HANDLE v7; // rsi
  int v8; // ebx
  NTSTATUS v9; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh]
  char *v15; // [rsp+48h] [rbp-B8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v18; // [rsp+8Ch] [rbp-74h]
  char v19; // [rsp+90h] [rbp-70h] BYREF

  KeyHandlea = 0LL;
  v4 = 0;
  ResultLength = 0;
  v5 = 0;
  v7 = KeyHandle;
  while ( 1 )
  {
    v9 = ZwEnumerateKey(KeyHandle, v5, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
    v8 = v9;
    if ( v9 < 0 )
      break;
    v14 = 0;
    v15 = &v19;
    v13[0] = v18;
    v13[1] = v18;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = v7;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v8 = sub_140A0A848(KeyHandlea, a2, a3);
    ZwClose(KeyHandlea);
    if ( v8 < 0 )
      return (unsigned int)v8;
    ++v4;
    KeyHandle = v7;
    v5 = v4;
  }
  if ( v9 == -2147483622 )
    return 0;
  return (unsigned int)v8;
}
