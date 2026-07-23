/*
 * XREFs of sub_140A6FEC4 @ 0x140A6FEC4
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 */

__int64 __fastcall sub_140A6FEC4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v6; // eax
  __int64 v7; // rdx
  char *v8; // rcx
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v3 = *(unsigned int *)(a1 + 24);
  v11 = 0LL;
  if ( v3 > (unsigned __int64)(unsigned int)dword_140C097F8 - 56 )
    LODWORD(v3) = dword_140C097F8 - 56;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(char **)(a1 + 16);
  if ( (unsigned int)v3 > v6 )
    LODWORD(v3) = v6;
  LODWORD(v12) = v3;
  *(_DWORD *)(a1 + 8) = sub_140A6F124(v8, v7, v3, 0, 4, &v12);
  v9 = v12;
  *(_WORD *)a2 = v12;
  *(_DWORD *)(a1 + 28) = v9;
  LOWORD(v11) = 56;
  *((_QWORD *)&v11 + 1) = a1;
  return KdSendPacket(2LL, &v11, a2, &xmmword_140C31E60);
}
