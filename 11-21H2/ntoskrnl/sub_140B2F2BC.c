/*
 * XREFs of sub_140B2F2BC @ 0x140B2F2BC
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140931E28 @ 0x140931E28 (sub_140931E28.c)
 *     sub_140970F88 @ 0x140970F88 (sub_140970F88.c)
 *     sub_14097100C @ 0x14097100C (sub_14097100C.c)
 *     sub_140972C58 @ 0x140972C58 (sub_140972C58.c)
 *     sub_1409730F0 @ 0x1409730F0 (sub_1409730F0.c)
 *     sub_140973D6C @ 0x140973D6C (sub_140973D6C.c)
 *     sub_140973EA4 @ 0x140973EA4 (sub_140973EA4.c)
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 */

__int64 __fastcall sub_140B2F2BC(__int64 a1)
{
  int v2; // esi
  struct _KTHREAD *v3; // r13
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int64 i; // rbx
  _QWORD *v8; // rcx
  signed int v9; // edi
  __int64 result; // rax
  _QWORD *v11; // rbx
  int v12; // edx
  int v13; // ecx
  _QWORD *v14; // rax
  UNICODE_STRING *v15; // rax
  _QWORD *v16; // rdi
  int v17; // eax
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  int v21; // eax
  char v22; // r14
  PVOID *v23; // rbx
  __int64 v24; // rcx
  _DWORD v25[16]; // [rsp+30h] [rbp-40h] BYREF
  int v26; // [rsp+B0h] [rbp+40h] BYREF
  int v27; // [rsp+B8h] [rbp+48h] BYREF
  int v28; // [rsp+C0h] [rbp+50h] BYREF

  v27 = 0;
  v26 = 0;
  v28 = 0;
  memset(v25, 0, sizeof(v25));
  v2 = 0;
  v3 = sub_1406F5B50();
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      v12 = *((_DWORD *)v5 + 10);
      v13 = v2 + 1;
      if ( (v12 & 6) != 4 )
        v13 = v2;
      v2 = v13;
      if ( (v12 & 1) != 0 )
      {
        v14 = sub_140970F88(*((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), (const void **)v5 + 2);
        if ( !v14 )
          goto LABEL_22;
        sub_140973D6C((unsigned __int64 *)&qword_140C533B0, v14, 0);
        sub_140974FBC(*((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), (UNICODE_STRING *)v5 + 1, 0, 5);
        if ( (v5[5] & 2) != 0 )
        {
          v15 = sub_14097100C((PCUNICODE_STRING)v5 + 1);
          if ( !v15 )
          {
LABEL_22:
            v9 = -1073741670;
            goto LABEL_8;
          }
          LODWORD(v15[1].Buffer) = *((_DWORD *)v5 + 8);
          HIDWORD(v15[1].Buffer) = *((_DWORD *)v5 + 9);
          *(_DWORD *)&v15[2].Length = *((_DWORD *)v5 + 16);
          *(_DWORD *)(&v15[2].MaximumLength + 1) = *((_DWORD *)v5 + 17);
          LODWORD(v15[2].Buffer) = *((_DWORD *)v5 + 15);
          sub_140973EA4(v15);
          sub_140974FBC(*((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), (UNICODE_STRING *)v5 + 1, 0, 6);
        }
        else
        {
          sub_140974FBC(*((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), (UNICODE_STRING *)v5 + 1, 0, 7);
        }
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL) );
  }
  v6 = *(_QWORD **)&qword_140C533B0;
  i = 0LL;
  while ( v6 )
  {
    i = (unsigned __int64)v6;
    v6 = (_QWORD *)*v6;
  }
  while ( i )
  {
    v16 = (_QWORD *)qword_140C533B8;
    v25[6] = *(_DWORD *)(i + 24);
    v25[7] = *(_DWORD *)(i + 28);
    if ( !qword_140C533B8 )
      goto LABEL_57;
    do
    {
      v17 = sub_140972C58((__int64)v25, (__int64)v16);
      if ( v17 >= 0 )
      {
        if ( v17 <= 0 )
          break;
        v16 = (_QWORD *)v16[1];
      }
      else
      {
        v16 = (_QWORD *)*v16;
      }
    }
    while ( v16 );
    if ( !v16 )
    {
LABEL_57:
      v9 = sub_140931E28(*(_DWORD *)(i + 24), *(_DWORD *)(i + 28), &v28);
      if ( v9 < 0 )
        goto LABEL_8;
      if ( (v28 & 3) != 0 )
      {
        v9 = sub_140974020((const void **)(i + 32), 2, &v27, &v26);
        if ( v9 < 0 )
          goto LABEL_8;
      }
    }
    v18 = *(_QWORD ***)(i + 8);
    v19 = i;
    if ( v18 )
    {
      v20 = *v18;
      for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
        i = (unsigned __int64)v20;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v19 )
          break;
        v19 = i;
      }
    }
  }
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL);
  if ( (dword_140C533E4 & 1) != 0 )
  {
    v11 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 != v8 )
    {
      do
      {
        if ( (v11[5] & 3) == 0 )
        {
          v25[6] = *((_DWORD *)v11 + 8);
          v25[7] = *((_DWORD *)v11 + 9);
          v21 = sub_1409730F0((__int64 *)&qword_140C533B0, 0LL, *((_DWORD *)v11 + 8), *((_DWORD *)v11 + 9), 0LL);
          v27 = *((_DWORD *)v11 + 8);
          v26 = *((_DWORD *)v11 + 9);
          v22 = 9;
          if ( v21 >= 0 )
            v22 = 12;
          v9 = sub_140974020((const void **)v11 + 2, v22, &v27, &v26);
          if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073740748 )
            goto LABEL_8;
          if ( (v22 & 1) != 0 )
            sub_140974FBC(*((_DWORD *)v11 + 8), *((_DWORD *)v11 + 9), (UNICODE_STRING *)v11 + 1, v9, 5);
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL) );
    }
  }
  if ( v2 )
  {
    v23 = (PVOID *)PsLoadedModuleList;
    while ( v23 != &PsLoadedModuleList )
    {
      v24 = (__int64)v23;
      v23 = (PVOID *)*v23;
      if ( _bittest16((const signed __int16 *)(v24 + 110), 9u) )
        sub_1406F4FB8(v24, -1);
    }
  }
  v9 = 0;
LABEL_8:
  sub_1406F5AF0((__int64)v3);
  result = (unsigned int)v9;
  byte_140C533E0 = 1;
  return result;
}
