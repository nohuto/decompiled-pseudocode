/*
 * XREFs of sub_14074B420 @ 0x14074B420
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D26E0 @ 0x1402D26E0 (sub_1402D26E0.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     sub_1402D2A14 @ 0x1402D2A14 (sub_1402D2A14.c)
 *     sub_1402DE734 @ 0x1402DE734 (sub_1402DE734.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_14074C534 @ 0x14074C534 (sub_14074C534.c)
 *     sub_14074D338 @ 0x14074D338 (sub_14074D338.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 */

__int64 __fastcall sub_14074B420(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx

  if ( a2
    || (dword_140C0974C & 2) == 0
    || _bittest((const signed __int32 *)(a1 + 396), 0x17u)
    || (_DWORD)InitSafeBootMode
    || (v5 = sub_14074D338(a1, 783LL, 0LL)) == 0 )
  {
    if ( a3 && _bittest((const signed __int32 *)(a1 + 396), 0x17u) )
      return (unsigned int)-1073741267;
    sub_1402D2774(&stru_14000FEE8, (unsigned __int16 *)(a1 + 40));
    sub_14076FBEC(a1, 8LL);
    sub_1402D2848(*(_QWORD *)(a1 + 32));
    v13 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x80u;
    v14 = sub_14074C534(v13, 0LL, 0LL, a1 + 528);
    sub_1402D25CC(*(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 704) &= ~0x80u;
    *(_DWORD *)(a1 + 392) = v14;
    sub_1402DE844(a1, 783);
    sub_1402D2774(&stru_14000E0B0, (unsigned __int16 *)(a1 + 40));
  }
  else
  {
    sub_1402DE844(a1, 782);
    *(_DWORD *)(a1 + 392) = 259;
    sub_1402D26E0(v6, (_QWORD *)v5);
    sub_1402D2774(&stru_14000FEE8, (unsigned __int16 *)(a1 + 40));
    sub_14076FBEC(a1, 8LL);
    sub_1402D2848(*(_QWORD *)(a1 + 32));
    v7 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x80u;
    v8 = sub_14074C534(v7, 0LL, sub_1402DE5C0, v5);
    v10 = v8;
    if ( v8 == 259 )
    {
      sub_1402D2774(&stru_14003B0E0, (unsigned __int16 *)(a1 + 40));
      return v10;
    }
    if ( *(_DWORD *)(v5 + 40) != v8 )
    {
      *(_DWORD *)(v5 + 40) = v8;
      sub_1402D2774(&stru_14000E0B0, (unsigned __int16 *)(a1 + 40));
      sub_1402DE734(v12, (_QWORD *)v5);
    }
    sub_1402D2A14(v9, (_QWORD *)v5);
    sub_1407730FC(v5);
  }
  return 0;
}
