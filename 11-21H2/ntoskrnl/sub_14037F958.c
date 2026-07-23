/*
 * XREFs of sub_14037F958 @ 0x14037F958
 * Callers:
 *     sub_14037F4B4 @ 0x14037F4B4 (sub_14037F4B4.c)
 * Callees:
 *     sub_140237D58 @ 0x140237D58 (sub_140237D58.c)
 *     sub_140380708 @ 0x140380708 (sub_140380708.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_14037F958(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  bool v12; // cc
  unsigned __int64 v13; // r9
  unsigned int v14; // edi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  __int64 v19; // rdx
  void *v20; // rsp
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // [rsp+20h] [rbp+0h] BYREF
  __int128 v25; // [rsp+28h] [rbp+8h]
  int v26; // [rsp+38h] [rbp+18h]
  unsigned int v27; // [rsp+3Ch] [rbp+1Ch]
  int v28; // [rsp+40h] [rbp+20h]
  int v29; // [rsp+44h] [rbp+24h]

  v4 = *(_DWORD *)(a3 + 24);
  if ( v4 == -1 || !v4 )
    v6 = a3 + 8;
  else
    v6 = *(_QWORD *)a3 + 16LL * (unsigned int)(v4 - 1);
  *(_OWORD *)a2 = *(_OWORD *)v6;
  result = *(_QWORD *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
  if ( *(_DWORD *)result != -1 )
  {
    if ( *(_QWORD *)a2 )
    {
      result = *a1;
      if ( *(_QWORD *)a2 != *a1 )
      {
        if ( v4 == -1 )
        {
          if ( result )
            v14 = *(unsigned __int8 *)(result + 2);
          else
            v14 = 0;
          v15 = 16LL * v14;
          v16 = v15 + 15;
          if ( v15 + 15 < v15 )
            v16 = 0xFFFFFFFFFFFFFF0LL;
          v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
          v18 = alloca(v17);
          v19 = *(unsigned int *)(*(_QWORD *)v6 + 16LL);
          v29 = 0;
          v20 = alloca(v17);
          v26 = 0;
          v28 = 1;
          v25 = 0LL;
          v27 = v14;
          v24 = (__int64)&v24;
          sub_140380708(a1, v19, &v24);
          v21 = 2LL * (v14 - 2);
          v22 = *(&v24 + 2 * v14 - 3);
          v23 = *(&v24 + v21);
          sub_140237D58(a1, (__int64)&v24);
          v12 = v22 <= v23 + 16;
          v11 = v23 + 8;
          v13 = v22 - 8;
        }
        else
        {
          v8 = *(_QWORD *)(v6 - 16);
          v9 = *(_QWORD *)(v6 - 8);
          v10 = v8 + 16;
          v11 = v8 + 8;
          v12 = v9 <= v10;
          v13 = v9 - 8;
        }
        if ( v12 )
          v13 = v11;
        result = a1[2];
        if ( *(_DWORD *)result != -1 )
          result = sub_1405F67D0(a1 + 2, v13, 3LL);
      }
    }
  }
  *(_QWORD *)(a2 + 8) -= 4LL;
  return result;
}
