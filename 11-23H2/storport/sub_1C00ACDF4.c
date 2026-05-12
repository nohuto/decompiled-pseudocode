/*
 * XREFs of sub_1C00ACDF4 @ 0x1C00ACDF4
 * Callers:
 *     sub_1C0075248 @ 0x1C0075248 (sub_1C0075248.c)
 * Callees:
 *     sub_1C0018A38 @ 0x1C0018A38 (sub_1C0018A38.c)
 *     sub_1C001B020 @ 0x1C001B020 (sub_1C001B020.c)
 *     sub_1C00220D8 @ 0x1C00220D8 (sub_1C00220D8.c)
 *     sub_1C0040950 @ 0x1C0040950 (sub_1C0040950.c)
 *     sub_1C0061748 @ 0x1C0061748 (sub_1C0061748.c)
 *     sub_1C00ACEE4 @ 0x1C00ACEE4 (sub_1C00ACEE4.c)
 */

NTSTATUS __fastcall sub_1C00ACDF4(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r9
  NTSTATUS result; // eax
  const wchar_t *v8; // r10

  v2 = *(_QWORD *)(a2 + 8);
  sub_1C0061748(v2, *(_DWORD *)(a2 + 4));
  sub_1C00ACEE4(v4, v3 + 32);
  v5 = *(_BYTE *)(v2 + 448) & 0xF7;
  *(_DWORD *)(v2 + 48) = 2;
  *(_BYTE *)(v2 + 448) = v5 | 4;
  sub_1C0040950(v2 + 656);
  sub_1C0018A38(*(_QWORD *)(v2 + 24), v2);
  sub_1C00220D8(v2);
  v6 = *(_QWORD *)(v2 + 24);
  result = *(_DWORD *)(v6 + 4212);
  *(_DWORD *)(v2 + 3344) = result;
  if ( (byte_1C0093A06 & 2) != 0 )
  {
    v8 = (const wchar_t *)&unk_1C0082788;
    if ( *(_QWORD *)(v6 + 5016) )
      v8 = *(const wchar_t **)(v6 + 5016);
    return sub_1C001B020(
             v2 + 169,
             v2 + 160,
             v6 + 5000,
             *(const wchar_t **)(v6 + 4656),
             *(_DWORD *)(v6 + 56),
             v6 + 5000,
             0,
             0,
             *(_BYTE *)(v2 + 96),
             (const char *)(v2 + 160),
             (const char *)(v2 + 169),
             (const char *)(v2 + 186),
             v8);
  }
  return result;
}
