/*
 * XREFs of sub_1403D6C20 @ 0x1403D6C20
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 * Callees:
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_14024EA68 @ 0x14024EA68 (sub_14024EA68.c)
 *     sub_1402662A0 @ 0x1402662A0 (sub_1402662A0.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 */

__int64 __fastcall sub_1403D6C20(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int a4,
        int a5,
        char a6,
        unsigned int a7)
{
  unsigned __int64 v9; // r11
  unsigned int *v10; // rbx
  __int64 v11; // rbp
  int v13; // r8d
  int v14; // r14d
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // eax
  unsigned __int64 v20; // r14
  __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  int v24; // esi
  unsigned __int64 v25; // [rsp+50h] [rbp-38h]
  unsigned __int64 v26; // [rsp+A0h] [rbp+18h]
  int v27; // [rsp+B0h] [rbp+28h]

  v9 = qword_14001C780[*a3];
  v26 = v9;
  if ( a2 < (unsigned __int16)word_140D05000 )
  {
    v10 = 0LL;
    v11 = 4LL;
  }
  else
  {
    a2 = *(_DWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 33364);
    v10 = (unsigned int *)(qword_140C506D8 + 4LL * a2 * (unsigned __int16)word_140D05000);
    v11 = (__int64)&v10[(unsigned __int16)word_140D05000];
  }
  v13 = (4 * ((a5 & 1) == 0) + 2) | 1;
  if ( (a5 & 0x8000) == 0 )
    v13 = 4 * ((a5 & 1) == 0) + 2;
  v14 = v13 | 0x40;
  if ( (a5 & 8) != 0 )
    v14 = v13;
  v15 = qword_14001C780[a4];
  v16 = a5 & 0x4000;
  v25 = v15;
  v27 = v16;
  while ( 1 )
  {
    v17 = v16 ? sub_1402CA5E0(a1, 0LL, *a3, 1LL, a2, 4, a7, v14, 0LL) : sub_1402662A0(a1, a2, v9, v15, 0LL, 0, v14, a7);
    v18 = v17;
    if ( v17 )
      break;
    if ( ++v10 == (unsigned int *)v11 )
      return 0LL;
    a2 = *v10;
    v16 = v27;
    v9 = v26;
    v15 = v25;
  }
  v19 = sub_140235E10(v17);
  *a3 = v19;
  v20 = qword_14001C780[v19];
  sub_1402C38D0(a1, 0xAAAAAAAAAAAAAAABuLL * ((v18 + 0x220000000000LL) >> 4), v20, 1, 1);
  sub_1402C6AA0(v18, *a3, 0, 1, 0LL, 0LL, 0LL);
  if ( (a5 & 0x40000000) == 0 )
  {
    v22 = *(_QWORD *)(v18 + 16);
    v23 = v20;
    v24 = ((a5 & 0x100000) != 0) + 1;
    do
    {
      sub_14024EA68(v18, a6, -8LL, a7, v24);
      *(_QWORD *)(v18 + 16) = v22;
      v18 += 48LL;
      --v23;
    }
    while ( v23 );
    v18 += -48LL * v20;
  }
  return v18;
}
