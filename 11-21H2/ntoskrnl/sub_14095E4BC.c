/*
 * XREFs of sub_14095E4BC @ 0x14095E4BC
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140765C60 @ 0x140765C60 (sub_140765C60.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 *     sub_140950530 @ 0x140950530 (sub_140950530.c)
 *     sub_14095E754 @ 0x14095E754 (sub_14095E754.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14095E4BC(int a1, __int64 a2, int a3, int a4, __int64 a5, unsigned int *a6, const void **a7)
{
  UNICODE_STRING *v10; // r14
  _WORD *v11; // rdi
  int v12; // esi
  __int64 v13; // rcx
  char *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  _WORD *v17; // rax
  _WORD *v18; // rdx
  unsigned int v20[4]; // [rsp+30h] [rbp-38h] BYREF

  v20[0] = 0;
  v10 = (UNICODE_STRING *)(a6 + 2);
  v11 = 0LL;
  v12 = sub_140765C60(a2, *a7, (__int128 *)&qword_140010CE8, (__int64)a6, (__int64)(a6 + 2), v20);
  if ( v12 >= 0 )
  {
    v12 = sub_14095E754(a1, a2, a3, a4, a5, (__int64)a6);
    if ( v12 >= 0 )
      return (unsigned int)v12;
    sub_140950530(a2, *a6, v10);
    v18 = *a7;
  }
  else
  {
    sub_140950530(a2, *a6, v10);
    if ( !v20[0] )
      return (unsigned int)v12;
    v13 = v20[0];
    v14 = (char *)*a7;
    do
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)&v14[2 * v15] );
      v14 += 2 * v15 + 2;
      --v13;
    }
    while ( v13 );
    v16 = (v14 - (_BYTE *)*a7) >> 1;
    v17 = (_WORD *)sub_140767730(a1, 256LL, 2LL * (unsigned int)(v16 + 1), 0x4B706E50u);
    v11 = v17;
    if ( !v17 )
      return (unsigned int)-1073741670;
    memmove(v17, *a7, 2LL * (unsigned int)v16);
    v18 = v11;
    v11[(unsigned int)(v16 + 1) - 1] = 0;
  }
  sub_140765C60(a2, v18, &xmmword_140010CC8, 0LL, 0LL, 0LL);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B706E50u);
  return (unsigned int)v12;
}
