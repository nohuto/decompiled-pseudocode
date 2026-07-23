/*
 * XREFs of sub_1403901F0 @ 0x1403901F0
 * Callers:
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 * Callees:
 *     sub_140382E40 @ 0x140382E40 (sub_140382E40.c)
 *     sub_1403839C0 @ 0x1403839C0 (sub_1403839C0.c)
 *     sub_1403909DC @ 0x1403909DC (sub_1403909DC.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_1403901F0(_DWORD *a1, __int64 a2, int a3)
{
  int v3; // r9d
  __int64 *v7; // r9
  int *v8; // r12
  __int64 v9; // r15
  int v10; // eax
  int v11; // esi
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  int **v18; // r13
  _DWORD **v19; // rcx
  int *v20; // rdx
  int v21; // r15d
  int v22; // eax
  int v23; // eax
  _DWORD **v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  int v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // eax
  __int128 v31; // [rsp+20h] [rbp-10h] BYREF
  int v32; // [rsp+78h] [rbp+48h] BYREF
  int v33; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp+58h]

  v3 = *(_DWORD *)(a2 + 24);
  v32 = a3;
  v7 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v3 - 1));
  v31 = 0LL;
  v8 = (int *)v7[1];
  v9 = *v7;
  v33 = *v8;
  LOBYTE(v10) = sub_1403839C0(a1, &v32, &v33);
  v11 = v10;
  if ( v10 > 0 )
  {
    if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
    {
      v33 = v8[1];
      v32 = a3;
LABEL_6:
      LOBYTE(v13) = sub_1403839C0(a1, &v32, &v33);
      if ( v13 < 0 )
        goto LABEL_4;
      return 0LL;
    }
    v14 = 1;
  }
  else
  {
    if ( (unsigned __int64)v8 > v9 + 16 )
    {
      if ( !v10 )
      {
LABEL_4:
        *v8 = a3;
        return 1LL;
      }
      v32 = *(v8 - 1);
      v33 = a3;
      goto LABEL_6;
    }
    v14 = 0;
  }
  if ( !(unsigned int)sub_140382E40(a2, v14, (__int64)&v31) )
    goto LABEL_4;
  v15 = (_DWORD *)*((_QWORD *)&v31 + 1);
  if ( v11 > 0 )
  {
    v33 = **((_DWORD **)&v31 + 1);
    v32 = a3;
    LOBYTE(v25) = sub_1403839C0(a1, &v32, &v33);
    if ( v25 < 0 )
      goto LABEL_4;
    v34 = (unsigned __int64)(a1 + 4);
    if ( **(_DWORD **)((unsigned __int64)(a1 + 4) & -(__int64)(a1 != 0LL)) == -1 )
    {
      v26 = *(_QWORD *)(v9 + 8);
      v32 = a3;
      v27 = *(_DWORD *)(v26 + 16);
      v33 = v27;
      LOBYTE(v28) = sub_1403839C0(a1, &v32, &v33);
      if ( v28 < 0 )
      {
        *v15 = v27;
        goto LABEL_4;
      }
      return 0LL;
    }
    v16 = 1LL;
  }
  else
  {
    if ( !v11 )
    {
      **((_DWORD **)&v31 + 1) = a3;
      goto LABEL_4;
    }
    v34 = (unsigned __int64)(a1 + 4);
    v16 = 0LL;
  }
  v18 = (int **)sub_1403909DC(&v31, v16, 0LL);
  v19 = (_DWORD **)(v34 & -(__int64)(a1 != 0LL));
  if ( **v19 == -1 )
    v20 = *v18;
  else
    v20 = (int *)sub_1405F67D0(v19, v18, v17);
  if ( v20 )
  {
    v21 = 0;
    if ( v11 >= 0 )
    {
      v29 = v20[4];
      v33 = v29;
      v32 = a3;
      LOBYTE(v30) = sub_1403839C0(a1, &v32, &v33);
      if ( v30 >= 0 )
      {
LABEL_24:
        v24 = (_DWORD **)(v34 & -(__int64)(a1 != 0LL));
        if ( **v24 != -1 )
          sub_1405F6710(v24, v18);
        if ( v21 )
          goto LABEL_4;
        return 0LL;
      }
      *v15 = v29;
    }
    else
    {
      v22 = *v20;
      v33 = a3;
      v32 = v20[(unsigned __int16)v22 + 3];
      LOBYTE(v23) = sub_1403839C0(a1, &v32, &v33);
      if ( v23 >= 0 )
        goto LABEL_24;
      *v15 = a3;
    }
    v21 = 1;
    goto LABEL_24;
  }
  return 0xFFFFFFFFLL;
}
