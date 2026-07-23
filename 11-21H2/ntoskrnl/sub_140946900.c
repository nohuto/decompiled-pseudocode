/*
 * XREFs of sub_140946900 @ 0x140946900
 * Callers:
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14067AB94 @ 0x14067AB94 (sub_14067AB94.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1407690BC @ 0x1407690BC (sub_1407690BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140946900(void *a1, UNICODE_STRING *a2, unsigned int a3, UNICODE_STRING *a4)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  _WORD *v8; // rdi
  unsigned int v9; // edx
  _WORD *v10; // rcx
  PVOID P; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  WCHAR v15[20]; // [rsp+80h] [rbp-9h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  SourceString = 0LL;
  if ( a1 )
  {
    ObjectAttributes.RootDirectory = a1;
    SourceString.Buffer = L"Enum";
    *(_DWORD *)&SourceString.Length = 655368;
    ObjectAttributes.ObjectName = &SourceString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = sub_14067B470(a2, 0x20019u, 0LL, &KeyHandle, 0);
  }
  if ( result >= 0 )
  {
    sub_1402E1280(v15, 0x28uLL, L"%u", a3);
    v7 = sub_14067B838(KeyHandle, v15, 100, &P);
    ZwClose(KeyHandle);
    if ( v7 >= 0 )
    {
      v8 = P;
      if ( *((_DWORD *)P + 1) == 1 )
      {
        v9 = *((_DWORD *)P + 3);
        v10 = (char *)P + *((unsigned int *)P + 2);
        LODWORD(P) = 0;
        sub_14067AB94(v10, v9, (int *)&P);
        SourceString.Length = (unsigned __int16)P;
        SourceString.MaximumLength = v8[6];
        SourceString.Buffer = (_WORD *)((char *)v8 + *((unsigned int *)v8 + 2));
        if ( !(_WORD)P )
          v7 = -1073741766;
        if ( v7 >= 0 )
        {
          if ( a4 )
            v7 = sub_1407690BC(a4, &SourceString);
        }
      }
      else
      {
        v7 = -1073741215;
      }
      ExFreePoolWithTag(v8, 0);
    }
    return v7;
  }
  return result;
}
