/*
 * XREFs of sub_14066F678 @ 0x14066F678
 * Callers:
 *     sub_14066F4C0 @ 0x14066F4C0 (sub_14066F4C0.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1406C2FDC @ 0x1406C2FDC (sub_1406C2FDC.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_1408596A4 @ 0x1408596A4 (sub_1408596A4.c)
 */

__int64 __fastcall sub_14066F678(
        PCUNICODE_STRING String2,
        unsigned int a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 CurrentServerSilo; // rax
  volatile signed __int64 *v12; // rax
  PCUNICODE_STRING *v13; // rsi
  __int16 v14; // bp
  unsigned int Length; // ecx
  __int64 v16; // rcx
  wchar_t *Buffer; // rax
  unsigned __int64 v18; // rdx
  int v19; // ecx
  int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+28h] [rbp-50h]
  __int128 v23; // [rsp+50h] [rbp-28h] BYREF

  v23 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v12 = (volatile signed __int64 *)sub_140204738(CurrentServerSilo);
  v13 = (PCUNICODE_STRING *)(v12 + 92);
  if ( !_InterlockedCompareExchange64(v12 + 96, 0LL, 0LL) )
  {
    v19 = sub_1408596A4(v13);
    if ( v19 < 0 )
      return (unsigned int)v19;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v14 = 42;
  Length = v13[4]->Length;
  if ( (unsigned __int16)Length >= 0x2Au )
    Length = 42;
  if ( String2->Length <= Length )
    return (unsigned int)-1073741275;
  if ( String2->Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(v13[4], String2, 1u) && !RtlPrefixUnicodeString(v13[4] + 1, String2, 1u) )
      return (unsigned int)-1073741275;
    v14 = v13[4]->Length;
  }
  else if ( !RtlPrefixUnicodeString(&stru_1400011B0, String2, 1u)
         && !RtlPrefixUnicodeString(&stru_14000A880, String2, 1u) )
  {
    return (unsigned int)-1073741275;
  }
  v16 = (unsigned __int16)(String2->Length - v14);
  Buffer = String2->Buffer;
  v18 = String2->Length - v16;
  LOWORD(v23) = String2->Length - v14;
  WORD1(v23) = v16;
  *((_QWORD *)&v23 + 1) = &Buffer[v18 >> 1];
  v19 = sub_1406C2FDC(&qword_140A3DA00, 17LL, &v23, a2, a3, a4, a5, a6, a7);
  if ( v19 < 0 && (dword_140C5AFD0 & 1) == 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
  {
    LOBYTE(v22) = a4;
    LOBYTE(v21) = a3;
    return (unsigned int)sub_1406C2FDC(L" \"", 9LL, &v23, a2, v21, v22, a5, a6, a7);
  }
  return (unsigned int)v19;
}
