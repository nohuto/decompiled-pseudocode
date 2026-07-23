/*
 * XREFs of sub_140821364 @ 0x140821364
 * Callers:
 *     sub_140820DCC @ 0x140820DCC (sub_140820DCC.c)
 * Callees:
 *     sub_14081F9F4 @ 0x14081F9F4 (sub_14081F9F4.c)
 *     sub_140821748 @ 0x140821748 (sub_140821748.c)
 *     sub_1408217D8 @ 0x1408217D8 (sub_1408217D8.c)
 *     sub_140821830 @ 0x140821830 (sub_140821830.c)
 *     sub_140821918 @ 0x140821918 (sub_140821918.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140821364(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // r12
  char v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // si
  unsigned int v10; // eax
  char v11; // r11
  _QWORD *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // r9
  __int64 result; // rax
  __int16 v18; // di
  int v19; // eax
  __int16 v20; // di
  int v21; // eax
  char v22; // dl
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  PVOID *v28; // rcx
  __int64 v29; // rdi
  __int64 Pool2; // rax
  __int64 *v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // [rsp+20h] [rbp-38h]
  __int64 v34; // [rsp+28h] [rbp-30h]
  __int64 v35; // [rsp+30h] [rbp-28h] BYREF
  __int64 v36; // [rsp+38h] [rbp-20h] BYREF
  __int64 v37; // [rsp+40h] [rbp-18h]
  char v38; // [rsp+A0h] [rbp+48h]
  char v39; // [rsp+A8h] [rbp+50h]
  __int64 v40; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+60h] BYREF

  v4 = *((_QWORD *)a1 + 9);
  v5 = 0;
  v41 = 0LL;
  v6 = 0;
  v37 = v4;
  v7 = *((_QWORD *)a1 + 4);
  v36 = 0LL;
  v39 = 1;
  v35 = 0LL;
  v8 = *(_QWORD *)(v7 + 64);
  v40 = 0LL;
  v9 = *(_BYTE *)(v8 + 1);
  v10 = a1[20];
  if ( v9 == 7 )
    v9 = 3;
  if ( v10 != 1 || (v11 = 1, *a1) )
    v11 = 0;
  v38 = v11;
  if ( !v4 || v10 == 1 )
    v12 = qword_140C46278;
  else
    v12 = *(_QWORD **)(*(_QWORD *)(v4 + 312) + 40LL);
  if ( !v12 )
    return 3221225610LL;
  while ( 1 )
  {
    if ( v12 != qword_140C46278 || v6 || v11 )
    {
      if ( v5 )
        goto LABEL_17;
      v13 = v12[4];
      if ( v13 == v4 )
        goto LABEL_17;
      LOBYTE(a3) = v9;
      if ( (unsigned __int8)sub_140821748(2LL, v12, a3, &v41, v33, v34, v35) )
        goto LABEL_13;
      if ( (unsigned __int8)v9 > 0xFu )
        v20 = 0;
      else
        v20 = 1 << v9;
      v21 = sub_140821918(2LL, v13, a3, &v40);
      *((_WORD *)v12 + 263) |= v20;
      if ( v21 >= 0 )
      {
        v32 = v40;
      }
      else
      {
        *((_WORD *)v12 + 262) |= v20;
        if ( (unsigned __int8)v9 <= 0xFu )
        {
LABEL_13:
          v14 = v41;
LABEL_14:
          if ( v14 )
          {
            v5 = 1;
            if ( (*(_DWORD *)(*(_QWORD *)(v14 + 24) + 40LL) & 1) != 0 && (int)sub_140821830(v14, 7LL) < 0 )
            {
              v5 = 0;
            }
            else
            {
              *((_QWORD *)a1 + 36) = v14;
              *(_WORD *)(v14 + 104) = 0;
            }
          }
LABEL_17:
          if ( !v39 )
          {
LABEL_24:
            v12 = (_QWORD *)v12[2];
            v11 = v38;
            goto LABEL_25;
          }
          LOBYTE(a3) = v9;
          if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64 *, __int64, __int64))sub_140821748)(
                                  1LL,
                                  v12,
                                  a3,
                                  &v35,
                                  v33,
                                  v34) )
            goto LABEL_19;
          if ( (unsigned __int8)v9 > 0xFu )
            v18 = 0;
          else
            v18 = 1 << v9;
          v19 = sub_140821918(1LL, v12[4], a3, &v40);
          *((_WORD *)v12 + 261) |= v18;
          if ( v19 >= 0 )
          {
            v29 = v40;
          }
          else
          {
            *((_WORD *)v12 + 260) |= v18;
            if ( (unsigned __int8)v9 <= 0xFu )
            {
LABEL_19:
              v15 = v35;
LABEL_20:
              if ( v15 )
                v6 = 1;
              if ( !v5 && v15 )
              {
                result = sub_14081F9F4(*((_QWORD *)a1 + 4), v15, &v36);
                if ( (int)result < 0 )
                  return result;
                a3 = v36;
                v22 = *(_BYTE *)(*(_QWORD *)(v36 + 64) + 1LL);
                *(_QWORD *)(v36 + 32) = *((_QWORD *)a1 + 4);
                v9 = v22;
                if ( v22 == 7 )
                  v9 = 3;
                v23 = v39;
                *((_QWORD *)a1 + 4) = a3;
                if ( (_DWORD)result == 288 )
                  v23 = 0;
                v39 = v23;
              }
              goto LABEL_24;
            }
            v29 = 0LL;
            v40 = 0LL;
          }
          Pool2 = ExAllocatePool2(256LL, 40LL, 538996816LL);
          if ( !Pool2 )
            return 3221225626LL;
          *(_BYTE *)(Pool2 + 16) = v9;
          *(_QWORD *)(Pool2 + 8) = Pool2;
          *(_QWORD *)Pool2 = Pool2;
          *(_QWORD *)(Pool2 + 24) = v29;
          *(_QWORD *)(Pool2 + 32) = v12;
          v31 = (__int64 *)v12[64];
          if ( (_QWORD *)*v31 != v12 + 63 )
            goto LABEL_68;
          *(_QWORD *)(Pool2 + 8) = v31;
          *(_QWORD *)Pool2 = v12 + 63;
          *v31 = Pool2;
          v15 = Pool2 & -(__int64)(v29 != 0);
          v12[64] = Pool2;
          v35 = v15;
          goto LABEL_20;
        }
        v32 = 0LL;
        v40 = 0LL;
      }
      v24 = ExAllocatePool2(256LL, 112LL, 538996816LL);
      v25 = v24;
      if ( !v24 )
        return 3221225626LL;
      *(_WORD *)(v24 + 104) = 0;
      *(_QWORD *)(v24 + 96) = v24 + 88;
      *(_QWORD *)(v24 + 88) = v24 + 88;
      *(_QWORD *)(v24 + 80) = v24 + 72;
      *(_QWORD *)(v24 + 72) = v24 + 72;
      v26 = (_QWORD *)(v24 + 40);
      *(_QWORD *)(v24 + 48) = v24 + 40;
      v27 = (_QWORD *)(v24 + 56);
      *v26 = v26;
      v27[1] = v27;
      *v27 = v27;
      *(_QWORD *)(v25 + 8) = v25;
      *(_QWORD *)v25 = v25;
      *(_BYTE *)(v25 + 16) = v9;
      *(_QWORD *)(v25 + 32) = v12;
      v28 = (PVOID *)v12[62];
      if ( *v28 != v12 + 61 )
LABEL_68:
        __fastfail(3u);
      *(_QWORD *)v25 = v12 + 61;
      *(_QWORD *)(v25 + 8) = v28;
      *v28 = (PVOID)v25;
      v12[62] = v25;
      *(_QWORD *)(v25 + 24) = v32;
      v14 = v25 & -(__int64)(v32 != 0);
      v41 = v14;
      goto LABEL_14;
    }
    v38 = 1;
    v12 = (_QWORD *)sub_1408217D8(*a1, a1[1]);
    if ( v12 == v16 && !**(_DWORD **)(*((_QWORD *)a1 + 2) + 8LL) )
      v12 = (_QWORD *)sub_1408217D8(1LL, 0LL);
LABEL_25:
    if ( !v12 )
      break;
    v4 = v37;
  }
  if ( !v5 )
    return 3221225610LL;
  return 0LL;
}
