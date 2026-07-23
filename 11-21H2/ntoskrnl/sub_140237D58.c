/*
 * XREFs of sub_140237D58 @ 0x140237D58
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_140237D58 @ 0x140237D58 (sub_140237D58.c)
 *     sub_14037ED14 @ 0x14037ED14 (sub_14037ED14.c)
 *     sub_14037F4B4 @ 0x14037F4B4 (sub_14037F4B4.c)
 *     sub_14037F958 @ 0x14037F958 (sub_14037F958.c)
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_140380708 @ 0x140380708 (sub_140380708.c)
 * Callees:
 *     sub_140237D58 @ 0x140237D58 (sub_140237D58.c)
 *     sub_140380708 @ 0x140380708 (sub_140380708.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 */

__int64 __fastcall sub_140237D58(__int64 *a1, __int64 a2)
{
  __int64 *v4; // r14
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  __int64 v12; // rdx
  void *v13; // rsp
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 *v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp+0h] BYREF
  __int128 v25; // [rsp+28h] [rbp+8h]
  int v26; // [rsp+38h] [rbp+18h]
  unsigned int v27; // [rsp+3Ch] [rbp+1Ch]
  int v28; // [rsp+40h] [rbp+20h]
  int v29; // [rsp+44h] [rbp+24h]

  v4 = (__int64 *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
  result = *v4;
  if ( *(_DWORD *)*v4 == -1 )
  {
    if ( *(_DWORD *)(a2 + 24) == -1 )
      *(_QWORD *)(a2 + 8) = 0LL;
    else
      *(_DWORD *)(a2 + 24) = 0;
  }
  else
  {
    result = *(unsigned int *)(a2 + 24);
    if ( (_DWORD)result == -1 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( v6 )
      {
        result = *a1;
        if ( v6 != *a1 )
        {
          if ( result )
            v7 = *(unsigned __int8 *)(result + 2);
          else
            v7 = 0;
          v8 = 16LL * v7;
          v9 = v8 + 15;
          if ( v8 + 15 < v8 )
            v9 = 0xFFFFFFFFFFFFFF0LL;
          v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
          v11 = alloca(v10);
          v12 = *(unsigned int *)(v6 + 16);
          v29 = 0;
          v13 = alloca(v10);
          v26 = 0;
          v28 = 1;
          v25 = 0LL;
          v27 = v7;
          v24 = (__int64)&v24;
          sub_140380708(a1, v12, &v24);
          v14 = 2LL * (v7 - 2);
          v15 = *(&v24 + 2 * v7 - 3);
          v16 = *(&v24 + v14);
          sub_140237D58(a1, &v24);
          v17 = v15 - 8;
          if ( v15 <= v16 + 16 )
            v17 = v16 + 8;
          result = *v4;
          if ( *(_DWORD *)*v4 != -1 )
            result = sub_1405F6710(v4, v17);
        }
      }
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    else
    {
      if ( (unsigned int)result > 1 )
      {
        v18 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(result - 2));
        v19 = v18[1];
        v20 = *v18;
        v21 = v19 - 8;
        v22 = v20 + 16;
        v23 = v20 + 8;
        if ( v19 <= v22 )
          v21 = v23;
        result = sub_1405F6710(v4, v21);
      }
      *(_DWORD *)(a2 + 24) = 0;
    }
  }
  return result;
}
