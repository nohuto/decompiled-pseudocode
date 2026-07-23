/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140AA3900
 * Callers:
 *     PopRequestWrite @ 0x140AA3E20 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA5854 (PopWriteHiberPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = 0;
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C3DA16;
  v3 = 0;
  qword_140C3E628 = qword_140C3D490;
  v4 = 0;
  qword_140C3E630 = qword_140C3D498;
  qword_140C3E638 = qword_140C3D4B8;
  qword_140C3E640 = qword_140C3D4A8;
  qword_140C3E648 = qword_140C3D4A0;
  qword_140C3E650 = qword_140C3D4C0;
  qword_140C3E658 = qword_140C3D4B0;
  qword_140C3E660 = qword_140C3D4C8;
  dword_140C3E668 = dword_140C3D4D0;
  result = (unsigned int)dword_140C3CFA4;
  dword_140C3E674 = dword_140C3CFA4;
  for ( qword_140C3E66C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C3E66C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C3E66C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
