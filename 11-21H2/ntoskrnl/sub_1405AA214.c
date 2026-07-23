/*
 * XREFs of sub_1405AA214 @ 0x1405AA214
 * Callers:
 *     sub_1405E30A0 @ 0x1405E30A0 (sub_1405E30A0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 */

__int64 __fastcall sub_1405AA214(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  char *v7; // rsi
  __int64 **v9; // rdi
  unsigned int v10; // ecx
  __int64 **v11; // rax
  _QWORD *v12; // r8
  __int64 *v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0;
  v6 = sub_14030E7C0(a1, 2, (int *)&v17);
  v7 = (char *)v6;
  if ( !v6 )
    return v17;
  if ( (*(_DWORD *)(v6 + 48) & 0x6200000) != 0x4200000 || (*(_DWORD *)(v6 + 64) & 1) != 0 )
  {
    v3 = -1073741800;
  }
  else
  {
    v9 = (__int64 **)(v6 + 80);
    v10 = 0;
    v11 = *(__int64 ***)(v6 + 80);
    while ( v11 != v9 )
    {
      if ( v10 == -1 )
        goto LABEL_11;
      v11 = (__int64 **)*v11;
      ++v10;
    }
    v12 = sub_1402828F0(256, 24LL * v10, 0x4C4D4556u);
    if ( !v12 )
    {
LABEL_11:
      v3 = -1073741670;
      goto LABEL_16;
    }
    v13 = *v9;
    v14 = 0;
    while ( v13 != (__int64 *)v9 )
    {
      v15 = v14++;
      v16 = 3 * v15;
      v12[v16] = v13[2];
      v12[v16 + 1] = v13[3];
      LODWORD(v12[v16 + 2]) = *((_DWORD *)v13 + 9);
      HIDWORD(v12[v16 + 2]) = *((_DWORD *)v13 + 10);
      v13 = (__int64 *)*v13;
    }
    *a2 = v12;
    *a3 = v14;
  }
LABEL_16:
  sub_14030EA70(v7);
  return v3;
}
