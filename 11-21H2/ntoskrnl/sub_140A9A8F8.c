/*
 * XREFs of sub_140A9A8F8 @ 0x140A9A8F8
 * Callers:
 *     sub_140A7C1B8 @ 0x140A7C1B8 (sub_140A7C1B8.c)
 * Callees:
 *     sub_1402D8104 @ 0x1402D8104 (sub_1402D8104.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140602F2C @ 0x140602F2C (sub_140602F2C.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A81E94 @ 0x140A81E94 (sub_140A81E94.c)
 *     sub_140A82B0C @ 0x140A82B0C (sub_140A82B0C.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A89F08 @ 0x140A89F08 (sub_140A89F08.c)
 *     sub_140A93724 @ 0x140A93724 (sub_140A93724.c)
 *     sub_140A9A588 @ 0x140A9A588 (sub_140A9A588.c)
 */

LONG __fastcall sub_140A9A8F8(__int64 a1, char a2, int a3)
{
  int v6; // ebp
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 k; // rdi
  __int64 *v10; // rax
  LONG result; // eax

  v6 = 0;
  sub_140A89D58();
  if ( (dword_140C1AA7C & 1) != 0 )
  {
    for ( i = qword_140C1ADC0; (__int64 *)i != &qword_140C1ADC0; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_44;
    }
  }
  if ( (dword_140C0C848 & 0xEF8000) != 0 || (qword_140D01450 & 0x800000000LL) != 0 )
  {
    for ( j = qword_140C1ADB0; (__int64 *)j != &qword_140C1ADB0; j = *(_QWORD *)j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_44;
    }
  }
  if ( RtlEqualUnicodeString(&stru_140A75060, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57648 = *(_QWORD *)(a1 + 48);
    dword_140D57674 = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&stru_140A75050, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57640 = *(_QWORD *)(a1 + 48);
    dword_140D57670 = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&stru_140A75090, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57638 = *(_QWORD *)(a1 + 48);
    dword_140D5767C = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&stru_140A75080, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57650 = *(_QWORD *)(a1 + 48);
    dword_140D57678 = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&stru_140A75070, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D575C8 = *(_QWORD *)(a1 + 48);
    dword_140D575E0 = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&stru_140A750A0, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57658 = *(_QWORD *)(a1 + 48);
    dword_140D57680 = *(_DWORD *)(a1 + 64);
  }
  for ( k = qword_140C1B2C0; (__int64 *)k != &qword_140C1B2C0; k = *(_QWORD *)k )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(k + 24), (PCUNICODE_STRING)(a1 + 88), 1u) )
    {
      if ( !k )
        goto LABEL_44;
      goto LABEL_42;
    }
  }
  if ( dword_140C1ACA4 )
  {
    if ( !a3 && !dword_140C1ACC0 )
      goto LABEL_44;
  }
  else if ( dword_140C1AA70 != 1 )
  {
    if ( !dword_140D57508 )
      goto LABEL_44;
    LODWORD(dword_140D4E018) = dword_140D4E018 + 1;
    if ( !_bittest((const signed __int32 *)qword_140D576E8, dword_140D4E018) )
      goto LABEL_44;
    --dword_140D57508;
  }
  k = sub_140A9A588((const void **)(a1 + 88));
  if ( !k )
    goto LABEL_44;
  v10 = (__int64 *)qword_140C1B2C8;
  if ( *(__int64 **)qword_140C1B2C8 != &qword_140C1B2C0 )
    __fastfail(3u);
  *(_QWORD *)k = &qword_140C1B2C0;
  *(_QWORD *)(k + 8) = v10;
  *v10 = k;
  qword_140C1B2C8 = k;
LABEL_42:
  v6 = sub_1402D8104(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), a2, k);
  if ( v6 )
  {
    v6 = sub_140A93724(a1);
    sub_140A81E94((unsigned __int16 *)(a1 + 88), 0);
    ++dword_140C29FF4;
    ++*(_DWORD *)(k + 16);
    sub_140602F2C(a1);
    sub_140A89F08(1, a1);
    sub_140A82B0C(a1);
  }
LABEL_44:
  qword_140C1AD40 = 0LL;
  result = KeReleaseMutex(&stru_140C1AD60, 0);
  if ( v6 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
