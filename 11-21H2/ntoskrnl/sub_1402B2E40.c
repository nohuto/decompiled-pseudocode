/*
 * XREFs of sub_1402B2E40 @ 0x1402B2E40
 * Callers:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_14030EC70 @ 0x14030EC70 (sub_14030EC70.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_140386410 @ 0x140386410 (sub_140386410.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     sub_140385180 @ 0x140385180 (sub_140385180.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402B2E40(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // r14
  bool v6; // zf
  __int64 v7; // rdx
  int v8; // r15d
  __int64 v9; // rbp
  ULONG_PTR v10; // r10
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // r9
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // r9
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax

  if ( (dword_140D06880 & 0xC00000) == 0
    || (*(_BYTE *)(a1 + 184) & 7) != 0
    || *(_BYTE *)(a1 - 752) == 1
    || (a2 & 4) == 0 && (__rdtsc() & 0x3FF0) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  v5 = *(_QWORD *)(a1 + 264);
  v6 = (a2 & 4) != 0 ? (*(_DWORD *)(a1 - 540) & 0x4000000) == 0 : v5 == 0;
  if ( v6 || !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) == 0 )
  {
    if ( !(unsigned int)sub_1403531F0(a1) )
    {
      v8 = a2 & 1;
      if ( (a2 & 1) == 0 || (unsigned int)sub_14031DE00(a1, v7, 1LL) )
        goto LABEL_16;
    }
    return 0xFFFFFFFFLL;
  }
  v8 = a2 & 1;
  if ( (a2 & 1) != 0 )
    sub_14031DE00(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
LABEL_16:
  v9 = 0LL;
  v10 = 0xFFFFF6FB7DBED000uLL;
  v11 = 256;
  v12 = 0x8000000000000000uLL;
  v13 = 0xCFFFFFFFFFFFFFFFuLL;
  do
  {
    v14 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v20 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8 * ((v10 >> 3) & 0x1FF));
        v22 = v14 | 0x20;
        if ( (v21 & 0x20) == 0 )
          v22 = *(_QWORD *)v10;
        v14 = v22;
        if ( (v21 & 0x42) != 0 )
          v14 = v22 | 0x42;
      }
      v12 = 0x8000000000000000uLL;
    }
    v15 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        v23 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 8 * ((v5 >> 3) & 0x1FF));
          v25 = v15 | 0x20;
          if ( (v24 & 0x20) == 0 )
            v25 = *(_QWORD *)v5;
          v15 = v25;
          if ( (v24 & 0x42) != 0 )
            v15 = v25 | 0x42;
        }
        v13 = 0xCFFFFFFFFFFFFFFFuLL;
      }
      v12 = 0x8000000000000000uLL;
    }
    if ( (v14 & 1) != 0 )
    {
      v18 = v14 & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !HIBYTE(word_140C51864) )
        v15 |= 0x8000000000000000uLL;
      BugCheckParameter4 = v15 | 0x20;
      if ( v18 != BugCheckParameter4 )
      {
        if ( (a2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x3600uLL, v10, v18, BugCheckParameter4);
        goto LABEL_36;
      }
    }
    else if ( v15 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3601uLL, v10, v15, v15);
      goto LABEL_36;
    }
    v10 += 8LL;
    v5 += 8LL;
    ++v9;
    --v11;
  }
  while ( v11 );
  if ( qword_140C4E580 || (v10 & 0xFFF) == 0 )
    goto LABEL_35;
  while ( 1 )
  {
    v16 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v12 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v12 )
      {
        v26 = *(_QWORD *)(v12 + 8 * ((v10 >> 3) & 0x1FF));
        v12 = v16 | 0x20;
        if ( (v26 & 0x20) == 0 )
          v12 = *(_QWORD *)v10;
        v16 = v12;
        if ( (v26 & 0x42) != 0 )
          v16 = v12 | 0x42;
      }
    }
    v17 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
    {
      v12 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_BYTE *)(v12 + 912) != 1 && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v12 = *((_QWORD *)KeGetCurrentThread() + 23);
        v13 = *(_QWORD *)(v12 + 1928);
        if ( v13 )
        {
          v27 = *(_QWORD *)(v13 + 8 * ((v5 >> 3) & 0x1FF));
          v13 = v17 | 0x20;
          v12 = (unsigned __int8)v27;
          LOBYTE(v12) = v27 & 0x20;
          if ( (v27 & 0x20) == 0 )
            v13 = *(_QWORD *)v5;
          v17 = v13;
          if ( (v27 & 0x42) != 0 )
            v17 = v13 | 0x42;
        }
      }
    }
    if ( (v16 & 1) != 0 && (v16 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3604uLL, v10, v16, v17);
      goto LABEL_34;
    }
    if ( (v17 & 1) != 0 && (v17 & 4) != 0 )
      break;
    v10 += 8LL;
    v5 += 8LL;
    ++v9;
    if ( (v10 & 0xFFF) == 0 )
      goto LABEL_34;
  }
  if ( (a2 & 8) == 0 )
    KeBugCheckEx(0x1Au, 0x3605uLL, v10, v16, v17);
LABEL_34:
  if ( (v10 & 0xFFF) == 0 )
LABEL_35:
    v9 = 0xFFFFFFFFLL;
LABEL_36:
  if ( v8 )
    sub_14020D8D0(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v9 == 0xFFFFFFFFLL && (a2 & 0x10) != 0 )
    return sub_140385180(a2, v12, v13);
  return v9;
}
