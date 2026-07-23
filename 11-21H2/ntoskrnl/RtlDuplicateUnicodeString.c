/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1406A9D20
 * Callers:
 *     sub_14061B410 @ 0x14061B410 (sub_14061B410.c)
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_140784454 @ 0x140784454 (sub_140784454.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_1408442E8 @ 0x1408442E8 (sub_1408442E8.c)
 *     sub_140942760 @ 0x140942760 (sub_140942760.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_1409730F0 @ 0x1409730F0 (sub_1409730F0.c)
 *     sub_1409F18BC @ 0x1409F18BC (sub_1409F18BC.c)
 *     sub_140A02E2C @ 0x140A02E2C (sub_140A02E2C.c)
 *     sub_140A0350C @ 0x140A0350C (sub_140A0350C.c)
 *     sub_140A03B84 @ 0x140A03B84 (sub_140A03B84.c)
 *     sub_140A03C14 @ 0x140A03C14 (sub_140A03C14.c)
 *     sub_140A03DA4 @ 0x140A03DA4 (sub_140A03DA4.c)
 *     sub_140B24550 @ 0x140B24550 (sub_140B24550.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x140232A80 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  unsigned __int16 Length; // di
  wchar_t *v6; // r14
  ULONG v7; // esi
  ULONG v8; // r13d
  NTSTATUS result; // eax
  unsigned __int16 v10; // bx
  wchar_t *v11; // rax

  Length = 0;
  v6 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !StringOut )
    return -1073741811;
  v7 = Flags & 1;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( v7 && Length == 0xFFFE )
    return -1073741562;
  if ( v7 )
    v10 = Length + 2;
  else
    v10 = Length;
  if ( !v8 && !Length )
    v10 = 0;
  if ( !v10 )
    goto LABEL_20;
  v11 = (wchar_t *)sub_1406BE560(v10);
  v6 = v11;
  if ( v11 )
  {
    if ( Length )
      memmove(v11, StringIn->Buffer, Length);
    if ( v7 )
      v6[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v10;
    StringOut->Length = Length;
    StringOut->Buffer = v6;
    return 0;
  }
  return -1073741801;
}
