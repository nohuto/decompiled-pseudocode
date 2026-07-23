/*
 * XREFs of sub_14028AC10 @ 0x14028AC10
 * Callers:
 *     sub_140204EA0 @ 0x140204EA0 (sub_140204EA0.c)
 *     sub_1402053E4 @ 0x1402053E4 (sub_1402053E4.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     sub_140376790 @ 0x140376790 (sub_140376790.c)
 *     sub_14064A67C @ 0x14064A67C (sub_14064A67C.c)
 * Callees:
 *     sub_14064A5F8 @ 0x14064A5F8 (sub_14064A5F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14028AC10(__int64 a1, char a2)
{
  void **v3; // rbx
  _DWORD *v4; // rcx
  int v5; // eax
  _QWORD *v6; // rax
  void **v7; // rdx
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  _DWORD **v10; // rdx
  void **v11; // r8
  int v12; // eax
  __int64 *v13; // rbp

  if ( !a2 )
  {
    v3 = (void **)(a1 + 72);
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == v3 )
        break;
      v5 = v4[8];
      if ( (v5 & 2) != 0 )
      {
        v10 = (_DWORD **)*((_QWORD *)v4 + 2);
        if ( v10[1] != v4 + 4 || (v11 = (void **)*((_QWORD *)v4 + 3), *v11 != v4 + 4) )
LABEL_18:
          __fastfail(3u);
        *v11 = v10;
        v10[1] = v11;
        v4[8] &= ~2u;
        v5 = v4[8];
        if ( a1 )
        {
          --*(_DWORD *)(a1 + 88);
          v5 = v4[8];
        }
      }
      if ( (v5 & 1) != 0 )
      {
        v6 = *(_QWORD **)v4;
        if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 )
          goto LABEL_18;
        v7 = (void **)*((_QWORD *)v4 + 1);
        if ( *v7 != v4 )
          goto LABEL_18;
        *v7 = v6;
        v6[1] = v7;
        v4[8] &= ~1u;
        if ( a1 )
        {
          --*(_DWORD *)(a1 + 60);
          if ( (v4[8] & 4) != 0 )
            --*(_DWORD *)(a1 + 64);
        }
      }
      ExFreePoolWithTag(v4, 0);
    }
  }
  v8 = (__int64 *)(a1 + 96);
  v9 = *(__int64 **)(a1 + 96);
  if ( (__int64 *)*v8 != v8 )
  {
    do
    {
      v12 = *((_DWORD *)v9 + 4);
      v13 = v9 - 2;
      v9 = (__int64 *)*v9;
      if ( (v12 & 1) == 0 )
      {
        sub_14064A5F8(a1, v13, 0LL);
        ExFreePoolWithTag(v13, 0);
      }
    }
    while ( v9 != v8 );
  }
}
