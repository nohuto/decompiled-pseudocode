/*
 * XREFs of sub_140A7019C @ 0x140A7019C
 * Callers:
 *     sub_140A70084 @ 0x140A70084 (sub_140A70084.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140A7019C(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  char *v4; // rcx
  __int64 result; // rax
  char *v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v2 = a1 + 308;
  a1[12] = a2;
  a1[311] = 1232;
  a1[309] = 1264;
  a1[310] = -1232;
  a1[308] = -1232;
  v4 = (char *)(a1 + 316);
  if ( (a2 & 0x100040) == 0x100040 )
  {
    v6 = (char *)(((unsigned __int64)v2 + 95) & 0xFFFFFFFFFFFFFFC0uLL);
    memset(v6, 0, 0x40uLL);
    v2[4] = (_DWORD)v6 - (_DWORD)v2;
    v7 = (unsigned int)(MEMORY[0xFFFFF780000003E8] - 512);
    v2[5] = v7;
    v2[1] = (_DWORD)v6 - (_DWORD)v2 + v7 - *v2;
    v4 = &v6[v7];
  }
  result = 1048704LL;
  if ( (a2 & 0x100080) == 0x100080 )
  {
    v8 = (unsigned __int64)(v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    LODWORD(v8) = v8 - (_DWORD)v2;
    v2[6] = v8;
    result = (unsigned int)(v8 - *v2 + 24);
    v2[7] = 24;
    v2[1] = result;
  }
  return result;
}
