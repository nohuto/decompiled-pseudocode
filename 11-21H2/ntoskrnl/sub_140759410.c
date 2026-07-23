/*
 * XREFs of sub_140759410 @ 0x140759410
 * Callers:
 *     sub_140759300 @ 0x140759300 (sub_140759300.c)
 *     sub_1409F75A0 @ 0x1409F75A0 (sub_1409F75A0.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 */

__int64 __fastcall sub_140759410(__int64 a1, __int16 a2, __int64 a3)
{
  char *v5; // rcx
  __int64 result; // rax
  _STRING v7; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v7.Length = 0x1000000LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a3 + 32) = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a3 + 36) = *(_DWORD *)(a1 + 104);
  *(_WORD *)(a3 + 44) = *(_WORD *)(a1 + 108);
  *(_WORD *)(a3 + 40) = a2;
  *(_WORD *)(a3 + 42) = 0;
  v7.Buffer = (char *)(a3 + 48);
  RtlUnicodeStringToAnsiString(&v7, (PCUNICODE_STRING)(a1 + 72), 0);
  v5 = &v7.Buffer[v7.Length];
  while ( v5 > v7.Buffer )
  {
    if ( !*--v5 )
      break;
    if ( *v5 == 92 )
    {
      LOWORD(v5) = (_WORD)v5 + 1;
      break;
    }
  }
  *(_WORD *)(a3 + 46) = (_WORD)v5 - LOWORD(v7.Buffer);
  *(_DWORD *)(a3 + 304) = *(_DWORD *)(a1 + 120);
  result = *(unsigned int *)(a1 + 156);
  *(_QWORD *)(a3 + 312) = 0LL;
  *(_DWORD *)(a3 + 308) = result;
  return result;
}
