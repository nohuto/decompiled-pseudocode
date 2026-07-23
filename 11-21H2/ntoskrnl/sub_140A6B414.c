/*
 * XREFs of sub_140A6B414 @ 0x140A6B414
 * Callers:
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A6B414(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = 0;
  LOBYTE(byte_140C236A0) = byte_140C23416;
  v3 = 0;
  qword_140C236C8 = qword_140C22EB0;
  v4 = 0;
  qword_140C236D0 = qword_140C22EB8;
  qword_140C236D8 = qword_140C22ED8;
  qword_140C236E0 = qword_140C22EC8;
  qword_140C236E8 = qword_140C22EC0;
  qword_140C236F0 = qword_140C22EE0;
  qword_140C236F8 = qword_140C22ED0;
  qword_140C23700 = qword_140C22EE8;
  dword_140C23708 = dword_140C22EF0;
  result = (unsigned int)dword_140C22C04;
  dword_140C23714 = dword_140C22C04;
  for ( qword_140C2370C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C2370C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C2370C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
