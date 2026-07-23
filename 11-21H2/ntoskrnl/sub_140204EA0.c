/*
 * XREFs of sub_140204EA0 @ 0x140204EA0
 * Callers:
 *     sub_140204E2C @ 0x140204E2C (sub_140204E2C.c)
 * Callees:
 *     sub_14028AC10 @ 0x14028AC10 (sub_14028AC10.c)
 *     sub_1403767E0 @ 0x1403767E0 (sub_1403767E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140204EA0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  unsigned __int8 v4; // si
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  int v11; // edx
  _QWORD *v12; // rcx
  int v13; // r9d
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rdx

  v3 = *(_DWORD *)(a2 + 56);
  v4 = 0;
  if ( (v3 & 2) != 0 )
  {
    v6 = a2 + 16;
    v7 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(v7 + 8) != v6 )
      goto LABEL_28;
    a3 = *(_QWORD **)(v6 + 8);
    if ( *a3 != v6 )
      goto LABEL_28;
    *a3 = v7;
    *(_QWORD *)(v7 + 8) = a3;
    *(_DWORD *)(a2 + 56) &= ~2u;
    v3 = *(_DWORD *)(a2 + 56);
    if ( a1 )
    {
      --*(_DWORD *)(a1 + 24);
      v3 = *(_DWORD *)(a2 + 56);
    }
  }
  if ( (v3 & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    sub_1403767E0(a1, a2, a3, 0LL);
    sub_14028AC10(a2, 0LL);
    return 1;
  }
  if ( (v3 & 1) == 0 )
  {
    v8 = *(_QWORD **)(a1 + 16);
    if ( *v8 == a1 + 8 )
    {
      *(_QWORD *)a2 = a1 + 8;
      *(_QWORD *)(a2 + 8) = v8;
      *v8 = a2;
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)(a2 + 56) |= 1u;
      ++*(_DWORD *)a1;
      goto LABEL_10;
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_10:
  v9 = (_QWORD *)(a2 + 96);
  while ( 1 )
  {
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      return v4;
    v11 = *((_DWORD *)v10 + 4);
    v12 = v10 - 2;
    v13 = v11 & 4;
    if ( (v11 & 2) != 0 )
    {
      v14 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_28;
      v15 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v15 != v10 )
        goto LABEL_28;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *((_DWORD *)v12 + 8) &= ~2u;
      --*(_DWORD *)(a2 + 88);
      v11 = *((_DWORD *)v12 + 8);
    }
    if ( v13 )
    {
      if ( (v11 & 1) != 0 )
      {
        v18 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12 )
          goto LABEL_28;
        v19 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v19 != v12 )
          goto LABEL_28;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *((_DWORD *)v12 + 8) &= ~1u;
        --*(_DWORD *)(a2 + 60);
        if ( (v12[4] & 4) != 0 )
          --*(_DWORD *)(a2 + 64);
      }
      ExFreePoolWithTag(v12, 0);
    }
    else if ( (v11 & 1) == 0 )
    {
      v16 = *(_QWORD **)(a2 + 80);
      if ( *v16 != a2 + 72 )
        goto LABEL_28;
      *v12 = a2 + 72;
      v12[1] = v16;
      *v16 = v12;
      *(_QWORD *)(a2 + 80) = v12;
      *((_DWORD *)v12 + 8) |= 1u;
      ++*(_DWORD *)(a2 + 60);
    }
  }
}
