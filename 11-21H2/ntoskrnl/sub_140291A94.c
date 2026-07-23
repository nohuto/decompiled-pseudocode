/*
 * XREFs of sub_140291A94 @ 0x140291A94
 * Callers:
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_140208368 @ 0x140208368 (sub_140208368.c)
 *     sub_140291710 @ 0x140291710 (sub_140291710.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210664 @ 0x140210664 (sub_140210664.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 */

int __fastcall sub_140291A94(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r10
  char v7; // dl
  char v8; // cl
  unsigned int v9; // esi
  bool v10; // r15
  volatile signed __int32 *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rdi
  bool v15; // zf
  int v16; // r9d
  __int64 v17; // r12
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  _QWORD *v21; // r9
  char v23; // [rsp+30h] [rbp-68h] BYREF
  int v24; // [rsp+34h] [rbp-64h]
  int v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  char v28; // [rsp+A0h] [rbp+8h]
  char v29; // [rsp+A8h] [rbp+10h]
  __int64 v30; // [rsp+B0h] [rbp+18h]

  v30 = (__int64)a3;
  v4 = 0LL;
  v24 = 0;
  v23 = 0;
  v7 = 0;
  v26 = 0LL;
  v8 = 0;
  v9 = *(unsigned __int16 *)(a1 + 114);
  v10 = 0;
  v29 = 0;
  v28 = 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v9;
    v26 = a2 + 136;
    LODWORD(v11) = 1;
    v8 = 1;
    v28 = 1;
  }
  else
  {
    LODWORD(v11) = 1;
    if ( a3 )
    {
      v7 = 1;
      v29 = 1;
    }
    else
    {
      v10 = a4 != 0;
    }
  }
  if ( !v9 )
    goto LABEL_5;
  while ( 2 )
  {
    _BitScanReverse((unsigned int *)&v11, v9);
    v12 = (_QWORD *)(16LL * (unsigned int)v11 + a1 + 136);
    v25 = v9 ^ (1 << (char)v11);
    v27 = 16LL * (unsigned int)v11;
    v13 = (_QWORD *)*v12;
    v24 = (int)v11;
    do
    {
      v14 = (__int64)(v13 - 27);
      if ( v8 )
      {
        *(_QWORD *)(v14 + 944) = a2;
      }
      else
      {
        *(_DWORD *)(v14 + 116) &= ~0x2000u;
        v15 = (*(_DWORD *)(v14 + 120) & 0x400000) == 0;
        *(_QWORD *)(v14 + 944) = v4;
        if ( !v15 )
        {
          v11 = *(volatile signed __int32 **)(v14 + 968);
          _InterlockedAnd(v11, 0xFFFBFFFF);
        }
      }
      v13 = (_QWORD *)*v13;
      if ( v10 )
      {
        LODWORD(v11) = sub_1402F6970(a4, v14);
      }
      else
      {
        if ( !v7 )
          continue;
        sub_1402103E0(v14, a1, (__int64)a3, 0, (bool *)&v23);
        LODWORD(v11) = sub_140210664(v30, v14, *(char *)(v14 + 195), v16, v23);
        v4 = 0LL;
      }
      v7 = v29;
      v8 = v28;
    }
    while ( v13 != v12 );
    v9 = v25;
    v17 = v27;
    if ( v8 )
    {
      v18 = (_QWORD *)*v12;
      a3 = (_QWORD *)v12[1];
      if ( *(_QWORD **)(*v12 + 8LL) != v12
        || (_QWORD *)*a3 != v12
        || (v19 = v26,
            *a3 = v18,
            v20 = (_QWORD *)(v17 + v19),
            v18[1] = a3,
            v21 = (_QWORD *)v20[1],
            *(_QWORD **)(*v20 + 8LL) != v20)
        || (_QWORD *)*v21 != v20
        || *(_QWORD **)(*v18 + 8LL) != v18
        || (_QWORD *)*a3 != v18 )
      {
        __fastfail(3u);
      }
      *v21 = v18;
      v20[1] = v18[1];
      v11 = (volatile signed __int32 *)v18[1];
      *(_QWORD *)v11 = v20;
      v18[1] = v21;
      v8 = v28;
    }
    v12[1] = v12;
    *v12 = v12;
    if ( v9 )
    {
      v7 = v29;
      continue;
    }
    break;
  }
LABEL_5:
  *(_WORD *)(a1 + 114) = v4;
  return (int)v11;
}
