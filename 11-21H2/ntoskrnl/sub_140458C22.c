/*
 * XREFs of sub_140458C22 @ 0x140458C22
 * Callers:
 *     sub_140393E40 @ 0x140393E40 (sub_140393E40.c)
 * Callees:
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 *     sub_14045699C @ 0x14045699C (sub_14045699C.c)
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 */

void __fastcall sub_140458C22(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  char v13; // r10
  __int64 v14; // r11
  int v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]

  v10 = sub_14045699C(a1, a2, 0LL, a4, a6, a5);
  if ( v10 != a5
    || (v11 = (a4 & 0xFFF)
            + (*(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12)
            + v10,
        *(_QWORD *)(a1 + 136) < (unsigned __int64)(v11 - 1)) )
  {
    v13 = 0;
    if ( a6 )
      return;
    goto LABEL_9;
  }
  if ( !a6 && !*(_BYTE *)(a1 + 437) )
  {
    v12 = (unsigned int)sub_14045693C(a1) - 1;
    if ( (v12 & v14) == 0 && (v12 & v11) == 0 )
    {
      LOBYTE(v16) = v13;
      LOBYTE(v15) = v13;
      sub_140513310(v12, a2, a4, a5, v15, v16);
      return;
    }
LABEL_9:
    sub_140457A42(a1, a2, a4, a3, a5, v13, v13, v13);
  }
}
