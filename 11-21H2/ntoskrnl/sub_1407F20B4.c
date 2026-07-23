/*
 * XREFs of sub_1407F20B4 @ 0x1407F20B4
 * Callers:
 *     sub_1407F2028 @ 0x1407F2028 (sub_1407F2028.c)
 *     sub_140996DE8 @ 0x140996DE8 (sub_140996DE8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407F21E4 @ 0x1407F21E4 (sub_1407F21E4.c)
 *     sub_1407F2244 @ 0x1407F2244 (sub_1407F2244.c)
 */

__int64 __fastcall sub_1407F20B4(char a1, int a2)
{
  _DWORD *v3; // r8
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rax
  _DWORD *i; // rcx
  unsigned int *v8; // rbx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF
  int v16; // [rsp+48h] [rbp+20h] BYREF

  v15 = 0;
  v16 = 0;
  v3 = &unk_140D05A80;
  v4 = 0LL;
  while ( *v3 != a2 )
  {
    v4 = (unsigned int)(v4 + 1);
    v3 += 2;
    if ( (unsigned int)v4 >= 0x37 )
      return (unsigned int)-1073741811;
  }
  v5 = *((_DWORD *)&unk_140D05A80 + 2 * v4 + 1);
  if ( !v5 )
    return (unsigned int)-1073741811;
  v6 = 0LL;
  for ( i = &unk_140D3C030; *i != v5; i += 12 )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0x34 )
      return (unsigned int)-1073741823;
  }
  v8 = (unsigned int *)((char *)&unk_140D3C030 + 48 * v6);
  if ( !v8 )
    return (unsigned int)-1073741823;
  sub_1402D66A8((ULONG_PTR)&qword_140C1FF50);
  LOBYTE(v9) = a1;
  v10 = sub_14042A5E0(v9, &v15);
  v11 = MEMORY[0xFFFFF78000000008];
  v12 = (unsigned int)dword_140C1FF40;
  ++*((_QWORD *)v8 + 4);
  *((_QWORD *)v8 + 5) = v11;
  v13 = 3 * v12;
  *((_DWORD *)&unk_140C1FC40 + 2 * v13) = v5;
  dword_140C1FF40 = ((_BYTE)v12 + 1) & 0x1F;
  *((_DWORD *)&unk_140C1FC40 + 2 * v13 + 2) = v15;
  *((_DWORD *)&unk_140C1FC40 + 2 * v13 + 1) = v10;
  *((_QWORD *)&unk_140C1FC40 + v13 + 2) = v11;
  if ( v10 >= 0 )
  {
    sub_1407F21E4(v5);
    if ( v15 )
      v10 = sub_1407F2244(v15, &v16, v8[4], *v8);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C1FF50);
  return (unsigned int)v10;
}
