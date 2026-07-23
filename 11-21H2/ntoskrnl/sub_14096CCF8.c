/*
 * XREFs of sub_14096CCF8 @ 0x14096CCF8
 * Callers:
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1402D9DB4 @ 0x1402D9DB4 (sub_1402D9DB4.c)
 *     sub_1405E40E4 @ 0x1405E40E4 (sub_1405E40E4.c)
 *     RtlFreeAnsiString @ 0x14070AFC0 (RtlFreeAnsiString.c)
 */

void __fastcall sub_14096CCF8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r15d
  int v10; // r12d
  int v11; // ebx
  _STRING AnsiString; // [rsp+30h] [rbp-38h] BYREF

  AnsiString = 0LL;
  v6 = sub_140281750(a1);
  v7 = v6;
  if ( *(_WORD *)(v6 + 88) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    v9 = *(_DWORD *)(v8 + 68);
    v10 = *(_DWORD *)(v8 + 60);
    v11 = sub_1402D9DB4(&AnsiString, (PCUNICODE_STRING)(v6 + 88));
    sub_140280D08(a1, v7);
    if ( v11 )
    {
      sub_1405E40E4((__int64)&AnsiString, a2, a3, v9, v10);
      RtlFreeAnsiString(&AnsiString);
    }
  }
  else
  {
    sub_140280D08(a1, v6);
  }
}
