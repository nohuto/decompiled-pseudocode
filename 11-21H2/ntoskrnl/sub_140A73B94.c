/*
 * XREFs of sub_140A73B94 @ 0x140A73B94
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     sub_140A6F708 @ 0x140A6F708 (sub_140A6F708.c)
 *     sub_140A70264 @ 0x140A70264 (sub_140A70264.c)
 */

__int64 __fastcall sub_140A73B94(__int64 a1, unsigned __int16 *a2, char *a3)
{
  __int64 v4; // r8
  _DWORD *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v8 = 0;
  v4 = *(unsigned __int16 *)(a1 + 6);
  *((_QWORD *)&v7 + 1) = a1;
  LOWORD(v7) = 56;
  if ( (unsigned __int16)v4 < 0x800u && qword_140D088C0[v4] && byte_140C31E40 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    if ( (_WORD)v4 != (unsigned __int16)HIDWORD(KeGetPcr()[1].LockArray) )
      a3 = *(char **)(qword_140D088C0[v4] + 35264);
    v5 = (_DWORD *)*((_QWORD *)a2 + 1);
    sub_140A70264(v5, *a2, &v8);
    sub_140A6F708(a3, v8, v5);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, &v7, 0LL, &xmmword_140C31E60);
}
