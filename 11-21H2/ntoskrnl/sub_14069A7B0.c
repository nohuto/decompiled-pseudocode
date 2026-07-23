/*
 * XREFs of sub_14069A7B0 @ 0x14069A7B0
 * Callers:
 *     sub_1407C6580 @ 0x1407C6580 (sub_1407C6580.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140718B18 @ 0x140718B18 (sub_140718B18.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C8130 @ 0x1407C8130 (sub_1407C8130.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14069A7B0(ULONG_PTR BugCheckParameter3, int a2, _WORD *a3, int a4, __int64 a5)
{
  int v6; // ebx
  char v9; // r12
  unsigned int v10; // ebp
  _WORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r11d
  unsigned __int8 *v16; // r10
  __int16 v17; // ax
  unsigned __int16 v18; // dx
  _QWORD *v20; // rax
  unsigned __int16 v21; // dx
  int v22; // eax
  signed int v23; // edi
  unsigned int v24; // eax
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+38h] [rbp-50h] BYREF
  int v27; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp+20h]

  LODWORD(BugCheckParameter4) = a4;
  v6 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v9 = 0;
  sub_1407C97FC(&v25);
  if ( ((*a3 - 26220) & 0xFDFF) != 0 )
    return 0LL;
  v10 = 0;
  if ( !a3[1] )
    return 0LL;
  do
  {
    v11 = &a3[4 * v10];
    if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, *((unsigned int *)v11 + 1), 0LL) )
      goto LABEL_18;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v12 = sub_1406BF400(BugCheckParameter3, *((unsigned int *)v11 + 1));
    else
      v12 = sub_1407C9820(BugCheckParameter3);
    v13 = v12;
    if ( !v12 )
    {
      sub_14020A890(a5, 0, 23, 0xC000009A, 0);
      return 3221225626LL;
    }
    v14 = -4 - *(_DWORD *)(v12 - 4);
    if ( v14 < 0x4C || (v15 = *(unsigned __int16 *)(v13 + 72), v15 > v14 - 76) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v25);
      else
        sub_1407C97C0(BugCheckParameter3, &v25);
      goto LABEL_18;
    }
    v16 = (unsigned __int8 *)(v13 + 76);
    v17 = *(_WORD *)(v13 + 2);
    *((_QWORD *)&v26 + 1) = v13 + 76;
    WORD1(v26) = v15;
    LOWORD(v26) = v15;
    if ( *a3 == 26732 )
    {
      if ( (v17 & 0x20) != 0 )
      {
        for ( ; v15; --v15 )
        {
          v18 = *v16;
          if ( (unsigned __int8)v18 >= 0x61u )
          {
            if ( (unsigned __int8)v18 > 0x7Au )
            {
              v20 = sub_140347DB0();
              v18 = sub_1403477B0(v20[154], v21);
            }
            else
            {
              v18 -= 32;
            }
          }
          ++v16;
          v6 = v18 + 37 * v6;
        }
        goto LABEL_14;
      }
      v22 = sub_140718B68(&v26);
      goto LABEL_34;
    }
    if ( (v17 & 0x20) == 0 )
    {
      v22 = sub_140718B18(&v26);
LABEL_34:
      v6 = v22;
      goto LABEL_14;
    }
    v27 = 0;
    if ( v15 < 4 )
    {
      if ( !v15 )
        goto LABEL_14;
    }
    else
    {
      v15 = 4;
    }
    memmove(&v27, v16, v15);
    v6 = v27;
LABEL_14:
    if ( *((_DWORD *)v11 + 2) != v6 )
    {
      v23 = -1073741492;
      v9 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        v24 = 16;
        goto LABEL_46;
      }
      sub_14020A890(a5, 1, 23, 0xC000014C, 0x20u);
      v23 = sub_14071F300(BugCheckParameter3, (unsigned int)BugCheckParameter4);
      if ( v23 < 0 )
      {
        v24 = 48;
LABEL_46:
        sub_14020A890(a5, 0, 23, v23, v24);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v25);
        else
          sub_1407C97C0(BugCheckParameter3, &v25);
        return (unsigned int)v23;
      }
      *((_DWORD *)v11 + 2) = v6;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v25);
    else
      sub_1407C97C0(BugCheckParameter3, &v25);
    v6 = 0;
LABEL_18:
    ++v10;
  }
  while ( v10 < (unsigned __int16)a3[1] );
  if ( !v9 )
    return 0LL;
  return 2147483690LL;
}
