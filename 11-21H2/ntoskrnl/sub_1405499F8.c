/*
 * XREFs of sub_1405499F8 @ 0x1405499F8
 * Callers:
 *     sub_1405DC4F8 @ 0x1405DC4F8 (sub_1405DC4F8.c)
 * Callees:
 *     sub_14039E528 @ 0x14039E528 (sub_14039E528.c)
 */

char __fastcall sub_1405499F8(unsigned int a1)
{
  int *v1; // rax
  _BYTE *v2; // r10
  _QWORD *v3; // r11
  __int64 v4; // r8
  __int64 v5; // rcx

  v1 = sub_14039E528(a1);
  if ( v1 )
  {
    v4 = *((_QWORD *)v1 + 4);
    v1 = *(int **)(v4 + 8LL * (unsigned int)dword_140CF70B8);
    v5 = (unsigned int)dword_140CF70BC;
    *v2 = *(_QWORD *)(v4 + 8LL * DWORD2(xmmword_140CF7090)) & 1;
    LOBYTE(v1) = (unsigned __int8)v1 & 1;
    *v3 = *(_QWORD *)(v4 + 8 * v5);
  }
  return (char)v1;
}
