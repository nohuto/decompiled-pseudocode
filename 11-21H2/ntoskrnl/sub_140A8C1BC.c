/*
 * XREFs of sub_140A8C1BC @ 0x140A8C1BC
 * Callers:
 *     sub_140A80D10 @ 0x140A80D10 (sub_140A80D10.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FF19C @ 0x1405FF19C (sub_1405FF19C.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFD00 @ 0x1405FFD00 (sub_1405FFD00.c)
 *     sub_140602294 @ 0x140602294 (sub_140602294.c)
 *     sub_1406022DC @ 0x1406022DC (sub_1406022DC.c)
 *     sub_140A81AE8 @ 0x140A81AE8 (sub_140A81AE8.c)
 *     sub_140A9247C @ 0x140A9247C (sub_140A9247C.c)
 *     sub_140A927E8 @ 0x140A927E8 (sub_140A927E8.c)
 *     sub_140A92934 @ 0x140A92934 (sub_140A92934.c)
 *     sub_140A9CF00 @ 0x140A9CF00 (sub_140A9CF00.c)
 *     sub_140A9CF68 @ 0x140A9CF68 (sub_140A9CF68.c)
 *     sub_140A9D2AC @ 0x140A9D2AC (sub_140A9D2AC.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

void __fastcall sub_140A8C1BC(ULONG_PTR a1, __int64 **a2)
{
  __int64 *v2; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  int v11; // esi
  BOOL v12; // r15d
  _BYTE *v13; // r13
  int v14; // ecx
  __int64 *v15; // r15
  _QWORD *v16; // rsi
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r8
  int v20; // eax
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  bool v26; // zf
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int i; // edx
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+80h] [rbp+18h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return;
  v5 = (__int64)a2[1];
  *(_BYTE *)(v5 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 8));
  if ( *(_QWORD *)(v5 + 248) )
    sub_140A9D2AC();
  v6 = *(char *)(a1 + 67);
  v7 = 15 * v6;
  v33 = *(_DWORD *)(a1 + 48);
  v8 = (__int64)&v2[15 * v6 - 5];
  v9 = *(_QWORD *)(v8 + 8);
  v10 = *(_DWORD *)(v9 + 4);
  if ( (v10 & 0x40000000) != 0 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    *(_DWORD *)(v9 + 4) = v10 | 0x40000000;
    LOBYTE(v6) = *(_BYTE *)(a1 + 67);
  }
  v12 = v8 == v9;
  v13 = (_BYTE *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( (char)v6 <= *(char *)(a1 + 66)
    && (unsigned __int8)(*v13 - 3) <= 1u
    && *(_QWORD *)(a1 + 8)
    && (dword_140C29FC0 & 0x6000) != 0 )
  {
    sub_1405FF19C(v5, a1, *(_QWORD *)(a1 + 184) - 72LL);
    LODWORD(v8) = v7 * 8 + (_DWORD)v2 - 40;
  }
  sub_140A92934(v5, (_DWORD)v13, v8, v11, v12);
  v14 = *((_DWORD *)v2 + 8);
  v32 = v33;
  if ( (v14 & 2) == 0 && (*((_DWORD *)&v2[v7 - 4] - 1) & 0x4000000) != 0 && !*(_BYTE *)(a1 + 65) )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
    {
      sub_1405FFD00(574LL, (const void *)v2[v7], (const void *)a1, v33);
      v14 = *((_DWORD *)v2 + 8);
    }
    *((_DWORD *)v2 + 8) = v14 | 2;
  }
  v15 = &v2[v7 - 3];
  while ( 1 )
  {
    v16 = (_QWORD *)*v15;
    if ( (__int64 *)*v15 == v15 )
      break;
    if ( (__int64 *)v16[1] != v15 || (v17 = *v16, *(_QWORD **)(*v16 + 8LL) != v16) )
      __fastfail(3u);
    *v15 = v17;
    *(_QWORD *)(v17 + 8) = v15;
    v18 = *((_DWORD *)v16 - 2) | 0x40000000;
    *((_DWORD *)v16 - 2) = v18;
    *((_DWORD *)v16 + 6) = v33;
    if ( *(_BYTE *)(a1 + 65) )
      *((_DWORD *)v16 - 2) = v18 | 0x2000000;
    v19 = v16[5];
    if ( (*(_BYTE *)(v19 + 16) & 0x70) == 0x70 )
    {
      v20 = *(_DWORD *)(v19 + 48);
      if ( v20 != -2147483626 && (v20 & 0xC0000000) != 0xC0000000 )
      {
        v21 = *((_BYTE *)v16 + 48);
        if ( v21 == 3 || v21 == 5 || v21 == 7 || v21 == 10 )
          goto LABEL_35;
        if ( v21 <= 0xBu )
          goto LABEL_38;
        if ( v21 <= 0xDu )
        {
LABEL_35:
          v22 = *((unsigned int *)v16 + 14);
        }
        else
        {
          if ( v21 > 0xFu )
          {
            if ( v21 != 25 )
              goto LABEL_38;
            goto LABEL_35;
          }
          v23 = *(_QWORD *)(v5 + 200);
          if ( !v23 || v23 != *(_QWORD *)(v19 + 24) )
            goto LABEL_38;
          v22 = *(unsigned int *)(v5 + 208);
        }
        if ( *(_QWORD *)(v19 + 56) > v22 )
          sub_1405FFB44(0x312u, a2[4], (const void *)v19);
      }
    }
LABEL_38:
    if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
    {
      if ( (unsigned int)sub_140A9247C(v13, v32, &v33) )
      {
        *((_DWORD *)v16 - 2) |= 0x8000000u;
        *((_DWORD *)v16 + 7) = v33;
      }
    }
  }
  *(_DWORD *)(a1 + 48) = v33;
  memset(&v2[v7 - 5], 0, 0x78uLL);
  v15[1] = (__int64)v15;
  *v15 = (__int64)v15;
  v24 = *(unsigned __int8 *)(v5 + 184);
  *(_BYTE *)(v5 + 186) = *(_BYTE *)(a1 + 67) + 1;
  if ( v24 == *(char *)(a1 + 67) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_140A927E8(v5, *(_QWORD *)(a1 + 184) - 72LL);
    v25 = *v2;
    *(_DWORD *)(v25 + 56) &= ~1u;
    *(_QWORD *)(v25 + 240) = 0LL;
    sub_140A9CF00(v2);
    v26 = (*(_DWORD *)(v5 + 24))-- == 1;
    LOBYTE(v32) = 0;
    if ( v26 )
    {
      sub_140602294((KIRQL *)&v32);
      v27 = *(_QWORD *)v5;
      sub_14042A5E0(v5, *(_QWORD *)v5);
      *(_QWORD *)v5 = 0LL;
      sub_140A81AE8((_QWORD *)(qword_140C1ADF8 + 16LL * (unsigned __int8)(-125 * (v27 >> 12))), v27);
      sub_1406022DC(v32);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
    v28 = *(_QWORD *)(v5 + 224);
    if ( v28 )
    {
      for ( i = 0; i < *(_DWORD *)v28; ++i )
      {
        v30 = *(_QWORD *)(v28 + 8);
        v31 = 32LL * i;
        if ( *(_QWORD *)(v31 + v30) )
        {
          *(_OWORD *)(v31 + v30) = 0LL;
          *(_OWORD *)(v31 + v30 + 16) = 0LL;
        }
        v28 = *(_QWORD *)(v5 + 224);
      }
      *(_QWORD *)(v28 + 16) = 0LL;
    }
  }
  else
  {
    sub_140A9CF68(v2);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 20), 1u);
  }
  sub_140AA5BCC(v5);
  --*((_DWORD *)a2 + 5);
}
