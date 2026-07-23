/*
 * XREFs of sub_140381C90 @ 0x140381C90
 * Callers:
 *     sub_14037ED14 @ 0x14037ED14 (sub_14037ED14.c)
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_1403904D4 @ 0x1403904D4 (sub_1403904D4.c)
 *     sub_140396030 @ 0x140396030 (sub_140396030.c)
 * Callees:
 *     sub_140382944 @ 0x140382944 (sub_140382944.c)
 *     sub_140382E40 @ 0x140382E40 (sub_140382E40.c)
 *     sub_140396008 @ 0x140396008 (sub_140396008.c)
 *     sub_140396030 @ 0x140396030 (sub_140396030.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 *     sub_1405F6854 @ 0x1405F6854 (sub_1405F6854.c)
 */

__int64 __fastcall sub_140381C90(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 *v4; // rdi
  unsigned __int64 v6; // rsi
  char v7; // dl
  __int64 v8; // rcx
  char *v9; // rax
  const void *v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rcx
  _DWORD *v16; // rdi
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD **v29; // rdi
  __int128 v30; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v30 = 0LL;
  v6 = *v4;
  v7 = *(_BYTE *)(*v4 + 3);
  v8 = (unsigned __int16)*(_DWORD *)*v4;
  v9 = (char *)v4[1];
  if ( v7 )
  {
    v10 = v9 + 4;
    v11 = 510;
    v12 = 4 * v8 + 12;
  }
  else
  {
    v10 = v9 + 16;
    v12 = 16 * v8;
    v11 = 127;
  }
  v13 = v12 - (_QWORD)v9;
  v14 = v6 + v13;
  if ( v6 + v13 )
  {
    memmove(v9, v10, v6 + v13);
    v7 = *(_BYTE *)(v6 + 3);
  }
  --*(_WORD *)v6;
  if ( v7 )
    --*(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v6 )
  {
    if ( !(unsigned __int16)*(_DWORD *)v6 && !*(_BYTE *)(v6 + 3) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v29 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *(_BYTE *)(v6 + 2) != 2 )
      {
        *(_QWORD *)a1 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        *(_QWORD *)a1 = sub_1405F67D0(a1 + 16, v6 + 8, 1LL);
        if ( **v29 != -1 )
        {
          sub_1405F6710(a1 + 16, v6 + 8);
          if ( **v29 != -1 )
          {
            sub_1405F6710(a1 + 16, v6 + 8);
            if ( **v29 != -1 )
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
      v18 = sub_140382944(a1, a2);
      if ( !v18 )
        return (unsigned int)-1073741818;
      v19 = (unsigned __int16)*(_DWORD *)v6;
      if ( v19 < v11 )
      {
        sub_140396030(a1, a2, v18);
        v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v18 & 1) != 0 )
        {
          v26 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = v26;
          v27 = (unsigned __int16)*(_DWORD *)v26;
          if ( *(_BYTE *)(v26 + 3) )
            v28 = 4 * v27 + 16;
          else
            v28 = 16 * (v27 + 1);
          v4[1] = v26 + v28 - v14;
        }
      }
      else
      {
        if ( (v18 & 1) != 0 )
        {
          v23 = v4[1];
          v24 = v19 - v11 + 1;
          if ( *(_BYTE *)(v6 + 3) )
            v25 = v23 + 4 * v24;
          else
            v25 = v23 + 16 * v24;
          v4[1] = v25;
        }
        if ( *(_BYTE *)(v6 + 3) )
        {
          v20 = *(v4 - 2);
          v21 = 32LL * !(v18 & 1) + *(v4 - 1) - 16;
          v22 = v21 <= v20 + 16 ? v20 + 8 : v21 - 8;
          if ( **(_DWORD **)(a1 + 16) != -1 )
            sub_1405F6710(a1 + 16, v22);
        }
      }
    }
    v15 = *v4;
    v16 = (_DWORD *)v4[1];
    if ( v16 == (_DWORD *)(v15 + 16)
      && *(_BYTE *)(v15 + 3)
      && (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, const void *))sub_140382E40)(
                         a2,
                         0LL,
                         &v30,
                         v10) )
    {
      **((_DWORD **)&v30 + 1) = *v16;
    }
  }
  return v3;
}
