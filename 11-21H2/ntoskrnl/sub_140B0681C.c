/*
 * XREFs of sub_140B0681C @ 0x140B0681C
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14026CF08 @ 0x14026CF08 (sub_14026CF08.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 *     sub_1403C315C @ 0x1403C315C (sub_1403C315C.c)
 *     sub_1403C3290 @ 0x1403C3290 (sub_1403C3290.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 */

__int64 sub_140B0681C()
{
  char *v0; // rax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v0 = sub_14026DFC0(5);
  if ( !(unsigned int)sub_1407F35F8(&StartContext, (__int64)v0, 7, 0LL) )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = *((unsigned int *)CurrentPrcb + 8276) ^ *((unsigned int *)CurrentPrcb + 2894) ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v3 = (unsigned __int64)(unsigned int)sub_140363220(0) << 32;
  v4 = sub_140363220(0);
  v5 = qword_140C54060;
  v6 = v3 | v4;
  v7 = 0;
  v8 = v6 ^ v2;
  if ( !v8 )
    v8 = 1LL;
  qword_140C53430 = v8;
  v9 = qword_140D069A8 + (qword_140D06B38 << 12);
  v10 = ((_DWORD)qword_140D069A8 + ((_DWORD)qword_140D06B38 << 12)) & 0x1FFFFF;
  qword_140C534B0 = 0x100000000LL;
  v11 = (0x200000 - v10) & -(__int64)(v10 != 0);
  v12 = (0x800000uLL / (unsigned __int16)word_140D05000) << 21;
  if ( word_140D05000 )
  {
    do
    {
      v13 = qword_140C506E0;
      v14 = 120LL * v7;
      v15 = v12 * v7 + v5;
      *(_QWORD *)(v14 + qword_140C506E0 + 96) = v15;
      *(_QWORD *)(v14 + v13 + 104) = v15 + v12;
      if ( !(unsigned int)sub_1403C289C((__int64 *)(v14 + qword_140C506E0), v15, v12) )
        return 0LL;
    }
    while ( ++v7 < (unsigned __int16)word_140D05000 );
  }
  v16 = sub_14026CF08(15);
  if ( !(unsigned int)sub_1403C289C(v16, v17, 0x8000000000uLL) )
    return 0LL;
  if ( v11 )
  {
    v21 = sub_140317A10(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v21 & 0x80u) != 0LL )
    {
      v18 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFFLL;
      v19 = 48 * v18 - 0x220000000000LL;
      if ( _bittest64((const signed __int64 *)(v19 + 40), 0x28u) )
        sub_1402C6AA0(v19, 1, 0, 6, 0LL, 0LL, 0LL);
      sub_1403C3290(v18 + (v10 >> 12), v11 >> 12);
    }
  }
  sub_1403C315C();
  return 1LL;
}
