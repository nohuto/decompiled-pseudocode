/*
 * XREFs of sub_140B5229C @ 0x140B5229C
 * Callers:
 *     sub_140B08E90 @ 0x140B08E90 (sub_140B08E90.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14056D55C @ 0x14056D55C (sub_14056D55C.c)
 *     sub_1405A828C @ 0x1405A828C (sub_1405A828C.c)
 *     sub_1405A9F00 @ 0x1405A9F00 (sub_1405A9F00.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140B5229C()
{
  ULONG_PTR v0; // rdi
  unsigned __int64 v1; // rbp
  _DWORD *v2; // rax
  _QWORD *v3; // rsi
  _DWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  int v8; // r14d
  __int64 result; // rax

  v0 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
  if ( !v0 )
    return 0LL;
  v1 = -1LL;
  v2 = sub_1402828F0(64, 0x50uLL, 0x4D424D45u);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 512;
    v4 = v2 + 4;
    v3[1] = v4;
    *v4 |= 1u;
    v5 = sub_1405A828C(
           (__int64)&StartContext,
           *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 192)
                               + 138LL),
           0,
           1LL);
    v6 = v5;
    if ( !v5 )
    {
LABEL_15:
      ExFreePoolWithTag(v3, 0);
      if ( v1 != -1LL )
        sub_1405A9F00(v1);
      goto LABEL_17;
    }
    sub_140313CA0(v5, 0LL, 0);
    v1 = 0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4);
    v7 = sub_1402CBD10(v0, v1, -1073741820);
    v8 = 0;
    if ( sub_140317A80(v0) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v8 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_11;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
      {
        goto LABEL_11;
      }
      if ( (v7 & 1) != 0 )
        v7 |= 0x8000000000000000uLL;
    }
LABEL_11:
    *(_QWORD *)v0 = v7;
    if ( v8 )
      sub_1402294F0(v0, v7);
    if ( (int)sub_14056D55C() >= 0 )
    {
      qword_140C53400 = 0LL;
      result = 1LL;
      qword_140C533F0 = (__int64)(v0 << 25) >> 16;
      qword_140C533F8 = (__int64)v3;
      dword_140C53408 = 0;
      return result;
    }
    goto LABEL_15;
  }
LABEL_17:
  sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v0, 1u);
  return 0LL;
}
