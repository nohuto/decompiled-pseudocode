/*
 * XREFs of sub_140980A20 @ 0x140980A20
 * Callers:
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_14025247C @ 0x14025247C (sub_14025247C.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405BA624 @ 0x1405BA624 (sub_1405BA624.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 */

__int64 __fastcall sub_140980A20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 *v6; // rax
  unsigned __int8 *i; // rbx
  unsigned __int8 **v8; // rax
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // rcx
  unsigned __int8 *j; // rax
  unsigned __int8 **v13; // rax
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // rcx
  _OWORD v17[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  sub_14030D5C0((ULONG_PTR)a1, 0LL, (__int64)v17, a4);
  *(_BYTE *)(a1[210] + 341LL) |= 1u;
  v6 = (unsigned __int8 *)a1[251];
  i = 0LL;
  while ( v6 )
  {
    i = v6;
    v6 = *(unsigned __int8 **)v6;
  }
  while ( i )
  {
    v8 = (unsigned __int8 **)*((_QWORD *)i + 1);
    v9 = i;
    v10 = i;
    if ( v8 )
    {
      v11 = *v8;
      for ( i = (unsigned __int8 *)*((_QWORD *)i + 1); v11; v11 = *(unsigned __int8 **)v11 )
        i = v11;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned __int8 *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || *(unsigned __int8 **)i == v10 )
          break;
        v10 = i;
      }
    }
    sub_14030B7F0((__int64)CurrentThread, (__int64)v9);
    sub_14030EB64((__int64)v9);
    sub_1407BC0B0(v9, 0LL, 0);
  }
  for ( j = (unsigned __int8 *)a1[158]; j; j = *(unsigned __int8 **)j )
    i = j;
  while ( i )
  {
    *((_QWORD *)i + 6) = 0LL;
    sub_1405BA624((__int64)a1, (__int64)i);
    v13 = (unsigned __int8 **)*((_QWORD *)i + 1);
    v14 = i;
    if ( v13 )
    {
      v15 = *v13;
      for ( i = (unsigned __int8 *)*((_QWORD *)i + 1); v15; v15 = *(unsigned __int8 **)v15 )
        i = v15;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned __int8 *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || *(unsigned __int8 **)i == v14 )
          break;
        v14 = i;
      }
    }
  }
  sub_14025247C((__int64)a1, 0);
  return sub_1402D0930((__int64)v17, 0LL);
}
