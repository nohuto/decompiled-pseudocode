/*
 * XREFs of sub_14098CA3C @ 0x14098CA3C
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_14080A3F8 @ 0x14080A3F8 (sub_14080A3F8.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14098CA3C(__int64 a1)
{
  unsigned int v1; // ebx
  bool v2; // zf
  bool v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = byte_140C5AC3C == 0;
  v8 = 0;
  *(_QWORD *)a1 = 0LL;
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    sub_140A48330(a1);
    v4 = sub_14080A3F8(&v8);
    LOBYTE(v6) = *(_BYTE *)(a1 + 4);
    v5 = v8;
    *(_DWORD *)a1 = v8;
    LOBYTE(v6) = (dword_140D048B0 == 1) | v6 & 0xFE;
    *(_BYTE *)(a1 + 4) = v6;
    LOBYTE(v6) = (dword_140D048B4 != 1 ? 0 : 2) | v6 & 0xFD;
    *(_BYTE *)(a1 + 4) = v6;
    LOBYTE(v6) = (dword_140D048B8 != 1 ? 0 : 4) | v6 & 0xFB;
    *(_BYTE *)(a1 + 4) = v6;
    *(_BYTE *)(a1 + 4) = (dword_140D048C0 != 1 ? 0 : 8) | v6 & 0xF7;
    if ( (unsigned int)(v5 - 3) <= 1 )
      LOBYTE(v6) = v4 | *(_BYTE *)(a1 + 5) & 0xFE | 2;
    else
      LOBYTE(v6) = v4 | *(_BYTE *)(a1 + 5) & 0xFC;
    *(_BYTE *)(a1 + 5) = v6;
    sub_140A47CF8(v6, v5);
  }
  return v1;
}
