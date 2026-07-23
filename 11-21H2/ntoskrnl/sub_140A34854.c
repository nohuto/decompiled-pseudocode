/*
 * XREFs of sub_140A34854 @ 0x140A34854
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

int __fastcall sub_140A34854(__int64 a1, UNICODE_STRING *a2)
{
  int result; // eax
  __int64 ParentSilo; // rbx
  ULONG v6; // ecx
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)asc_140865B20;
  result = PsGetPermanentSiloContext(a1, dword_140D05060, (unsigned __int64 *)&String.Length);
  if ( result >= 0 )
  {
    ParentSilo = PsGetParentSilo(a1);
    if ( PsGetCurrentSilo() != ParentSilo )
      return -1073740007;
    v6 = 0;
    *(_QWORD *)&String.Length = 1441792LL;
    String.Buffer = (wchar_t *)&v11;
    if ( a1 )
      v6 = *(_DWORD *)(a1 + 1428);
    result = RtlIntegerToUnicodeString(v6, 0xAu, &String);
    if ( result >= 0 )
    {
      v7 = String.Length + 14;
      if ( a2->Buffer )
      {
        if ( a2->MaximumLength < v7 )
          return -1073741789;
      }
      else
      {
        Pool2 = ExAllocatePool2(256LL, v7, 1833853519LL);
        a2->Buffer = (wchar_t *)Pool2;
        if ( !Pool2 )
          return -1073741670;
        a2->Length = 0;
        a2->MaximumLength = v7;
      }
      RtlCopyUnicodeString(a2, &stru_140A37F70);
      RtlAppendUnicodeStringToString(a2, &Source);
      RtlAppendUnicodeStringToString(a2, &String);
      return 0;
    }
  }
  return result;
}
