/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x180077ED0
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x180077DB4 (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1800148B0 (RtlPrefixUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001CF30 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, _UNICODE_STRING *a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  char v7; // r14
  char v8; // r12
  bool v9; // r15
  char v10; // bp
  int v11; // eax
  bool v12; // zf
  _DWORD *v13; // r11
  __m128i v15; // xmm0
  int v16; // eax
  int v17; // eax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v11 = RtlDetermineDosPathNameType_Ustr((__int64)a2);
  v12 = a2->Length == 4;
  *v13 = v11;
  if ( v12 )
    goto LABEL_27;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    v10 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    return v4;
  }
  v7 = 1;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    v10 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    if ( !v10 )
    {
      v15 = *(__m128i *)a2;
      v18[0] = *(_QWORD *)&a2->Length;
      v18[1] = _mm_srli_si128(v15, 8).m128i_u64[0] + 8;
      LOWORD(v18[0]) -= 8;
      WORD1(v18[0]) -= 8;
      v16 = RtlDetermineDosPathNameType_Ustr((__int64)v18);
      v9 = v16 == 2;
      if ( v16 != 2 )
        *a4 |= 0x200u;
      goto LABEL_19;
    }
LABEL_27:
    *a4 |= 0x400u;
    v17 = *a4;
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v8 = 1;
  if ( v10 )
    goto LABEL_27;
LABEL_19:
  *a4 |= 0x10u;
  v17 = *a4;
LABEL_20:
  if ( v8 )
  {
    v17 |= 0x40u;
    *a4 = v17;
  }
  if ( v9 )
    *a4 = v17 | 0x20;
  return v4;
}
