/*
 * XREFs of sub_140978C9C @ 0x140978C9C
 * Callers:
 *     sub_140739F40 @ 0x140739F40 (sub_140739F40.c)
 * Callees:
 *     sub_14022B0E0 @ 0x14022B0E0 (sub_14022B0E0.c)
 *     sub_14023502C @ 0x14023502C (sub_14023502C.c)
 *     sub_14024B428 @ 0x14024B428 (sub_14024B428.c)
 *     sub_140250BDC @ 0x140250BDC (sub_140250BDC.c)
 *     sub_14027738C @ 0x14027738C (sub_14027738C.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_1402B1D10 @ 0x1402B1D10 (sub_1402B1D10.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_1405A54BC @ 0x1405A54BC (sub_1405A54BC.c)
 */

__int64 __fastcall sub_140978C9C(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // edx
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // xmm1_8
  __int64 v14; // [rsp+58h] [rbp-9h] BYREF
  __int128 v15; // [rsp+60h] [rbp-1h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh]
  __int128 v17; // [rsp+78h] [rbp+17h] BYREF
  __int64 v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+D8h] [rbp+77h] BYREF

  v19 = 0;
  v14 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  if ( a3 >= (unsigned __int16)word_140D05000 )
    return 3221225712LL;
  if ( a4 >= dword_140D05004 )
    return 3221225713LL;
  v7 = 256;
  v8 = (a3 << byte_140C506CC) | (a4 << byte_140C506CD);
  if ( (unsigned __int64)(2 * a1) < 0x100 )
    v7 = 2 * a1;
  sub_14024B428(2uLL, v7, (__int64)&v17);
  CurrentThread = KeGetCurrentThread();
  v10 = &a2[3 * a1];
  sub_14023502C((__int64)&StartContext, (__int64)CurrentThread);
  while ( a2 < v10 )
  {
    v11 = a2[1];
    v12 = 0LL;
    *(_QWORD *)&v15 = 0LL;
    v16 = 0LL;
    *((_QWORD *)&v15 + 1) = v11;
    if ( (unsigned int)sub_1402B2E00(v11) )
    {
      sub_1402B1D10(48 * v11 - 0x220000000000LL, (__int64)&v15);
      v12 = v16;
      if ( v16 == a2[2] && (((unsigned __int64)v15 ^ *a2) & 0x1FFFFFFFFFFFE00LL) == 0 )
      {
        if ( !sub_140278460((__int64)&StartContext, 48 * v11 - 0x220000000000LL, 1LL, 0, &v19) )
        {
          if ( v19 )
            sub_1405A54BC((_SLIST_HEADER *)&StartContext, 0);
          if ( !sub_14027738C(
                  (__int64)&StartContext,
                  v11,
                  1LL,
                  qword_140C50840,
                  (__int64)&v17,
                  0x400000,
                  v8,
                  0LL,
                  *(unsigned __int8 *)(48 * v11 - 0x220000000000LL + 34) >> 6,
                  &v14)
            && v14 != -1 )
          {
            *((_QWORD *)&v15 + 1) = v14;
            goto LABEL_19;
          }
        }
        v12 = v16;
      }
    }
    v16 = v12 | 2;
LABEL_19:
    v13 = v16;
    *(_OWORD *)a2 = v15;
    a2[2] = v13;
    a2 += 3;
  }
  sub_14022B0E0((__int64)&StartContext, (__int64)CurrentThread);
  sub_140250BDC((__int64)&v17);
  return 0LL;
}
