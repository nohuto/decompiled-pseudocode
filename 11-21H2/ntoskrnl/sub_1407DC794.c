/*
 * XREFs of sub_1407DC794 @ 0x1407DC794
 * Callers:
 *     sub_1407DC6F4 @ 0x1407DC6F4 (sub_1407DC6F4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wtol @ 0x1403E1810 (_wtol.c)
 *     iswdigit @ 0x1403E1BF0 (iswdigit.c)
 *     sub_1407DC8F4 @ 0x1407DC8F4 (sub_1407DC8F4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407DC794(unsigned __int16 *a1, unsigned int *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  wint_t *v8; // rdi
  unsigned __int64 v9; // r14
  wchar_t *i; // rsi
  unsigned int v12; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  wchar_t Str[15]; // [rsp+48h] [rbp-50h] BYREF
  wchar_t v15; // [rsp+66h] [rbp-32h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"/prefetch:");
  v4 = *a1;
  v5 = 0;
  if ( (_WORD)v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    if ( (v6 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v6 + v4 > 0x7FFFFFFF0000LL || v6 + v4 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v7 = sub_1407DC8F4(a1, &DestinationString);
  if ( v7 )
  {
    v8 = (wint_t *)(v7 + DestinationString.Length);
    v9 = *((_QWORD *)a1 + 1) + *a1;
    for ( i = Str; (unsigned __int64)v8 < v9 && i < &v15 && *v8 != 32; ++i )
    {
      if ( !iswdigit(*v8) )
        return (unsigned int)-1073741811;
      *i = *v8++;
    }
    *i = 0;
    v12 = wtol(Str);
    if ( v12 > 0x10 )
      return (unsigned int)-1073741811;
    else
      *a2 = v12;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v5;
}
