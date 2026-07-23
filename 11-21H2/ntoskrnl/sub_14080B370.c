/*
 * XREFs of sub_14080B370 @ 0x14080B370
 * Callers:
 *     sub_14080B090 @ 0x14080B090 (sub_14080B090.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14080B4F0 @ 0x14080B4F0 (sub_14080B4F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14080B370(PCUNICODE_STRING SourceString)
{
  __int64 Length; // rdx
  int v3; // edi
  UNICODE_STRING *Pool2; // rax
  PVOID **v5; // rbx
  _QWORD *v6; // rax
  PVOID *v7; // rax
  PVOID v9; // rbx
  PVOID *v10; // rax
  int v11; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID p_P; // [rsp+48h] [rbp-B8h]
  __int64 v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+60h] [rbp-A0h] BYREF

  Length = SourceString->Length;
  p_P = &P;
  P = &P;
  v14[1] = (__int64)v14;
  v3 = 0;
  v14[0] = (__int64)v14;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, Length + 38, 1967550281LL);
  v5 = (PVOID **)Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741670;
    goto LABEL_5;
  }
  Pool2[1].Length = 0;
  Pool2[1].MaximumLength = SourceString->Length;
  Pool2[1].Buffer = &Pool2[2].Length;
  RtlCopyUnicodeString(Pool2 + 1, SourceString);
  v6 = P;
  if ( *((PVOID **)P + 1) != &P )
LABEL_11:
    __fastfail(3u);
  *v5 = (PVOID *)P;
  v5[1] = &P;
  v6[1] = v5;
  P = v5;
  if ( v5 == (PVOID **)&P )
    goto LABEL_15;
  do
  {
    v3 = sub_14080B4F0((int)v5 + 16, 8, 0, 0, FileInformation, v11, (__int64)&P);
    if ( v3 < 0 )
    {
LABEL_5:
      while ( 1 )
      {
        v5 = (PVOID **)P;
LABEL_6:
        if ( v5 == (PVOID **)&P )
          return (unsigned int)v3;
        if ( v5[1] != &P )
          goto LABEL_11;
        v7 = *v5;
        if ( (*v5)[1] != v5 )
          goto LABEL_11;
        P = *v5;
        v7[1] = &P;
        ExFreePoolWithTag(v5, 0x75466F49u);
      }
    }
    v5 = (PVOID **)*v5;
  }
  while ( v5 != (PVOID **)&P );
  while ( 1 )
  {
    v5 = (PVOID **)P;
LABEL_15:
    if ( v5 == (PVOID **)&P )
      break;
    v9 = p_P;
    if ( *(PVOID **)p_P != &P )
      goto LABEL_11;
    v10 = (PVOID *)*((_QWORD *)p_P + 1);
    if ( *v10 != p_P )
      goto LABEL_11;
    p_P = (PVOID)*((_QWORD *)p_P + 1);
    *v10 = &P;
    v3 = sub_14080B4F0((int)v9 + 16, 7, (int)sub_140946830, 0, FileInformation, v11, (__int64)v14);
    ExFreePoolWithTag(v9, 0x75466F49u);
  }
  if ( v3 < 0 )
    goto LABEL_6;
  return (unsigned int)v3;
}
