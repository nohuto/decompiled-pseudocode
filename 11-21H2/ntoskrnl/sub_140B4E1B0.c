/*
 * XREFs of sub_140B4E1B0 @ 0x140B4E1B0
 * Callers:
 *     sub_140B13268 @ 0x140B13268 (sub_140B13268.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14082FA20 @ 0x14082FA20 (sub_14082FA20.c)
 *     sub_140B14608 @ 0x140B14608 (sub_140B14608.c)
 */

bool __fastcall sub_140B4E1B0(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 *a7,
        unsigned int *a8)
{
  unsigned int v9; // edi
  bool result; // al
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-18h] BYREF

  DWORD1(v13) = 0;
  v9 = BugCheckParameter4;
  String1 = 0LL;
  *((_QWORD *)&v13 + 1) = *(_QWORD *)(a5 + 8) + 36LL;
  WORD1(v13) = *(_WORD *)(a5 + 2) - 36;
  LOWORD(v13) = *(_WORD *)a5 - 36;
  if ( !sub_14082FA20((__int16 *)&v13, (__int64)&String1, (bool *)&a5) )
    return 0;
  if ( !RtlEqualUnicodeString(&String1, &stru_140B57848, 1u) )
  {
    if ( !RtlEqualUnicodeString(&String1, &stru_140B57B10, 1u) )
      return 0;
    BugCheckParameter3 = a3;
    v9 = a4;
  }
  if ( !BugCheckParameter3 )
    return 0;
  result = sub_140B14608(BugCheckParameter3, v9, &v13, a7, a8);
  if ( result )
    *a6 = BugCheckParameter3;
  return result;
}
