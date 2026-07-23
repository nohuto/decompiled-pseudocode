/*
 * XREFs of sub_14096DDA8 @ 0x14096DDA8
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062E480 @ 0x14062E480 (sub_14062E480.c)
 */

__int64 __fastcall sub_14096DDA8(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int16 v3; // di
  void *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  void *v9; // rbx
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 *v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]

  v13 = 12;
  v12 = &v11;
  v14 = 0;
  v3 = (a3 != 0) + 588;
  v5 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    v8 = sub_1402A1770(v5);
    v9 = (void *)v8;
    if ( !v8 )
      break;
    v7 = *(_QWORD *)(v8 + 1368);
    DWORD2(v11) = *(_DWORD *)(v7 + 8);
    *(_QWORD *)&v11 = v7;
    sub_14062E480((__int64)&v12, 1u, a1, a2, v3, 0x401803u);
    v5 = v9;
  }
  return 0LL;
}
