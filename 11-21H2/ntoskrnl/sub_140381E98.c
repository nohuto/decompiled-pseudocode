/*
 * XREFs of sub_140381E98 @ 0x140381E98
 * Callers:
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_140396180 @ 0x140396180 (sub_140396180.c)
 * Callees:
 *     sub_14038262C @ 0x14038262C (sub_14038262C.c)
 *     sub_140392750 @ 0x140392750 (sub_140392750.c)
 *     sub_140396008 @ 0x140396008 (sub_140396008.c)
 *     sub_140396180 @ 0x140396180 (sub_140396180.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 *     sub_1405F6854 @ 0x1405F6854 (sub_1405F6854.c)
 */

__int64 __fastcall sub_140381E98(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 *v4; // rdi
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  char v8; // dl
  __int64 v9; // r15
  __int64 v10; // r15
  unsigned int v11; // ebp
  const void *v12; // rax
  size_t v13; // r15
  unsigned __int64 v14; // rcx
  _DWORD *v15; // rdi
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  _DWORD **v28; // rdi
  __int128 v29; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v29 = 0LL;
  v6 = *v4;
  v7 = (char *)v4[1];
  v8 = *(_BYTE *)(*v4 + 3);
  v9 = (unsigned __int16)*(_DWORD *)*v4;
  if ( v8 )
  {
    v10 = 8 * v9 + 8;
    v11 = 255;
    v12 = v7 + 8;
  }
  else
  {
    v10 = 16 * v9;
    v12 = v7 + 16;
    v11 = 127;
  }
  v13 = v6 + v10 - (_QWORD)v7;
  if ( v13 )
  {
    memmove(v7, v12, v13);
    v8 = *(_BYTE *)(v6 + 3);
  }
  --*(_WORD *)v6;
  if ( v8 )
    --*(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v6 )
  {
    if ( !(unsigned __int16)*(_DWORD *)v6 && !*(_BYTE *)(v6 + 3) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v28 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *(_BYTE *)(v6 + 2) != 2 )
      {
        *(_QWORD *)a1 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        *(_QWORD *)a1 = sub_1405F67D0(a1 + 16, v6 + 8, 1LL);
        if ( **v28 != -1 )
        {
          sub_1405F6710(a1 + 16, v6 + 8);
          if ( **v28 != -1 )
          {
            sub_1405F6710(a1 + 16, v6 + 8);
            if ( **v28 != -1 )
              sub_1405F6854(a1 + 16, v6 + 8);
          }
        }
      }
      sub_140396008(a1, v6);
    }
  }
  else
  {
    if ( (unsigned __int16)*(_DWORD *)v6 < v11 )
    {
      v17 = sub_14038262C(a1, a2);
      if ( !v17 )
        return (unsigned int)-1073741818;
      v18 = (unsigned __int16)*(_DWORD *)v6;
      if ( v18 < v11 )
      {
        sub_140396180(a1, a2, v17);
        v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v17 & 1) != 0 )
        {
          v22 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = v22;
          v23 = (unsigned __int16)*(_DWORD *)v22;
          if ( *(_BYTE *)(v22 + 3) )
            v24 = 8 * v23 + 16;
          else
            v24 = 16 * (v23 + 1);
          v4[1] = v22 + v24 - v13;
        }
      }
      else
      {
        if ( (v17 & 1) != 0 )
        {
          v25 = v4[1];
          v26 = v18 - v11 + 1;
          if ( *(_BYTE *)(v6 + 3) )
            v27 = v25 + 8 * v26;
          else
            v27 = v25 + 16 * v26;
          v4[1] = v27;
        }
        if ( *(_BYTE *)(v6 + 3) )
        {
          v19 = *(v4 - 2);
          v20 = 32LL * !(v17 & 1) + *(v4 - 1) - 16;
          v21 = v20 <= v19 + 16 ? v19 + 8 : v20 - 8;
          if ( **(_DWORD **)(a1 + 16) != -1 )
            sub_1405F6710(a1 + 16, v21);
        }
      }
    }
    v14 = *v4;
    v15 = (_DWORD *)v4[1];
    if ( v15 == (_DWORD *)(v14 + 16) && *(_BYTE *)(v14 + 3) && (unsigned int)sub_140392750(a2, 0LL, &v29) )
      **((_DWORD **)&v29 + 1) = *v15;
  }
  return v3;
}
