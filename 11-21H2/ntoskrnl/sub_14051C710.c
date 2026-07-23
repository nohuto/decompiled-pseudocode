/*
 * XREFs of sub_14051C710 @ 0x14051C710
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051CB78 @ 0x14051CB78 (sub_14051CB78.c)
 *     sub_14051CBE4 @ 0x14051CBE4 (sub_14051CBE4.c)
 *     sub_14051CCC0 @ 0x14051CCC0 (sub_14051CCC0.c)
 *     sub_14051CD50 @ 0x14051CD50 (sub_14051CD50.c)
 *     sub_14051CD90 @ 0x14051CD90 (sub_14051CD90.c)
 */

__int64 __fastcall sub_14051C710(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // r9
  int v9; // r10d
  __int64 v11; // rax
  int *v12; // rdx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = -1073741637;
  v5 = sub_14051CD90();
  if ( !v5 || *(_DWORD *)(v5 + 28) > 0x10u )
    return v4;
  v6 = *(_QWORD *)(v5 + 48);
  v15 = *(_QWORD *)(v6 + 40);
  if ( !byte_140D016C4 || !qword_140C54B90 )
    goto LABEL_14;
  if ( *(_DWORD *)v6 >= 3u )
    *(_DWORD *)(v6 + 276) |= 1u;
  if ( !(unsigned __int8)sub_14051CD50(*(unsigned int *)(v6 + 4), &v15) )
  {
    if ( v7 >= 3 )
      *(_BYTE *)(v6 + 280) = 0;
    if ( v9 == 1 )
      sub_14051CBE4(v6);
    else
      sub_14051CB78(v6);
    v4 = 0;
    goto LABEL_49;
  }
  if ( v7 >= 3 )
    *(_BYTE *)(v6 + 280) = 1;
  if ( (v8 & 0x4000000000000000LL) != 0 && !byte_140D0159C )
  {
    if ( v7 >= 3 )
      *(_DWORD *)(v6 + 272) |= 2u;
    goto LABEL_14;
  }
  if ( (v8 & 0x200000000000000LL) != 0 )
  {
    if ( v7 >= 3 )
      *(_DWORD *)(v6 + 272) |= 4u;
    goto LABEL_14;
  }
  v4 = sub_14051CCC0(v6);
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_14;
  v11 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
  v12 = *(int **)(v11 + 32);
  v13 = *v12;
  if ( (*v12 & 0x10) != 0 && *(_DWORD *)v6 >= 3u )
  {
    *(_BYTE *)(v6 + 282) = 1;
    v13 = *v12;
  }
  if ( (v13 & 1) == 0 )
    goto LABEL_27;
  v14 = *(_DWORD *)(v11 + 40);
  if ( v14 )
  {
    switch ( v14 )
    {
      case 12:
        if ( *(_DWORD *)v6 >= 3u )
          *(_DWORD *)(v6 + 272) |= 0x100u;
        break;
      case 10:
        if ( *(_DWORD *)v6 >= 3u )
          *(_DWORD *)(v6 + 272) |= 0x80u;
        break;
      case 13:
        if ( *(_DWORD *)v6 >= 3u )
          *(_DWORD *)(v6 + 272) |= 0x200u;
        break;
      case 14:
        if ( *(_DWORD *)v6 >= 3u )
          *(_DWORD *)(v6 + 272) |= 0x400u;
        v4 = -1073741571;
        goto LABEL_14;
      default:
        goto LABEL_27;
    }
    v4 = -1073741637;
LABEL_14:
    if ( *(_DWORD *)v6 >= 3u )
      *(_BYTE *)(v6 + 281) = 0;
    return v4;
  }
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v13 = *v12;
LABEL_27:
  if ( (v13 & 4) != 0 )
    *((_QWORD *)v12 + 1) = a1;
LABEL_49:
  if ( *(_DWORD *)v6 >= 3u )
    *(_BYTE *)(v6 + 281) = 1;
  *a2 = 2;
  return v4;
}
