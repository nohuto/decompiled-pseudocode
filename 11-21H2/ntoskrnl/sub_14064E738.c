/*
 * XREFs of sub_14064E738 @ 0x14064E738
 * Callers:
 *     sub_14064D474 @ 0x14064D474 (sub_14064D474.c)
 * Callees:
 *     sub_14064D4AC @ 0x14064D4AC (sub_14064D4AC.c)
 *     sub_14064DC1C @ 0x14064DC1C (sub_14064DC1C.c)
 *     sub_14064E594 @ 0x14064E594 (sub_14064E594.c)
 */

__int64 sub_14064E738()
{
  unsigned int v0; // ebx
  unsigned int v1; // esi
  __int64 v2; // r8
  int *v3; // rax
  int v4; // ecx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_140C0DF90 & 2) != 0 )
  {
    v6[0] = DWORD2(xmmword_140C0DF20);
    v6[1] = DWORD1(xmmword_140C0DF20);
    v6[2] = HIDWORD(xmmword_140C0DF20);
    v1 = sub_14064E594(v6);
    *(_DWORD *)(*(_QWORD *)(qword_140C5A830 + 24) + 40LL) = -16777216;
    sub_14064D4AC(0xFF000000);
    v0 = 0;
    v3 = &dword_140C0B2E0[18 * v1 + 5];
    LODWORD(qword_140C4EF78) = dword_140C0B2E0[18 * v1 + 4];
    v4 = *v3;
    HIDWORD(qword_140C4EF78) = *v3;
    if ( v3 )
      dword_140C4EF80 = v4;
    sub_14064DC1C(&stru_140C5A820.Length, dword_140C0B2E0[18 * v1 + 2], v2, v1);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
