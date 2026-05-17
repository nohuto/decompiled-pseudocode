/*
 * XREFs of RtlpNormalizeAcl @ 0x1800F45D0
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800F27D0 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memcmp @ 0x180093310 (memcmp.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpNormalizeAcl(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edx
  char v6; // r9
  __int64 v8; // r10
  char *v9; // r12
  int v10; // r8d
  char *v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // esi
  unsigned __int64 v14; // rbx
  int v15; // ebx
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // rbp
  unsigned int v19; // ecx
  unsigned int v20; // r12d
  __int64 v21; // r15
  int v22; // eax
  char v23; // al
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  char v28; // di
  int v29; // [rsp+24h] [rbp-84h]
  int v30; // [rsp+28h] [rbp-80h]
  unsigned int Size; // [rsp+2Ch] [rbp-7Ch]
  int Size_4; // [rsp+30h] [rbp-78h]
  char *v33; // [rsp+38h] [rbp-70h]
  unsigned int v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+58h] [rbp-50h]
  unsigned __int64 v38; // [rsp+58h] [rbp-50h]

  v3 = a2;
  v4 = 0;
  Size_4 = 0;
  v6 = 0;
  v29 = 0;
  v8 = v3 + 8;
  v30 = 8;
  v9 = (char *)(a1 + 8);
  v33 = (char *)(a1 + 8);
  v10 = 8;
  v34 = *(unsigned __int16 *)(v3 + 4);
  v11 = (char *)(v3 + 8);
  v35 = v3 + 8;
  if ( !*(_WORD *)(v3 + 4) )
    goto LABEL_48;
  v12 = v37;
  while ( 2 )
  {
    v13 = 0;
    if ( a3 )
    {
      v13 = 8;
      if ( *((_WORD *)v11 + 1) < 8u || (unsigned __int8)*v11 >= 0xBu && (unsigned __int8)(*v11 - 13) > 1u )
        goto LABEL_22;
      v38 = *(_QWORD *)v11;
      v12 = *(_QWORD *)v11;
      if ( (*(_QWORD *)v11 & 0x800LL) == 0 )
      {
        v14 = HIDWORD(v38);
        if ( (v38 & 0x8000000000000000uLL) != 0LL )
          LODWORD(v14) = *a3 | HIDWORD(v38);
        if ( (v14 & 0x40000000) != 0 )
          LODWORD(v14) = a3[1] | v14;
        if ( (v14 & 0x20000000) != 0 )
          LODWORD(v14) = a3[2] | v14;
        if ( (v14 & 0x10000000) != 0 )
          LODWORD(v14) = a3[3] | v14;
        v15 = v14 & 0xFFFFFFF;
        if ( (unsigned __int8)v38 <= 0xAu && (v16 = 1651, _bittest(&v16, (unsigned __int8)v38)) )
          v17 = a3[3] & v15;
        else
          v17 = (a3[3] | 0x1000000) & v15;
        HIDWORD(v38) = v17;
        v12 = v38;
      }
      if ( v12 == *(_QWORD *)v11 )
LABEL_22:
        v13 = 0;
    }
    v18 = *((unsigned __int16 *)v11 + 1);
    v19 = *((unsigned __int16 *)v11 + 1) - v13;
    Size = v19;
    if ( *v11 )
    {
LABEL_33:
      v23 = 0;
      goto LABEL_34;
    }
    v20 = 0;
    v21 = v8;
    if ( !v4 )
    {
LABEL_32:
      v9 = v33;
      goto LABEL_33;
    }
    while ( 1 )
    {
      if ( *(_WORD *)(v21 + 2) != (_WORD)v18 || v13 && *(_QWORD *)v21 != v12 )
        goto LABEL_30;
      v22 = memcmp((const void *)(v13 + v21), &v11[v13], v19);
      v4 = v29;
      if ( !v22 )
        break;
      v19 = Size;
LABEL_30:
      ++v20;
      v21 += *(unsigned __int16 *)(v21 + 2);
      if ( v20 >= v4 )
      {
        v10 = v30;
        goto LABEL_32;
      }
    }
    v9 = v33;
    v23 = 1;
    v10 = v30;
LABEL_34:
    if ( v23 )
    {
      if ( !a1 )
        return 1;
    }
    else
    {
      v10 += v18;
      v30 = v10;
      if ( a1 )
      {
        if ( v13 )
          *(_QWORD *)v9 = v12;
        if ( v9 != v11 )
        {
          memmove(&v9[v13], &v11[v13], Size);
          v10 = v30;
        }
        v4 = v29;
        v9 += *((unsigned __int16 *)v9 + 1);
        v33 = v9;
      }
      v29 = ++v4;
    }
    v11 += v18;
    if ( ++Size_4 < v34 )
    {
      v8 = v35;
      continue;
    }
    break;
  }
  v3 = a2;
  v6 = 0;
LABEL_48:
  v25 = (v10 + 3) & 0xFFFFFFFC;
  v26 = v25 - v10;
  if ( v25 != v10 )
  {
    v27 = 0;
    while ( !*v11 )
    {
      ++v27;
      ++v11;
      if ( v27 >= v26 )
        goto LABEL_54;
    }
    v6 = 1;
  }
LABEL_54:
  v28 = v6;
  if ( v25 != *(unsigned __int16 *)(v3 + 2) )
    v28 = 1;
  if ( a1 )
  {
    if ( v26 )
      memset_thunk_772440563353939046(v9, 0, v26);
    *(_QWORD *)a1 = *(_QWORD *)v3;
    *(_WORD *)(a1 + 2) = v25;
    *(_WORD *)(a1 + 4) = v29;
  }
  return v28;
}
