/*
 * XREFs of sub_1403903B8 @ 0x1403903B8
 * Callers:
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 *     sub_1405F9270 @ 0x1405F9270 (sub_1405F9270.c)
 * Callees:
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 */

_DWORD *__fastcall sub_1403903B8(__int64 *a1, __int64 *a2)
{
  _QWORD *v3; // rsi
  _DWORD *result; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  unsigned int v11; // edx
  void *v12; // rsp
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp+0h] BYREF
  __int128 v18; // [rsp+28h] [rbp+8h]
  int v19; // [rsp+38h] [rbp+18h]
  unsigned int v20; // [rsp+3Ch] [rbp+1Ch]
  int v21; // [rsp+40h] [rbp+20h]
  int v22; // [rsp+44h] [rbp+24h]

  v3 = (_QWORD *)((unsigned __int64)(a2 + 2) & -(__int64)(a2 != 0LL));
  result = (_DWORD *)*v3;
  if ( *(_DWORD *)*v3 != -1 )
  {
    v5 = *a1;
    if ( *a1 )
    {
      result = (_DWORD *)*a2;
      if ( v5 != *a2 )
      {
        if ( result )
          v6 = *((unsigned __int8 *)result + 2);
        else
          v6 = 0;
        v7 = 16LL * v6;
        v8 = v7 + 15;
        if ( v7 + 15 < v7 )
          v8 = 0xFFFFFFFFFFFFFF0LL;
        v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
        v10 = alloca(v9);
        v11 = *(_DWORD *)(v5 + 16);
        v22 = 0;
        v12 = alloca(v9);
        v19 = 0;
        v21 = 1;
        v18 = 0LL;
        v20 = v6;
        v17 = (__int64)&v17;
        sub_140380C38((__int64)a2, v11, (__int64)&v17);
        v13 = 2LL * (v6 - 2);
        v14 = *(&v17 + 2 * v6 - 3);
        v15 = *(&v17 + v13);
        sub_140237ED8(a2, (__int64)&v17);
        v16 = v14 - 8;
        if ( v14 <= v15 + 16 )
          v16 = v15 + 8;
        result = (_DWORD *)*v3;
        if ( *(_DWORD *)*v3 != -1 )
          return (_DWORD *)sub_1405F6710(v3, v16);
      }
    }
  }
  return result;
}
