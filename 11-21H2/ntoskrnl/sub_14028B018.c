/*
 * XREFs of sub_14028B018 @ 0x14028B018
 * Callers:
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 * Callees:
 *     sub_14028DDD0 @ 0x14028DDD0 (sub_14028DDD0.c)
 */

char __fastcall sub_14028B018(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  char v4; // bl
  __int64 v5; // r11
  __int64 v6; // r10
  _QWORD *v8; // rdi
  _QWORD *v10; // r10
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)a2 + 0x80000LL;
  v8 = a3;
  if ( v5 <= 0x200000 || (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
    goto LABEL_19;
  if ( v5 > 0x2000000 )
  {
    LOBYTE(a3) = 1;
    v10 = (_QWORD *)sub_14028DDD0(a1, *(_QWORD *)a2 + 0x80000LL, a3);
    goto LABEL_5;
  }
  if ( v6 < v5 )
  {
    if ( *(_DWORD *)(a1 + 36) )
      v14 = 0xFFFFFFFFLL;
    else
      v14 = 8 * ((unsigned __int64)(unsigned int)v5 >> 18);
    v10 = (_QWORD *)(v14 + *(_QWORD *)(a1 + 88) + 16 * (v6 >> 19));
  }
  else
  {
LABEL_19:
    v10 = (_QWORD *)(a1 + 16);
  }
LABEL_5:
  v11 = *v10 - 16LL;
  if ( *(_DWORD *)(a2 + 4) )
  {
LABEL_26:
    while ( *(_WORD *)v11 == 765 && *(_QWORD *)a2 < *(_QWORD *)(v11 + 32) )
    {
      v15 = *(_QWORD *)(v11 + 8);
      if ( *(_QWORD *)a2 >= v15 )
      {
LABEL_18:
        v4 = 1;
        break;
      }
      if ( *v8 >= v15 )
        *v8 = v15;
      v11 = *(_QWORD *)(v11 + 16) - 16LL;
    }
  }
  else if ( *(_WORD *)v11 == 765 )
  {
    if ( *(_DWORD *)(v11 + 36) )
      goto LABEL_26;
    do
    {
      if ( *(_DWORD *)a2 >= *(_DWORD *)(v11 + 32) )
        break;
      v12 = *(_DWORD *)(v11 + 8);
      if ( *(_DWORD *)a2 >= v12 )
        goto LABEL_18;
      if ( *(_DWORD *)v8 >= v12 )
        *(_DWORD *)v8 = v12;
      v11 = *(_QWORD *)(v11 + 16) - 16LL;
    }
    while ( *(_WORD *)v11 == 765 );
  }
  *a4 = v11;
  return v4;
}
