/*
 * XREFs of sub_140667A4C @ 0x140667A4C
 * Callers:
 *     sub_140666D1C @ 0x140666D1C (sub_140666D1C.c)
 * Callees:
 *     sub_1404190B0 @ 0x1404190B0 (sub_1404190B0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140663C48 @ 0x140663C48 (sub_140663C48.c)
 *     sub_140666BAC @ 0x140666BAC (sub_140666BAC.c)
 *     sub_140667F24 @ 0x140667F24 (sub_140667F24.c)
 *     sub_140668084 @ 0x140668084 (sub_140668084.c)
 *     sub_140668570 @ 0x140668570 (sub_140668570.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7B20 @ 0x1407A7B20 (sub_1407A7B20.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 *     sub_1407AD8F0 @ 0x1407AD8F0 (sub_1407AD8F0.c)
 *     sub_1407F58C4 @ 0x1407F58C4 (sub_1407F58C4.c)
 *     sub_140967A0C @ 0x140967A0C (sub_140967A0C.c)
 *     sub_140967A74 @ 0x140967A74 (sub_140967A74.c)
 *     sub_140967AE4 @ 0x140967AE4 (sub_140967AE4.c)
 */

__int64 __fastcall sub_140667A4C(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        PLARGE_INTEGER a7,
        char a8)
{
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r12
  char v17; // bl
  ULONG_PTR v18; // r13
  int v19; // edx
  unsigned int v20; // r14d
  ULONG_PTR v21; // rcx
  unsigned int v22; // eax
  ULONG_PTR v23; // rbx
  int v24; // edx
  int v25; // eax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int16 v28; // ax
  __int16 v29; // dx
  int v30; // r13d
  unsigned __int64 v31; // rdx
  int v32; // [rsp+50h] [rbp-B8h]
  int v33[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int128 v37; // [rsp+78h] [rbp-90h] BYREF
  __int128 v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  int v40[16]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v42; // [rsp+118h] [rbp+10h]
  unsigned int v43; // [rsp+118h] [rbp+10h]

  v11 = a1;
  memset(v40, 0, sizeof(v40));
  *(_QWORD *)v33 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v32 = 0;
  v35 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      sub_140663C48(a3, a2);
      sub_140666BAC(a3, (__int64)&v37, a2);
    }
    v14 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      v35 = *(_QWORD *)v15;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
    v16 = (__int64)a6;
    v17 = 1;
    if ( a6 )
    {
      LOBYTE(v12) = 1;
      v32 = sub_140668570(a2, a6, v12);
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a7;
      v36 = *(_QWORD *)v14;
      a7 = (PLARGE_INTEGER)&v36;
    }
    v11 = a1;
  }
  else
  {
    if ( a3 )
    {
      v37 = *(_OWORD *)a3;
      v38 = *(_OWORD *)(a3 + 16);
      v39 = *(_QWORD *)(a3 + 32);
    }
    if ( a4 )
      v35 = *a4;
    v16 = (__int64)a6;
    v17 = 1;
    if ( a6 )
      v32 = *a6;
  }
  result = sub_140668084(v33, a2, v11, a3, &v37, a5, 0LL, 0LL, 0, a8);
  if ( (int)result >= 0 )
  {
    v18 = *(_QWORD *)v33;
    v42 = *(_DWORD *)(*(_QWORD *)v33 + 264LL);
    if ( byte_140D01161 )
      sub_140967A74(*(_QWORD *)v33);
    *(_QWORD *)v40 = v11;
    *(_QWORD *)&v40[2] = v18;
    v40[12] = a2;
    v20 = sub_140667F24(v40);
    if ( (v20 & 0x80000000) == 0 )
    {
      if ( (a2 & 0x20000) == 0 )
        return v20;
      if ( (a2 & 0x100000) == 0 )
      {
        if ( (unsigned int)sub_1404190B0() && (a2 & 0x2000000) != 0 && (a2 & 2) != 0 )
          v17 = 0;
        else
          v17 = *((_BYTE *)KeGetCurrentThread() + 562);
      }
      *(_QWORD *)v33 = 0LL;
      LOBYTE(v19) = v17;
      v22 = sub_1407AD8F0((int)v40, v19, (int)v33, v32, a7);
      v20 = v22;
      if ( v22 )
      {
        if ( byte_140D01161 )
          sub_140967A0C(v42, v22);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
        return v20;
      }
      if ( byte_140D01161 )
        sub_140967AE4(v42);
      v23 = *(_QWORD *)v33;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v33 + 240LL);
      v25 = 24;
      if ( (a2 & 0xC0000000) != 0x80000000 )
        v25 = 40;
      v26 = (unsigned int)(v24 + v25);
      v43 = v26;
      if ( a4 )
      {
        v27 = (unsigned int)v26;
        if ( (unsigned int)v26 > v35 )
        {
          sub_1407A7628(*(ULONG_PTR *)v33);
          *a4 = v27;
          return 3221225507LL;
        }
      }
      if ( a3 )
      {
        v34 = 0;
        if ( (a2 & 0xC0000000) == 0x80000000 )
        {
          *(_WORD *)a3 = v24;
          v34 = *(unsigned __int16 *)(v23 + 240) + 24;
          *(_WORD *)(a3 + 2) = v34;
          v28 = *(_WORD *)(v23 + 246);
          if ( v28 )
            *(_WORD *)(a3 + 6) = v28 - 16;
          else
            *(_WORD *)(a3 + 6) = 0;
          v29 = *(_WORD *)(v23 + 244) | 0x1000;
          *(_WORD *)(a3 + 4) = v29;
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(v23 + 248);
          *(_DWORD *)(a3 + 12) = *(_DWORD *)(v23 + 256);
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(v23 + 264);
          *(_DWORD *)(a3 + 20) = *(_DWORD *)(v23 + 272);
          *(_DWORD *)(a3 + 20) = *(_DWORD *)(v23 + 272);
          v30 = a1;
          if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
            *(_WORD *)(a3 + 4) = v29 & 0xC00F;
          v31 = a3 + 24;
        }
        else
        {
          *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)v33 + 240LL);
          *(_OWORD *)(a3 + 16) = *(_OWORD *)(v23 + 256);
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(v23 + 272);
          v30 = a1;
          if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
            *(_WORD *)(a3 + 4) = *(_WORD *)(v23 + 244) & 0xC00F;
          v34 = *(unsigned __int16 *)(v23 + 242);
          v31 = a3 + 40;
        }
        if ( *(_QWORD *)(v23 + 176) )
          sub_1407F58C4(v23, v31);
        else
          sub_1407A7B20(v23, v31);
        v26 = v43;
      }
      else
      {
        v30 = a1;
      }
      if ( a4 )
        *a4 = v26;
      if ( v16 )
        sub_1407A9220(v30, a2, v23, v32, v16);
      v21 = v23;
    }
    else
    {
      if ( byte_140D01161 )
        sub_140967A0C(v42, v20);
      v21 = v18;
    }
    sub_1407A7628(v21);
    return v20;
  }
  return result;
}
