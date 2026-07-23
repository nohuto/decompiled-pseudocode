/*
 * XREFs of sub_1407172C8 @ 0x1407172C8
 * Callers:
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_1406CA2B8 @ 0x1406CA2B8 (sub_1406CA2B8.c)
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 * Callees:
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140719250 @ 0x140719250 (sub_140719250.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1407172C8(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3, __int64 a4)
{
  unsigned int v5; // ebp
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  ULONG_PTR *v16; // rax
  ULONG_PTR v17; // rcx
  ULONG_PTR **v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rcx
  const void *v23; // rbx
  unsigned int v24; // esi
  int v25; // eax
  int v26; // ecx
  void *v27; // rax
  unsigned int v28; // ecx
  _QWORD v29[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v30; // [rsp+68h] [rbp+20h] BYREF
  int v31; // [rsp+6Ch] [rbp+24h]

  v31 = HIDWORD(a4);
  v29[0] = 0xFFFFFFFFLL;
  v30 = 0;
  v5 = BugCheckParameter4;
  if ( sub_140346D80(BugCheckParameter3, BugCheckParameter4, &v30) == 1 )
    return 0LL;
  v7 = *(_DWORD *)(BugCheckParameter3 + 1876);
  if ( *(_DWORD *)(BugCheckParameter3 + 1872) == v7 )
  {
    v23 = *(const void **)(BugCheckParameter3 + 1888);
    v24 = 16 * v7;
    v25 = 256;
    if ( a3 != 1 )
      v25 = 16;
    v26 = v25 + v7;
    *(_DWORD *)(BugCheckParameter3 + 1876) = v26;
    v27 = (void *)sub_14042A5E0((unsigned int)(16 * v26), 0LL);
    v28 = *(_DWORD *)(BugCheckParameter3 + 1872);
    *(_QWORD *)(BugCheckParameter3 + 1888) = v27;
    if ( !v27 )
    {
      *(_QWORD *)(BugCheckParameter3 + 1888) = v23;
      *(_DWORD *)(BugCheckParameter3 + 1876) = v28;
      return 3221225626LL;
    }
    memmove(v27, v23, 16LL * v28);
    if ( v23 )
      sub_14042A5E0(v23, v24);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v8 = sub_1406BF400(BugCheckParameter3, v5, v29);
  else
    v8 = sub_1407C9820(BugCheckParameter3);
  v9 = v8;
  if ( v8 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v8 + 16) + 32);
    if ( *(_DWORD *)(v8 + 16) < 0xFFFFFFE0 && (_DWORD)v10 != 32 )
    {
      v11 = sub_14042A5E0(v10, 0LL);
      v12 = v11;
      if ( v11 )
      {
        memmove((void *)(v11 + 32), (const void *)(v9 + 20), *(unsigned int *)(v9 + 16));
        *(_DWORD *)v12 = v5;
        v13 = *(_DWORD *)(v9 + 16);
        *(_DWORD *)(v12 + 28) = 0;
        *(_DWORD *)(v12 + 24) = v13;
        v14 = sub_140719250(*(unsigned int *)(v9 + 16), v9 + 20);
        *(_DWORD *)(v12 + 4) = v14;
        v15 = 16LL * (v14 & 0x3F);
        v16 = (ULONG_PTR *)(v12 + 8);
        v17 = v15 + BugCheckParameter3 + 1896;
        v18 = *(ULONG_PTR ***)(v17 + 8);
        if ( *v18 != (ULONG_PTR *)v17 )
          __fastfail(3u);
        v19 = v30;
        *v16 = v17;
        *(_QWORD *)(v12 + 16) = v18;
        *v18 = v16;
        *(_QWORD *)(v17 + 8) = v16;
        v20 = *(_DWORD *)(BugCheckParameter3 + 1872);
        if ( (unsigned int)v19 < v20 )
          memmove(
            (void *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * (unsigned int)(v19 + 1)),
            (const void *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * (unsigned int)v19),
            16LL * (v20 - (unsigned int)v19));
        v21 = 2 * v19;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 8 * v21) = v5;
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 8 * v21 + 8) = v12;
        ++*(_DWORD *)(BugCheckParameter3 + 1872);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, v29);
        else
          sub_1407C97C0(BugCheckParameter3, v29);
        return 0LL;
      }
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v29);
    else
      sub_1407C97C0(BugCheckParameter3, v29);
  }
  return 3221225626LL;
}
