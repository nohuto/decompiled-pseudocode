/*
 * XREFs of sub_1405D7BF0 @ 0x1405D7BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023C670 @ 0x14023C670 (sub_14023C670.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_1405D857C @ 0x1405D857C (sub_1405D857C.c)
 *     sub_1405DAE60 @ 0x1405DAE60 (sub_1405DAE60.c)
 */

char sub_1405D7BF0()
{
  unsigned int v0; // ecx
  char v1; // si
  __int64 v2; // rdi
  __int16 v3; // ax
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r13
  int v8; // eax
  size_t v9; // rbx
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int8 v26; // al
  unsigned int v27; // r12d
  __int64 v28; // rbx
  __int64 *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // ecx
  int v35; // r12d
  unsigned int v36; // r15d
  unsigned int v37; // edx
  bool v38; // zf
  size_t NumOfElements; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C8h]
  __int64 v42; // [rsp+48h] [rbp-C0h]
  __int64 *v43; // [rsp+50h] [rbp-B8h]
  __int64 v44; // [rsp+58h] [rbp-B0h]
  __int128 v45; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+70h] [rbp-98h]
  _DWORD v47[64]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD Base[64]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v49[64]; // [rsp+278h] [rbp+170h] BYREF

  v46 = 0LL;
  v45 = 0LL;
  v43 = &off_140C03040[534 * dword_140C232CC + 5];
  if ( dword_140D05054 == 4 )
  {
    v0 = 0;
    LODWORD(v42) = 0;
    if ( dword_140C1CF34 )
    {
      while ( 1 )
      {
        v1 = 0;
        v2 = qword_140C1CF38 + 336LL * v0;
        v44 = v2;
        if ( !byte_140D068BC || *(_BYTE *)(v2 + 129) || dword_140D05054 )
          break;
LABEL_55:
        LODWORD(v42) = ++v0;
        if ( v0 >= dword_140C1CF34 )
          goto LABEL_56;
      }
      v3 = *(_WORD *)(v2 + 4);
      v4 = 0LL;
      v5 = *(_QWORD *)(v2 + 8);
      v6 = 0LL;
      LODWORD(NumOfElements) = 0;
      *(_QWORD *)&v45 = 0LL;
      v7 = *(unsigned __int8 *)(v2 + 139);
      LOWORD(v46) = v3;
      *((_QWORD *)&v45 + 1) = v5;
      while ( 1 )
      {
        v8 = KeEnumerateNextProcessor(&NumOfElements, (unsigned __int16 **)&v45);
        v9 = (unsigned int)NumOfElements;
        if ( v8 )
          break;
        v10 = (_DWORD *)sub_140348800(NumOfElements);
        v11 = v10[8502];
        if ( dword_140C204A8 != 5 )
          v11 -= v10[8504];
        v12 = v10[8507];
        if ( v12 )
          v11 = (v12 * v11) >> 16;
        Base[v9] = v11;
        v13 = v10[8507];
        v14 = v10[8505];
        if ( v13 )
          v14 = (v13 * v14) >> 16;
        v4 += v14;
        v47[v9] = v14;
        v6 += v11;
        LODWORD(NumOfElements) = v9 + 1;
      }
      qsort(Base, (unsigned int)NumOfElements, 4uLL, sub_1405D85D0);
      qsort(v47, v9, 4uLL, sub_1405D85D0);
      v15 = *(unsigned __int8 *)(v2 + 6);
      v16 = 0LL;
      v17 = *(_QWORD *)(v2 + 96);
      v18 = 0LL;
      v41 = 0LL;
      if ( (_DWORD)v15 )
      {
        v19 = (unsigned int)v15;
        v20 = (__int64 *)(v17 + 8 * v15);
        do
        {
          v18 += v6 * *v20;
          v15 = (unsigned int)(v15 - 1);
          v49[v15] = v18;
          v21 = *v20--;
          v22 = v19 * v21;
          --v19;
          v16 += v22;
        }
        while ( (_DWORD)v15 );
        v41 = v16;
      }
      if ( (_DWORD)v7 )
      {
        v23 = v47;
        v24 = v7;
        do
        {
          v25 = *v23++;
          v4 -= v25;
          --v24;
        }
        while ( v24 );
      }
      v26 = *(_BYTE *)(v2 + 129);
      if ( byte_140D068BC )
        v26 = *(_BYTE *)(v2 + 6);
      v27 = v26;
      LODWORD(v28) = v7;
      if ( (unsigned int)v7 < v26 )
      {
        v29 = v43;
        while ( 1 )
        {
          v30 = (unsigned int)Base[(unsigned int)v28];
          v31 = *((unsigned __int8 *)v29 + (unsigned int)v28 + 2209);
          v32 = v49[(unsigned int)v28];
          LODWORD(NumOfElements) = *((unsigned __int8 *)v29 + (unsigned int)v28 + 2209);
          if ( !(unsigned int)sub_1405D857C(v16, v30, v32, v31) )
            break;
          if ( !(unsigned int)sub_1405D857C(v41, v4, 0LL, (unsigned int)NumOfElements) )
            break;
          v33 = (unsigned int)v47[(unsigned int)v28];
          LODWORD(v28) = v28 + 1;
          v4 -= v33;
          if ( (unsigned int)v28 >= v27 )
            break;
          v16 = v41;
        }
        v2 = v44;
        if ( (unsigned int)v28 > (unsigned int)v7 )
        {
          v34 = 2;
          goto LABEL_40;
        }
        v16 = v41;
      }
      if ( (_DWORD)v28 )
      {
        while ( 1 )
        {
          v35 = v28;
          v28 = (unsigned int)(v28 - 1);
          v4 += (unsigned int)v47[v28];
          v36 = *((unsigned __int8 *)v43 + v28 + 161);
          if ( (unsigned int)sub_1405D857C(
                               v16,
                               (unsigned int)Base[v28],
                               v49[v28],
                               *((unsigned __int8 *)v43 + v28 + 161)) )
          {
            if ( (unsigned int)sub_1405D857C(v41, v4, 0LL, v36) )
              break;
          }
          if ( !(_DWORD)v28 )
            goto LABEL_39;
          v16 = v41;
        }
        LODWORD(v28) = v35;
      }
LABEL_39:
      v34 = (unsigned int)v28 < (unsigned int)v7;
LABEL_40:
      if ( *(char *)(v2 + 148) == v34 )
      {
        v37 = (unsigned __int8)++*(_BYTE *)(v2 + 147);
      }
      else
      {
        v37 = 1;
        *(_BYTE *)(v2 + 148) = v34;
        *(_BYTE *)(v2 + 147) = 1;
        v1 = 4;
      }
      if ( dword_140C204A8 == 5 )
      {
        v1 |= 0x10u;
      }
      else if ( v34 == 2 )
      {
        if ( v37 < *((unsigned __int8 *)v43 + 160) )
        {
LABEL_52:
          v38 = byte_140D068BC == 0;
          *(_BYTE *)(v2 + 146) = *(_BYTE *)(v2 + 146) & 0xF9 | 4;
          if ( !v38 )
          {
            *(_BYTE *)(v2 + 296) = v28;
            v1 |= 0x80u;
          }
          sub_1405DAE60(v2, (unsigned int)Base, (unsigned int)v49, v41, v28, v1 | 1);
          v0 = v42;
          goto LABEL_55;
        }
        v1 |= 0x20u;
      }
      else
      {
        if ( v34 != 1 || v37 < *((unsigned __int8 *)v43 + 159) )
          goto LABEL_52;
        v1 |= 0x40u;
      }
      *(_BYTE *)(v2 + 139) = v28;
      goto LABEL_52;
    }
  }
LABEL_56:
  sub_14023C670();
  return 1;
}
