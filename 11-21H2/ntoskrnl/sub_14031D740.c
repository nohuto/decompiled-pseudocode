/*
 * XREFs of sub_14031D740 @ 0x14031D740
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14023A0E4 @ 0x14023A0E4 (sub_14023A0E4.c)
 *     sub_14027A9D0 @ 0x14027A9D0 (sub_14027A9D0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405A7708 @ 0x1405A7708 (sub_1405A7708.c)
 */

__int64 __fastcall sub_14031D740(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rdx
  int v4; // eax
  unsigned __int64 v5; // rdx
  unsigned __int64 *v7; // rcx
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rax
  _BYTE *v15; // rbx
  _BYTE *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  ULONG_PTR v20; // r9
  ULONG_PTR v21; // rdx
  int v22; // eax
  unsigned __int64 *v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v4 = sub_14031D9B0(*(_QWORD *)(a1 + 56), v3, 0LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(a1 + 8LL * v4 + 24);
        *(_QWORD *)(a1 + 72) = v5;
        if ( v4 == 1 )
          return 0LL;
        sub_14020D8D0(v2, v5);
        *(_QWORD *)(a1 + 72) = 0LL;
      }
    }
  }
  v24 = 0;
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    *(_QWORD *)(a1 + 72) = 0xFFFFF6FB7DBEDF68uLL;
    sub_14031DE00(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  }
  v7 = (unsigned __int64 *)(a1 + 48);
  v23 = (unsigned __int64 *)(a1 + 48);
  v8 = 3;
  do
  {
    v9 = *v7;
    v10 = *(_QWORD *)*v7;
    if ( *v7 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        v17 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8 * ((v9 >> 3) & 0x1FF));
          v19 = v10 | 0x20;
          if ( (v18 & 0x20) == 0 )
            v19 = *(_QWORD *)*v7;
          v10 = v19;
          if ( (v18 & 0x42) != 0 )
            v10 = v19 | 0x42;
        }
      }
      v7 = v23;
    }
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 0x80u) != 0LL )
      {
        v20 = *(_QWORD *)(a1 + 16);
        if ( (v20 & 1) == 0 || *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          v21 = *(_QWORD *)a1;
          if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v21 <= 0xFFFFF6FFFFFFFFFFuLL )
            KeBugCheckEx(0x50u, v21, *(_QWORD *)(a1 + 8), v20, 8uLL);
        }
        v22 = sub_1405A7708(a1, v9);
        if ( v22 >= 0 )
          v22 = -1073740748;
        v12 = v22;
        goto LABEL_36;
      }
      v11 = *(_QWORD *)(a1 + 72);
      if ( v11 && v9 != v11 )
      {
        sub_14031DE00(v2, v9, 0LL);
        sub_14020D8D0(v2, *(_QWORD *)(a1 + 72));
        v7 = v23;
        *(_QWORD *)(a1 + 72) = v9;
      }
    }
    else
    {
      if ( !sub_14023A0E4(v9) )
        goto LABEL_47;
      if ( !v10 )
      {
        v14 = *(_QWORD *)(a1 + 16);
        if ( (v14 & 1) != 0 )
        {
          v16 = (_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( *v16 == 8 )
          {
            v16[44] = 1;
LABEL_47:
            v12 = -1073741819;
LABEL_36:
            sub_14027A9D0(a1 + 56);
            return (unsigned int)v12;
          }
        }
      }
      v12 = sub_140353230(a1, v8);
      v24 = v12;
      if ( v12 < 0 )
        goto LABEL_36;
      ++v8;
      v7 = v23 + 1;
    }
    v23 = --v7;
    --v8;
  }
  while ( v8 );
  v12 = v24;
  if ( v24 < 0 )
    goto LABEL_36;
  v13 = *(_QWORD *)(a1 + 16);
  if ( (v13 & 1) != 0 )
  {
    v15 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v15 == 8 && !sub_140317A10(*(_QWORD *)(a1 + 24)) )
    {
      v15[44] = 1;
      v12 = -1073741819;
      goto LABEL_36;
    }
  }
  return (unsigned int)v12;
}
