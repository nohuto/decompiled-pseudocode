/*
 * XREFs of sub_140A72FE0 @ 0x140A72FE0
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 */

__int64 __fastcall sub_140A72FE0(__int64 a1)
{
  int v1; // edi
  unsigned __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = -1073741811;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 32) = v3 >= 0x7FFFFFFEFFFFLL && 2 - sub_140359DE0(v3);
    *(_DWORD *)(a1 + 36) = 7;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = v1;
  LOWORD(v5) = 56;
  *((_QWORD *)&v5 + 1) = a1;
  return KdSendPacket(2LL, &v5, 0LL, &xmmword_140C31E60);
}
