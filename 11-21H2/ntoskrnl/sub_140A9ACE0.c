/*
 * XREFs of sub_140A9ACE0 @ 0x140A9ACE0
 * Callers:
 *     sub_140A7C248 @ 0x140A7C248 (sub_140A7C248.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A81E94 @ 0x140A81E94 (sub_140A81E94.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A89F08 @ 0x140A89F08 (sub_140A89F08.c)
 *     sub_140A9AF40 @ 0x140A9AF40 (sub_140A9AF40.c)
 */

LONG __fastcall sub_140A9ACE0(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  sub_140A89D58();
  if ( RtlEqualUnicodeString(&stru_140A75060, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57648 = 0LL;
  }
  else if ( RtlEqualUnicodeString(&stru_140A75050, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57640 = 0LL;
  }
  else if ( RtlEqualUnicodeString(&stru_140A75090, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57638 = 0LL;
  }
  else if ( RtlEqualUnicodeString(&stru_140A75080, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57650 = 0LL;
  }
  else if ( RtlEqualUnicodeString(&stru_140A75070, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D575C8 = 0LL;
  }
  else if ( RtlEqualUnicodeString(&stru_140A750A0, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    qword_140D57658 = 0LL;
  }
  v2 = (_QWORD *)sub_140A9AF40((PCUNICODE_STRING)(a1 + 88));
  if ( v2 )
  {
    ++dword_140C29FF8;
    sub_140A89F08(2, a1);
    if ( byte_140C1AD98 )
    {
      v3 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      ExFreePoolWithTag(v2, 0x44536656u);
    }
    else
    {
      ++*((_DWORD *)v2 + 5);
      sub_140A81E94((unsigned __int16 *)(a1 + 88), 1);
    }
  }
  qword_140C1AD40 = 0LL;
  return KeReleaseMutex(&stru_140C1AD60, 0);
}
