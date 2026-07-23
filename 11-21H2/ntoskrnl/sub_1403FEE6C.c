/*
 * XREFs of sub_1403FEE6C @ 0x1403FEE6C
 * Callers:
 *     sub_1403FF3BC @ 0x1403FF3BC (sub_1403FF3BC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140400BA4 @ 0x140400BA4 (sub_140400BA4.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400BD4 @ 0x140400BD4 (sub_140400BD4.c)
 *     sub_140400C18 @ 0x140400C18 (sub_140400C18.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_140400CD8 @ 0x140400CD8 (sub_140400CD8.c)
 *     sub_140400D28 @ 0x140400D28 (sub_140400D28.c)
 *     sub_140400D40 @ 0x140400D40 (sub_140400D40.c)
 *     sub_140400DA0 @ 0x140400DA0 (sub_140400DA0.c)
 *     sub_140400DB8 @ 0x140400DB8 (sub_140400DB8.c)
 *     sub_1404055A0 @ 0x1404055A0 (sub_1404055A0.c)
 *     sub_1404055F4 @ 0x1404055F4 (sub_1404055F4.c)
 */

__int64 __fastcall sub_1403FEE6C(
        __int64 a1,
        __int64 a2,
        struct _KSEMAPHORE *a3,
        __int64 a4,
        __int64 a5,
        struct _KSEMAPHORE *a6)
{
  struct _KSEMAPHORE *v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 i; // rbx
  __int64 v26; // [rsp+58h] [rbp-100h]
  char v27; // [rsp+7Fh] [rbp-D9h] BYREF

  v9 = (struct _KSEMAPHORE *)sub_140400C18(a2);
  v10 = sub_140400AB4(64LL);
  v26 = sub_140400BBC((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFE0uLL, 128LL, v10);
  v11 = sub_1404055A0(*(_DWORD *)(a1 + 24), (int)a1 + 120, 0, (int)a1 + 136, a5, a6);
  if ( !v11 )
  {
    sub_140400D28(1LL, a3);
    v12 = *(_DWORD *)(a1 + 24);
    v13 = 0LL;
    if ( v12 )
    {
      while ( 1 )
      {
        v14 = sub_140400C30(*(_QWORD *)(a1 + 8 * v13 + 120));
        v11 = sub_140400BA4(v14, v9);
        if ( v11 )
          break;
        sub_140400DA0(v9, 1LL, v9);
        sub_140400CD8((_DWORD)v9, (_DWORD)a3, a4, a5, (__int64)a6);
        v11 = sub_140400BA4(a4, a3);
        if ( v11 )
          break;
        v12 = *(_DWORD *)(a1 + 24);
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v12 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v15 = 0LL;
      if ( *(_DWORD *)(a1 + 20) )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(a1 + 8 * v15 + 48);
          if ( v16 == 1 )
            return 209715726;
          if ( (v16 & 1) == 0 )
            return 209715726;
          sub_140400D40(v16, v9);
          sub_1404055F4(a3, v9, 0LL, 0LL, *(_QWORD *)(a1 + 8 * v15 + 152), a5, (__int64)a6);
          if ( !(unsigned int)sub_140400C90(v26, 1LL) )
            return 209715726;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= *(_DWORD *)(a1 + 20) )
          {
            v12 = *(_DWORD *)(a1 + 24);
            goto LABEL_12;
          }
        }
      }
      else
      {
LABEL_12:
        v17 = 0LL;
        if ( v12 )
        {
          do
          {
            v18 = sub_140400C18(a2);
            v19 = sub_140400C30(*(_QWORD *)(a1 + 8 * v17 + 120));
            v11 = sub_140400BA4(v19, v18);
            if ( v11 )
              break;
            v20 = sub_140400C18(a2);
            v21 = sub_140400C18(a2);
            sub_140400DA0(v21, 1LL, v20);
            v22 = sub_140400C18(a2);
            sub_140400DB8(v22, a2, *(_DWORD *)(a1 + 20), 0, a5, (__int64)a6);
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 20); i = (unsigned int)(i + 1) )
            {
              sub_140400BD4(*(_QWORD *)(a1 + 8 * i + 152), a2, 0, (_DWORD)a3, a5, (__int64)a6);
              v11 = sub_140400BA4(a3, *(_QWORD *)(a1 + 8LL * (unsigned int)(v17 + i * *(_DWORD *)(a1 + 24)) + 160));
              if ( v11 )
                return v11;
            }
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < *(_DWORD *)(a1 + 24) );
        }
      }
    }
  }
  return v11;
}
