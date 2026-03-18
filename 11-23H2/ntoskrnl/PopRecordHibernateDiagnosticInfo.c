/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140AA3A90
 * Callers:
 *     PopRequestWrite @ 0x140AA3FB0 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA59E4 (PopWriteHiberPages.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C3DA36;
  v3 = 0;
  qword_140C3E648 = qword_140C3D4D0;
  v4 = 0;
  qword_140C3E650 = qword_140C3D4D8;
  qword_140C3E658 = qword_140C3D4F8;
  qword_140C3E660 = qword_140C3D4E8;
  qword_140C3E668 = qword_140C3D4E0;
  qword_140C3E670 = qword_140C3D500;
  qword_140C3E678 = qword_140C3D4F0;
  qword_140C3E680 = qword_140C3D508;
  dword_140C3E688 = dword_140C3D510;
  result = (unsigned int)dword_140C3CE04;
  dword_140C3E694 = dword_140C3CE04;
  for ( qword_140C3E68C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C3E68C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C3E68C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
