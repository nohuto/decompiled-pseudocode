/*
 * XREFs of sub_140B1244C @ 0x140B1244C
 * Callers:
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_14067AB94 @ 0x14067AB94 (sub_14067AB94.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int16 __fastcall sub_140B1244C(void *a1)
{
  _WORD *v1; // rbx
  unsigned int v2; // edx
  _WORD *v3; // rcx
  unsigned __int16 v4; // si
  wchar_t *v5; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  P = 0LL;
  if ( !qword_140C54EA0 )
    return -1;
  if ( !a1 )
    return word_140C54E9C + 1;
  if ( sub_14067B838(a1, L"Group", 0, &P) < 0 )
    return word_140C54E9C;
  v1 = P;
  if ( *((_DWORD *)P + 1) != 1 || (v2 = *((_DWORD *)P + 3)) == 0 )
  {
    ExFreePoolWithTag(P, 0);
    return word_140C54E9C;
  }
  v3 = (char *)P + *((unsigned int *)P + 2);
  LODWORD(P) = 0;
  sub_14067AB94(v3, v2, (int *)&P);
  v4 = 0;
  String1.MaximumLength = v1[6];
  v5 = (_WORD *)((char *)v1 + *((unsigned int *)v1 + 2));
  String1.Length = (unsigned __int16)P;
  for ( String1.Buffer = v5; v4 < (unsigned __int16)word_140C54E9C; ++v4 )
  {
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)qword_140C54EA0 + v4, 1u) )
      break;
  }
  ExFreePoolWithTag(v1, 0);
  return v4;
}
