/*
 * XREFs of sub_140784454 @ 0x140784454
 * Callers:
 *     sub_1407827F0 @ 0x1407827F0 (sub_1407827F0.c)
 *     sub_140A2DA0C @ 0x140A2DA0C (sub_140A2DA0C.c)
 * Callees:
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     sub_1406C2248 @ 0x1406C2248 (sub_1406C2248.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall sub_140784454(__int64 a1, wchar_t *a2, wchar_t **a3, const UNICODE_STRING **a4)
{
  int v4; // ebx
  bool v6; // zf
  wchar_t *v10; // rdi
  wchar_t *v12; // rbp
  wchar_t *v13; // rax
  UNICODE_STRING StringIn; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  *(_DWORD *)(&StringIn.MaximumLength + 1) = 0;
  v6 = *a2 == 64;
  StringOut = 0LL;
  if ( !v6
    || (v12 = a2 + 1, (v13 = wcschr(a2 + 1, 0x3Au)) == 0LL)
    || (StringIn.Buffer = v12,
        StringIn.Length = 2 * (v13 - v12),
        StringIn.MaximumLength = StringIn.Length,
        v10 = v13 + 1,
        v13 == (wchar_t *)-2LL) )
  {
    v10 = a2;
LABEL_3:
    *a4 = *(const UNICODE_STRING **)(a1 + 48);
    goto LABEL_4;
  }
  if ( v10 == a2 )
    goto LABEL_3;
  v4 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v4 = sub_1406C2248(a1, StringOut.Buffer, a4);
  RtlFreeUnicodeString(&StringOut);
  if ( v4 == -1073741772 )
    return (unsigned int)-1073741766;
  if ( v4 < 0 )
    return (unsigned int)v4;
LABEL_4:
  *a3 = v10;
  return (unsigned int)v4;
}
