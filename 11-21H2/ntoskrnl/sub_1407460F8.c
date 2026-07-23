/*
 * XREFs of sub_1407460F8 @ 0x1407460F8
 * Callers:
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 */

__int64 __fastcall sub_1407460F8(__int64 a1, const UNICODE_STRING *a2, const UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r12
  int v11; // edx
  unsigned int v12; // edx
  ULONG v13; // ebx
  ULONG v14; // r8d
  int v15; // ebx
  ULONG v17; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  HashValue = 0;
  v8 = a1 + 88;
  v9 = *(unsigned __int16 *)(a1 + 88);
  v10 = a1 + 72;
  v11 = *(unsigned __int16 *)(a1 + 72);
  v17 = 0;
  v12 = v9 + *(unsigned __int16 *)(a1 + 40) + v11 + 90;
  if ( (unsigned __int64)v12 + 2 > 0xFFFE )
  {
    v15 = -1073741562;
  }
  else
  {
    UnicodeString.Length = v12;
    UnicodeString.MaximumLength = v12 + 2;
    UnicodeString.Buffer = (wchar_t *)sub_1406BE560((unsigned __int16)(v12 + 2));
    if ( UnicodeString.Buffer )
    {
      if ( a2->Buffer && RtlHashUnicodeString(a2, 1u, 0, &HashValue) >= 0 )
        v13 = HashValue;
      else
        v13 = 0;
      if ( a3->Buffer && RtlHashUnicodeString(a3, 1u, 0, &v17) >= 0 )
        v14 = v17;
      else
        v14 = 0;
      v15 = sub_1402D17BC(
              &UnicodeString,
              L"%wZ:%08x%08x:%wZ:%u.%u.%u.%u:%wZ",
              a1 + 40,
              v13,
              v14,
              v8,
              (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124)),
              *(unsigned __int16 *)(a1 + 124),
              *(unsigned __int16 *)(a1 + 122),
              *(unsigned __int16 *)(a1 + 120),
              v10);
      if ( v15 >= 0 )
      {
        *a4 = UnicodeString;
        UnicodeString = 0LL;
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v15;
}
