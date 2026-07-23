/*
 * XREFs of sub_14078508C @ 0x14078508C
 * Callers:
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_14078508C(int a1, unsigned int a2, wchar_t *a3, __int64 a4, UNICODE_STRING *DestinationString)
{
  const WCHAR *v5; // rdi
  int v6; // ecx
  __int64 result; // rax
  unsigned int v8; // ebx
  int v9; // ecx
  char *v10; // r9
  __int64 v11; // rdx
  wchar_t v12; // ax
  wchar_t *v13; // rax

  v5 = a3;
  v6 = a1 - 11;
  if ( !v6 )
  {
    result = sub_1402E0198(a3, 64LL, L"\\NLS\\NlsSectionCP%d", a2);
    goto LABEL_3;
  }
  v9 = v6 - 1;
  if ( !v9 )
  {
    result = sub_1402E0198(a3, 64LL, L"\\NLS\\NlsSectionNORM%.8x", a2);
LABEL_3:
    v8 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_4;
  }
  if ( v9 != 2 )
    return (unsigned int)-1073741585;
  v10 = (char *)((char *)L"\\NLS\\NlsSectionCASE" - (char *)a3);
  v11 = 64LL;
  do
  {
    if ( v11 == -2147483582 )
      break;
    v12 = *(wchar_t *)((char *)a3 + (_QWORD)v10);
    if ( !v12 )
      break;
    *a3++ = v12;
    --v11;
  }
  while ( v11 );
  v13 = a3 - 1;
  if ( v11 )
    v13 = a3;
  *v13 = 0;
  v8 = v11 == 0 ? 0x80000005 : 0;
  if ( !v11 )
    return v8;
LABEL_4:
  RtlInitUnicodeString(DestinationString, v5);
  return v8;
}
