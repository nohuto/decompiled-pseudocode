/*
 * XREFs of sub_140A0A848 @ 0x140A0A848
 * Callers:
 *     sub_140A0A95C @ 0x140A0A95C (sub_140A0A95C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_14064717C @ 0x14064717C (sub_14064717C.c)
 *     sub_140A0A574 @ 0x140A0A574 (sub_140A0A574.c)
 *     sub_140A0A718 @ 0x140A0A718 (sub_140A0A718.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A0A848(void *a1, unsigned int **a2, unsigned int *a3)
{
  int v5; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  size_t v8; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v9; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  int v13; // [rsp+78h] [rbp-88h]
  WCHAR Source[138]; // [rsp+7Ch] [rbp-84h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  ResultLength = 0;
  v11.Buffer = 0LL;
  ValueName.Buffer = L"FileName";
  *(_QWORD *)&ValueName.Length = 1179664LL;
  v5 = ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x114u, &ResultLength);
  if ( v5 >= 0 )
  {
    v5 = sub_140A0A718(Source, v13, &v11);
    if ( v5 >= 0 )
    {
      v5 = sub_140A0A574((__int64)&v11, &v9, &v8);
      if ( v5 >= 0 )
        v5 = sub_14064717C(a2, a3, v9, v8);
    }
  }
  if ( v11.Buffer )
    ExFreePoolWithTag(v11.Buffer, 0);
  return (unsigned int)v5;
}
