/*
 * XREFs of sub_1409780D4 @ 0x1409780D4
 * Callers:
 *     sub_140939830 @ 0x140939830 (sub_140939830.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140280EF8 @ 0x140280EF8 (sub_140280EF8.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14030EBA0 @ 0x14030EBA0 (sub_14030EBA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1409780D4(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v5; // r15d
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  int v8; // r12d
  _QWORD *v9; // rax
  _QWORD *i; // rbx
  _QWORD **v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  _OWORD v20[3]; // [rsp+28h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a2 + 40);
  memset(v20, 0, sizeof(v20));
  v5 = 0;
  v6 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( *((_QWORD *)CurrentThread + 23) == a1 )
  {
    v8 = 0;
  }
  else
  {
    sub_14030D5C0(a1, 0LL, (__int64)v20, a4);
    v8 = 1;
  }
  sub_14030EB30((__int64)CurrentThread, v6);
  v9 = *(_QWORD **)(v6 + 2008);
  i = 0LL;
  while ( v9 )
  {
    i = v9;
    v9 = (_QWORD *)*v9;
  }
  if ( i )
  {
    do
    {
      v11 = (_QWORD **)i[1];
      v12 = (__int64)i;
      v13 = i;
      if ( v11 )
      {
        v14 = *v11;
        for ( i = (_QWORD *)i[1]; v14; v14 = (_QWORD *)*v14 )
          i = v14;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v13 )
            break;
          v13 = i;
        }
      }
      if ( (*(_DWORD *)(v12 + 48) & 0x200000) == 0 )
      {
        sub_14030EBA0((__int64)CurrentThread, v12);
        if ( !(unsigned int)sub_14030EB80(v12) )
        {
          v15 = *(__int64 **)(v12 + 72);
          v16 = *v15;
          if ( *(_QWORD *)(*v15 + 64) )
          {
            v17 = sub_140281750(*v15);
            if ( *(_QWORD *)(v17 + 40) == v4 )
              v5 = 1;
            sub_140280D08(v16, v17);
          }
        }
        sub_140280EF8((__int64)CurrentThread, v12);
        if ( v5 )
          break;
      }
    }
    while ( i );
    v6 = a1;
  }
  sub_14030EA00((__int64)CurrentThread, v6);
  if ( v8 )
    sub_1402D0930((__int64)v20, 0LL);
  return v5;
}
