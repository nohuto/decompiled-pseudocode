/*
 * XREFs of sub_14033F41C @ 0x14033F41C
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_14080F7F4 @ 0x14080F7F4 (sub_14080F7F4.c)
 *     sub_14096836C @ 0x14096836C (sub_14096836C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402D925C @ 0x1402D925C (sub_1402D925C.c)
 *     sub_1402D94D8 @ 0x1402D94D8 (sub_1402D94D8.c)
 *     sub_1402D96AC @ 0x1402D96AC (sub_1402D96AC.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     sub_1402EB398 @ 0x1402EB398 (sub_1402EB398.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_1403B1DEC @ 0x1403B1DEC (sub_1403B1DEC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140582214 @ 0x140582214 (sub_140582214.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 */

__int64 __fastcall sub_14033F41C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // r13d
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbp
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // r14
  unsigned __int8 v17; // al
  __int64 v18; // r9
  __int64 v19; // rax
  ULONG_PTR v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rbp
  __int64 v27; // r9
  __int64 v28; // rsi
  int v29; // eax
  int v30; // ebp
  ULONG_PTR v31; // rbp
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int8 v39; // [rsp+30h] [rbp-98h]
  char v40; // [rsp+31h] [rbp-97h]
  __int64 v41; // [rsp+38h] [rbp-90h]
  __int64 v42; // [rsp+40h] [rbp-88h]
  int v43; // [rsp+48h] [rbp-80h]
  int v44; // [rsp+4Ch] [rbp-7Ch]
  int v45; // [rsp+50h] [rbp-78h] BYREF
  int v46; // [rsp+54h] [rbp-74h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-70h]
  _QWORD *v48; // [rsp+60h] [rbp-68h]
  __int64 v49; // [rsp+68h] [rbp-60h]
  __int64 v50; // [rsp+70h] [rbp-58h]
  __int64 v51[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v48 = 0LL;
  v40 = 0;
  v50 = 0LL;
  if ( (unsigned int)sub_14027B080((__int64)(a2 << 25) >> 16) == 1 )
  {
    v42 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
    v9 = sub_14027B520();
  }
  else
  {
    v42 = 0LL;
    v9 = (__int64)sub_14026DFC0(1);
  }
  v10 = v9;
  v11 = a1 + 160;
  v41 = a1 + 160;
  v12 = 0;
  v49 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v9 + 174));
  if ( (a4 & 3) == 0 && (dword_140D06880 & 0x8000) != 0 && (dword_140D06880 & 0x4000) != 0 )
    v12 = 2;
  v13 = a4 & 4;
  v14 = v12 | 1;
  v43 = v13;
  v15 = a2;
  if ( !v13 )
    v14 = v12;
  v47 = 0LL;
  v44 = v14;
  v16 = -1LL;
  sub_1402D96AC(a1 + 160, 0LL);
  v17 = sub_1402CF4F0(v10);
  v39 = v17;
  if ( a2 > a3 )
    goto LABEL_18;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( (v15 & 0xFFF) != 0 )
        goto LABEL_10;
      sub_14020D8D0(v10, v4);
    }
    v4 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00(v10, v4, 0LL, v18);
LABEL_10:
    v19 = sub_140317A10(v15);
    v51[0] = v19;
    v20 = v19;
    if ( !v19 )
      goto LABEL_13;
    if ( (v19 & 1) == 0 )
    {
      if ( (v19 & 0x400) == 0 )
      {
LABEL_13:
        v15 += 8LL;
        goto LABEL_14;
      }
      sub_14020D8D0(v10, v4);
      sub_1402B0CE0(v10, v39);
      sub_1402D94D8(v11, 0);
      v28 = (__int64)((v15 << 25) - v50) >> 16;
      v29 = sub_14031C860(0LL, v28, 0, 0LL);
      v30 = v29;
      if ( v29 < 0 && (v15 == a2 || (a4 & 8) == 0) )
        KeBugCheckEx(0x1Au, 0x3000uLL, v28, v20, v29);
      sub_1402D96AC(v41, 0LL);
      sub_1402CF4F0(v10);
      if ( v30 >= 0 )
      {
        sub_14031DE00(v10, v4, 0LL, v18);
        v11 = v41;
        goto LABEL_14;
      }
      v4 = 0LL;
LABEL_50:
      v11 = v41;
      goto LABEL_13;
    }
    v21 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)v51) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v22 = *(_QWORD *)(v21 + 40);
    if ( v22 >= 0 )
      goto LABEL_13;
    if ( (v22 & 0x10000000000LL) == 0 )
    {
      v24 = *(_QWORD *)(v21 + 8);
      if ( v24 >= 0 )
      {
        if ( v24 )
          goto LABEL_13;
      }
    }
    if ( (a4 & 1) != 0 && ((v20 & 0x800) != 0 || (v20 & 0x200) == 0) )
      goto LABEL_13;
    v25 = (*(_DWORD *)(v21 + 16) >> 5) & 0x1F;
    if ( (dword_140D06880 & 0x8000) != 0 && (v42 || (a4 & 2) != 0) && ((*(_DWORD *)(v21 + 16) >> 5) & 2) != 0 )
      break;
    if ( dword_140C4F478 && v42 && ((*(_DWORD *)(v21 + 16) >> 5) & 2) != 0 && (*(_DWORD *)(a1 + 104) & 0x8000000) != 0 )
      break;
    if ( v43 && (*(_DWORD *)(v11 + 36) & 1) == 0 && (*(_BYTE *)(v21 + 35) & 8) != 0 )
      goto LABEL_13;
    if ( v16 != -1LL )
    {
      v26 = 48 * v16 - 0x220000000000LL;
      if ( (unsigned int)sub_1402EB398(v49, v25) )
      {
        if ( sub_140277C50(v26) && (unsigned int)sub_1403B1DEC(v26, 0LL) )
        {
LABEL_46:
          v31 = (__int64)((v15 << 25) - v50) >> 16;
          sub_140316400(v31, v15, v16, v44);
          v32 = a1;
          if ( v42 && !v48 && (v48 = sub_1402DBF3C(*(_QWORD *)(a1 + 48)), *((_BYTE *)v48 + 64)) )
          {
            v40 = 1;
          }
          else if ( !v40 )
          {
            goto LABEL_48;
          }
          if ( sub_1402D925C(v32, v15) )
          {
            v45 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v45, v34, v35, v18);
              while ( *(__int64 *)(v21 + 24) < 0 );
            }
            sub_140336AD8(v21);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v33 = 48 * v16 - 0x220000000000LL;
            v46 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v46, v36, v37, v38);
              while ( *(__int64 *)(v33 + 24) < 0 );
            }
            sub_140274508(48 * v16 - 0x220000000000LL, 1LL, v37);
            _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_49:
            v16 = -1LL;
            if ( (dword_140D06880 & 0x8000) != 0 && ((*(_QWORD *)(v33 + 40) >> 60) & 7) == 3 )
              sub_140582214(a1, v10, v31);
            goto LABEL_50;
          }
LABEL_48:
          v33 = 48 * v16 - 0x220000000000LL;
          goto LABEL_49;
        }
      }
      else if ( !sub_140277C50(v26) )
      {
        goto LABEL_46;
      }
      if ( v47 == v15 )
        goto LABEL_46;
      sub_140268408(v26);
      v11 = v41;
      v47 = v15;
    }
    sub_14020D8D0(v10, v4);
    sub_1402B0CE0(v10, v39);
    sub_1402D94D8(v11, 0);
    v16 = sub_14079D08C(v49, v25, 0LL);
    sub_1402D96AC(v11, 0LL);
    sub_1402CF4F0(v10);
    sub_14031DE00(v10, v4, 0LL, v27);
    if ( v16 == -1LL )
    {
      v5 = -1073741801;
      goto LABEL_15;
    }
LABEL_14:
    if ( v15 > a3 )
      goto LABEL_15;
  }
  v5 = -1073741755;
LABEL_15:
  if ( v4 )
    sub_14020D8D0(v10, v4);
  v17 = v39;
LABEL_18:
  sub_1402B0CE0(v10, v17);
  sub_1402D94D8(v11, 0);
  if ( v16 != -1LL )
    sub_140268408(48 * v16 - 0x220000000000LL);
  return v5;
}
