/*
 * XREFs of sub_140B1DB9C @ 0x140B1DB9C
 * Callers:
 *     sub_140B1D878 @ 0x140B1D878 (sub_140B1D878.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

__int64 sub_140B1DB9C()
{
  int v0; // ebx
  int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  bool v5; // cc
  __int64 v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rax
  int v11; // ecx
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v14[16]; // [rsp+38h] [rbp-29h] BYREF

  v0 = 0;
  qword_140C4BD48 = (__int64)&qword_140C4BD40;
  qword_140C4BD40 = (__int64)&qword_140C4BD40;
  qword_140C4BD30 = 0LL;
  DestinationString = 0LL;
  v1 = sub_14042A5E0(2LL, 0LL);
  if ( v1 >= 0 )
  {
    memset(v14, 0, 0x78uLL);
    BYTE2(v14[0]) |= 4u;
    LOWORD(v14[0]) = 120;
    LODWORD(v14[1]) = 256;
    *(_OWORD *)((char *)&v14[1] + 4) = xmmword_140025B40;
    HIDWORD(v14[4]) = 512;
    HIDWORD(v14[3]) = 2031616;
    v14[9] = sub_140513870;
    RtlInitUnicodeString(&DestinationString, L"DmaAdapter");
    v1 = ObCreateObjectType(&DestinationString, (__int64)v14, 0LL, (__int64)&qword_140D06AF8);
    if ( v1 >= 0 )
    {
      v3 = sub_1403B1F04(v2, 32LL);
      qword_140C4BD28 = v3;
      if ( v3 )
      {
        *(_QWORD *)(v3 + 8) = 0LL;
        v4 = 0x100000000LL;
        v5 = (unsigned __int64)qword_140C4E038 <= 0x100000000LL;
        *(_BYTE *)(v3 + 24) = 0;
        if ( !v5 )
          v4 = qword_140C4E038;
        v6 = v4 + 0x7FFFFFFFFFLL;
        *(_QWORD *)v3 = 0LL;
        v7 = byte_140C0CA9C;
        v8 = v6 & 0xFFFFFF8000000000uLL;
        v9 = byte_140C4BCBC == 0;
        *(_QWORD *)(v3 + 16) = v8 >> 12;
        if ( v9 )
          v0 = 2;
        dword_140C4BD18 = 1;
        v10 = 1LL << v7;
        v11 = v0 | 1;
        if ( v10 > v8 )
          v11 = v0;
        dword_140C4BD1C = v11 | 0x80000000;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v1;
}
