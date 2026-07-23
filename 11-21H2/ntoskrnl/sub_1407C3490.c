/*
 * XREFs of sub_1407C3490 @ 0x1407C3490
 * Callers:
 *     sub_1406A4D98 @ 0x1406A4D98 (sub_1406A4D98.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067E8E0 @ 0x14067E8E0 (sub_14067E8E0.c)
 *     sub_14069F540 @ 0x14069F540 (sub_14069F540.c)
 *     sub_1406A5080 @ 0x1406A5080 (sub_1406A5080.c)
 *     sub_1406A50C8 @ 0x1406A50C8 (sub_1406A50C8.c)
 *     sub_1406A5158 @ 0x1406A5158 (sub_1406A5158.c)
 *     sub_1406A52D4 @ 0x1406A52D4 (sub_1406A52D4.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406C27B4 @ 0x1406C27B4 (sub_1406C27B4.c)
 *     sub_140721F88 @ 0x140721F88 (sub_140721F88.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1407C3490(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8)
{
  ULONG_PTR v11; // r13
  const void *v12; // r14
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int16 v15; // cx
  unsigned int v16; // edx
  unsigned int v17; // r12d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int i; // eax
  int v21; // ebx
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  __int64 v29; // [rsp+58h] [rbp-60h] BYREF
  __int128 v30; // [rsp+60h] [rbp-58h] BYREF
  __int128 v31; // [rsp+70h] [rbp-48h] BYREF
  __int128 v32; // [rsp+80h] [rbp-38h] BYREF

  v11 = BugCheckParameter3;
  v12 = 0LL;
  v28 = 0LL;
  sub_1407C97FC(&v28);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( !a3 )
  {
    v29 = 0LL;
    if ( a2 )
    {
      v14 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v15 = *(_WORD *)(a2 + 72);
        if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          v15 *= 2;
        v16 = v15;
        v17 = v15 + 16;
        *a6 = v17;
        if ( a5 < 0x10 )
        {
          v21 = -1073741789;
        }
        else
        {
          *(_QWORD *)a4 = v14;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = v15;
          v18 = a5 - 16;
          if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          {
            v19 = v18 >> 1;
            if ( v19 >= *(unsigned __int16 *)(a2 + 72) )
              v19 = *(unsigned __int16 *)(a2 + 72);
            for ( i = 0; i < v19; ++i )
              *(_WORD *)(a4 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
          }
          else
          {
            if ( v18 <= v15 )
              v16 = a5 - 16;
            memmove((void *)(a4 + 16), (const void *)(a2 + 76), v16);
          }
          if ( a5 < v17 )
            v21 = -2147483643;
          else
            v21 = 0;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v14 = *(_QWORD *)(a7 + 168);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        v24 = sub_140721F88(a7 + 208, &v29);
        v25 = v24;
        if ( !v24 )
          break;
        if ( sub_140721FD0(*(_QWORD *)(v24 + 56), a8) && *(_DWORD *)(v25 + 68) == 8 )
        {
          v14 = *(_QWORD *)(v25 + 88);
          break;
        }
      }
      v11 = BugCheckParameter3;
    }
    goto LABEL_4;
  }
  v23 = a3 - 1;
  if ( v23 )
  {
    if ( v23 == 1 )
    {
      *(_QWORD *)&v30 = sub_1406A50C8(a7, a2, a8, v13);
      DWORD2(v30) = 0;
      v21 = sub_1406A52D4(a7, a2, a8, (unsigned int *)&v31 + 2, (unsigned int *)&v31 + 3);
      if ( v21 >= 0 )
      {
        v21 = sub_1406A5158(a7, a2, a8, (_DWORD *)&v32 + 1, (unsigned int *)&v32 + 2);
        if ( v21 >= 0 )
        {
          DWORD1(v31) = sub_14067E8E0(a7, a2, a8);
          LODWORD(v32) = sub_1406A5080(a7, a2, a8);
          if ( *(_WORD *)(a2 + 74) )
          {
            if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
              v27 = sub_1406BF400(v11, *(unsigned int *)(a2 + 48), &v28);
            else
              v27 = sub_1407C9820(v11);
            v12 = (const void *)v27;
          }
          v21 = sub_1406C27B4((__int64)&v30, v12, *(unsigned __int16 *)(a2 + 74), a4, a5, a6);
        }
      }
    }
    else
    {
      v21 = -1073741811;
    }
  }
  else
  {
    *(_QWORD *)&v30 = sub_1406A50C8(a7, a2, a8, v13);
    DWORD2(v30) = 0;
    if ( *(_WORD *)(a2 + 74) )
    {
      if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
        v26 = sub_1406BF400(v11, *(unsigned int *)(a2 + 48), &v28);
      else
        v26 = sub_1407C9820(v11);
      v12 = (const void *)v26;
    }
    v21 = sub_14069F540((__int64)&v30, a2, v12, *(unsigned __int16 *)(a2 + 74), a4, a5, a6);
  }
LABEL_20:
  if ( v12 )
  {
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      sub_1406BF450(v11, &v28);
    else
      sub_1407C97C0(v11, &v28);
  }
  return (unsigned int)v21;
}
