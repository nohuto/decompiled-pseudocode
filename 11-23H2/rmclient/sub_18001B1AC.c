/*
 * XREFs of sub_18001B1AC @ 0x18001B1AC
 * Callers:
 *     sub_18001B860 @ 0x18001B860 (sub_18001B860.c)
 * Callees:
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 *     sub_18001B174 @ 0x18001B174 (sub_18001B174.c)
 */

__int64 __fastcall sub_18001B1AC(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // r10

  if ( sub_180004900(a2, &dword_180026668) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_180004900(v2, &xmmword_180026150) || sub_180004900(v6, &xmmword_18002AAF8) )
      *v7 = v9;
    else
      return (unsigned int)sub_18001B174(v9 + 8, v10);
    return v8;
  }
}
