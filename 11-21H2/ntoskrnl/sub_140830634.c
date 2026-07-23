/*
 * XREFs of sub_140830634 @ 0x140830634
 * Callers:
 *     sub_14082FBD4 @ 0x14082FBD4 (sub_14082FBD4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_14082FDD8 @ 0x14082FDD8 (sub_14082FDD8.c)
 *     sub_14082FF7C @ 0x14082FF7C (sub_14082FF7C.c)
 *     sub_14083071C @ 0x14083071C (sub_14083071C.c)
 *     sub_140A34D60 @ 0x140A34D60 (sub_140A34D60.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140830634(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // eax
  int v9; // ebx
  void *v11; // rcx
  _QWORD *v12; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  Handle = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( a2 && a3 )
  {
    v5 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    if ( (int)sub_14083071C(&DestinationString, 0LL, v6, &Handle) >= 0 )
    {
      v9 = sub_140A34D60(Handle);
      if ( v9 >= 0 )
        goto LABEL_6;
      NtClose(Handle);
      Handle = 0LL;
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    v8 = sub_14083071C(&DestinationString, 0LL, v7, &Handle);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741772 )
        v9 = 0;
    }
    else
    {
      v9 = sub_14082FDD8(Handle, a2, a3);
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_6:
  if ( Handle )
    NtClose(Handle);
  if ( v9 < 0 )
  {
    if ( a2 )
    {
      v11 = (void *)*a2;
      if ( *a2 != v5 )
      {
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        goto LABEL_22;
      }
    }
  }
  else if ( !*a2 )
  {
    v12 = sub_14082FF7C(1);
    *a2 = (__int64)v12;
    if ( !v12 )
    {
      v9 = -1073741801;
LABEL_22:
      *a2 = v5;
    }
  }
  return (unsigned int)v9;
}
