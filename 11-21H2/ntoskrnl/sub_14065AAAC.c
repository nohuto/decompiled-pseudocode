/*
 * XREFs of sub_14065AAAC @ 0x14065AAAC
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_140922400 @ 0x140922400 (sub_140922400.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 * Callees:
 *     sub_14020004C @ 0x14020004C (sub_14020004C.c)
 *     sub_140200068 @ 0x140200068 (sub_140200068.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065AED8 @ 0x14065AED8 (sub_14065AED8.c)
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_14065C3B8 @ 0x14065C3B8 (sub_14065C3B8.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F3D4 @ 0x14069F3D4 (sub_14069F3D4.c)
 *     sub_14069F47C @ 0x14069F47C (sub_14069F47C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 *     sub_14079BC7C @ 0x14079BC7C (sub_14079BC7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091F7C8 @ 0x14091F7C8 (sub_14091F7C8.c)
 */

__int64 __fastcall sub_14065AAAC(__int64 a1, __int16 *a2)
{
  __int64 v2; // r15
  __int16 *v3; // rbx
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int16 v7; // dx
  __int64 v8; // rdi
  ULONG_PTR v9; // rsi
  __int16 v10; // dx
  __int16 v11; // r9
  ULONG_PTR *v12; // r13
  ULONG_PTR v13; // rcx
  int v14; // ebx
  int v15; // eax
  ULONG_PTR v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // cx
  bool v20; // zf
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // eax
  unsigned __int16 v26; // r13
  ULONG_PTR v27; // rdx
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rcx
  ULONG_PTR v32; // rdx
  __int64 v33; // rax
  int v35; // eax
  unsigned __int16 v36; // [rsp+30h] [rbp-89h]
  unsigned int v37; // [rsp+34h] [rbp-85h]
  __int64 v38; // [rsp+38h] [rbp-81h] BYREF
  int v39; // [rsp+40h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+44h] [rbp-75h] BYREF
  __int16 v41; // [rsp+4Ch] [rbp-6Dh]
  __int64 v42; // [rsp+50h] [rbp-69h] BYREF
  __int64 v43; // [rsp+58h] [rbp-61h] BYREF
  __int16 *v44; // [rsp+60h] [rbp-59h]
  ULONG_PTR BugCheckParameter4[12]; // [rsp+70h] [rbp-49h] BYREF

  v2 = 0LL;
  v44 = a2;
  v3 = a2;
  v42 = 0LL;
  memset(BugCheckParameter4, 0, 0x58uLL);
  v36 = 0;
  v5 = -1;
  LODWORD(v38) = -1;
  BugCheckParameter3 = -1LL;
  v6 = -1;
  v39 = 0;
  v43 = 0xFFFFFFFF00000000uLL;
  sub_1407C97FC(&v42);
  sub_14069F47C(BugCheckParameter4);
  v41 = *v3;
  v8 = sub_14069F1CC(v3);
  if ( a1 )
    v2 = sub_14069F1CC(a1);
  v9 = *(_QWORD *)v8;
  if ( *(char *)(*(_QWORD *)(v8 + 16) + 13LL) < 0 && (__int16)(v7 - 1) >= 0 )
  {
    while ( 1 )
    {
      v12 = (ULONG_PTR *)sub_14069F1CC(v3);
      v13 = v12[2];
      if ( v13 )
      {
        if ( *(char *)(v13 + 13) >= (char)v11 )
          break;
      }
      if ( (__int16)(v10 - 1) < 0 )
        goto LABEL_8;
    }
    if ( *(_WORD *)(v13 + 74) != v11 )
    {
      v35 = sub_14079BC7C(*v12, *(unsigned int *)(v13 + 48), (__int64)&v38);
      v5 = v38;
      v14 = v35;
      if ( v35 < 0 )
        goto LABEL_50;
      v3 = v44;
      v36 = *(_WORD *)(v12[2] + 74);
    }
  }
LABEL_8:
  v14 = sub_140200068((__int64)BugCheckParameter4, v3);
  if ( v14 >= 0 )
  {
    LODWORD(v38) = 0;
    v37 = 0;
    while ( 1 )
    {
      v15 = sub_14065AED8(BugCheckParameter4);
      v14 = v15;
      if ( v15 == -2147483622 )
        break;
      if ( v15 < 0 )
        goto LABEL_50;
      if ( HIWORD(BugCheckParameter4[0]) != v41 )
      {
        v16 = sub_14020004C((__int64)BugCheckParameter4);
        v14 = sub_14065B108(v16, LODWORD(BugCheckParameter4[0]), v9, (__int64)&BugCheckParameter3 + 4);
        if ( v14 < 0 )
          goto LABEL_50;
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          v17 = sub_1406BF400(v9, HIDWORD(BugCheckParameter3));
        else
          v17 = sub_1407C9820(v9);
        v18 = *(_WORD *)(v17 + 2);
        v19 = 2 * v18;
        v20 = (*(_BYTE *)(v17 + 16) & 1) == 0;
        v21 = *(_DWORD *)(v17 + 4);
        if ( v20 )
          v19 = v18;
        v22 = v19;
        v23 = v21 + 0x80000000;
        if ( v21 < 0x80000000 )
          v23 = v21;
        v24 = v38;
        if ( v23 > (unsigned int)v38 )
          v24 = v23;
        LODWORD(v38) = v24;
        if ( v22 <= v37 )
          v22 = v37;
        v37 = v22;
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          sub_1406BF450(v9, &v42);
        else
          sub_1407C97C0(v9, &v42);
        v14 = sub_14079B920(v9, (__int64)&v39, 1);
        if ( v14 < 0 )
          goto LABEL_50;
        HIDWORD(BugCheckParameter3) = -1;
      }
    }
    if ( !v39 || (v25 = sub_14065C3B8(v9, (__int64)&v43), v6 = HIDWORD(v43), v14 = v25, v25 >= 0) )
    {
      if ( *(char *)(*(_QWORD *)(v8 + 16) + 13LL) >= 0 )
        goto LABEL_61;
      v14 = sub_14071F300(*(_QWORD *)v8, *(unsigned int *)(v8 + 8));
      if ( v14 < 0 )
        goto LABEL_50;
      if ( v2 )
      {
        v26 = v36;
        if ( *(_DWORD *)(*(_QWORD *)(v2 + 16) + 56LL) < (unsigned int)v36 )
        {
          v14 = sub_14071F300(*(_QWORD *)v2, *(unsigned int *)(v2 + 8));
          if ( v14 < 0 )
            goto LABEL_50;
        }
      }
      else
      {
LABEL_61:
        v26 = v36;
      }
      if ( v6 == -1
        || (v14 = sub_14071F300(*(_QWORD *)v8, *(unsigned int *)(v8 + 8)), v14 >= 0)
        && ((v27 = *(unsigned int *)(*(_QWORD *)(v8 + 16) + 40LL), (_DWORD)v27 == -1)
         || (v14 = sub_14071F300(*(_QWORD *)v8, v27), v14 >= 0)) )
      {
        v28 = *(_QWORD *)(v8 + 16);
        v29 = *(_BYTE *)(v28 + 13);
        if ( v29 < 0 )
        {
          *(_BYTE *)(v28 + 13) = v29 & 0x7F;
          *(_DWORD *)(*(_QWORD *)(v8 + 16) + 48LL) = v5;
          v5 = -1;
          *(_WORD *)(*(_QWORD *)(v8 + 16) + 74LL) = v26;
          if ( v2 )
          {
            v30 = *(_QWORD *)(v2 + 16);
            if ( *(_DWORD *)(v30 + 56) < (unsigned int)v26 )
              *(_DWORD *)(v30 + 56) = v26;
          }
        }
        if ( v6 != -1 )
        {
          v31 = *(_QWORD *)(v8 + 16);
          v32 = *(unsigned int *)(v31 + 40);
          if ( (_DWORD)v32 != -1 )
          {
            sub_14079BD98(*(_QWORD *)v8, v32);
            v31 = *(_QWORD *)(v8 + 16);
          }
          v6 = -1;
          *(_QWORD *)(v31 + 36) = v43;
          v33 = *(_QWORD *)(v8 + 16);
          if ( *(_DWORD *)(v33 + 64) < (unsigned int)v38 )
          {
            *(_DWORD *)(v33 + 64) = v38;
            v33 = *(_QWORD *)(v8 + 16);
          }
          if ( *(_DWORD *)(v33 + 60) < v37 )
            *(_DWORD *)(v33 + 60) = v37;
          sub_14079BD98(v9, (unsigned int)BugCheckParameter3);
          v39 = 0;
          LODWORD(BugCheckParameter3) = -1;
        }
        v14 = 0;
      }
    }
  }
LABEL_50:
  sub_14069F3D4(BugCheckParameter4);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    sub_14091F7C8(v9);
  if ( v6 != -1 )
    sub_14079BD98(v9, v6);
  if ( v5 != -1 )
    sub_14079BD98(v9, v5);
  return (unsigned int)v14;
}
