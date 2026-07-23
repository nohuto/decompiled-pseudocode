/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x18007B7C0
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x18007B6A4 (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180041530 (RtlPrefixUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180047984 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlEqualUnicodeString @ 0x18004A360 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, _UNICODE_STRING *a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  char v7; // di
  char v8; // r15
  char v9; // r14
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r11
  __m128i v14; // xmm0
  int v15; // eax
  bool v16; // cl
  int v17; // eax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v10 = RtlDetermineDosPathNameType_Ustr((__int64)a2);
  v11 = a2->Length == 4;
  *v12 = v10;
  if ( v11 )
    goto LABEL_27;
  v7 = 1;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    v9 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    return v4;
  }
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    v9 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    if ( !v9 )
    {
      v14 = *(__m128i *)a2;
      v18[0] = *(_QWORD *)&a2->Length;
      v18[1] = _mm_srli_si128(v14, 8).m128i_u64[0] + 8;
      LOWORD(v18[0]) -= 8;
      WORD1(v18[0]) -= 8;
      v15 = RtlDetermineDosPathNameType_Ustr((__int64)v18);
      v16 = v15 == 2;
      if ( v15 != 2 )
        *a4 |= 0x200u;
      goto LABEL_19;
    }
LABEL_27:
    *a4 |= 0x400u;
    v16 = 0;
    v17 = *a4;
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v8 = 1;
  v16 = 0;
  if ( v9 )
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
  if ( v16 )
    *a4 = v17 | 0x20;
  return v4;
}
