/*
 * XREFs of RtlpCopyAces @ 0x18006EEF4
 * Callers:
 *     RtlpInheritAcl2 @ 0x180018114 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x18008C740 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x180015510 (RtlFindAceByType.c)
 *     RtlpCopyEffectiveAce @ 0x1800167DC (RtlpCopyEffectiveAce.c)
 *     RtlFirstFreeAce @ 0x18001B170 (RtlFirstFreeAce.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        unsigned __int8 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        _DWORD *a13,
        PACL Acl)
{
  char v14; // di
  _DWORD *v16; // r14
  unsigned __int8 v17; // al
  __int64 v18; // rsi
  unsigned int v19; // edx
  unsigned int v20; // r15d
  int *v21; // rbx
  bool v22; // zf
  __int64 v23; // r14
  int v24; // ecx
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // eax
  int v30; // ecx
  char v31; // r15
  char v32; // al
  char v33; // r8
  int v34; // edx
  _BYTE v36[11]; // [rsp+81h] [rbp-68h] BYREF
  unsigned int v37; // [rsp+8Ch] [rbp-5Dh]
  PVOID FirstFree; // [rsp+90h] [rbp-59h] BYREF
  int v39; // [rsp+98h] [rbp-51h]
  __int64 v40; // [rsp+A0h] [rbp-49h]
  __int64 v41; // [rsp+A8h] [rbp-41h]
  __int64 v42; // [rsp+B0h] [rbp-39h]
  __int64 v43; // [rsp+B8h] [rbp-31h]
  unsigned __int8 *v44; // [rsp+C0h] [rbp-29h]
  __int64 v45; // [rsp+C8h] [rbp-21h]
  __int64 v46; // [rsp+D0h] [rbp-19h]
  int v47; // [rsp+D8h] [rbp-11h]
  unsigned __int16 v48; // [rsp+DCh] [rbp-Dh]

  v14 = 0;
  v16 = a13;
  v44 = a6;
  v43 = a7;
  v42 = a8;
  v41 = a9;
  v17 = Acl->AclRevision - 2;
  v39 = a3;
  v40 = a2;
  v45 = a1;
  v46 = (__int64)a13;
  if ( v17 > 2u )
    return 3221225560LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225597LL;
  v18 = a1 + 8;
  v19 = 0;
  v20 = 0;
  v37 = 0;
  *(_DWORD *)&v36[3] = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_35;
  v21 = (int *)FirstFree;
  while ( *(_BYTE *)v18 != 17 )
  {
    if ( a12 != 3 )
      goto LABEL_7;
LABEL_32:
    ++v19;
    v18 += *(unsigned __int16 *)(v18 + 2);
    v37 = v19;
    if ( v19 >= *(unsigned __int16 *)(v45 + 4) )
      goto LABEL_33;
  }
  if ( a12 != 3 )
    goto LABEL_32;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v19 = v37;
LABEL_7:
    if ( v39 )
    {
      if ( v39 == 1 )
        v22 = (*(_BYTE *)(v18 + 1) & 0x10) == 0;
      else
        v22 = v39 == 2;
      if ( !v22 )
        goto LABEL_32;
    }
    else if ( (*(_BYTE *)(v18 + 1) & 0x10) == 0 )
    {
      goto LABEL_32;
    }
    if ( !a5 )
    {
      v23 = *(unsigned __int16 *)(v18 + 2);
      if ( v21 && v23 <= (__int64)Acl + Acl->AclSize - (_QWORD)v21 )
      {
        if ( !v14 )
        {
          memmove(v21, (const void *)v18, *(unsigned __int16 *)(v18 + 2));
          if ( (*(_BYTE *)v21 < 0xBu || (unsigned __int8)(*(_BYTE *)v21 - 13) <= 1u) && (*((_BYTE *)v21 + 1) & 8) == 0 )
          {
            v24 = v21[1];
            v25 = v40;
            if ( v24 < 0 )
              v24 |= *(_DWORD *)v40;
            if ( (v24 & 0x40000000) != 0 )
              v24 |= *(_DWORD *)(v40 + 4);
            if ( (v24 & 0x20000000) != 0 )
              v24 |= *(_DWORD *)(v40 + 8);
            if ( (v24 & 0x10000000) != 0 )
              v24 |= *(_DWORD *)(v40 + 12);
            v26 = v24 & 0xFFFFFFF;
            v21[1] = v26;
            if ( *(_BYTE *)v21 <= 0xAu && (v27 = 1651, _bittest(&v27, *(unsigned __int8 *)v21)) )
              v28 = *(_DWORD *)(v25 + 12);
            else
              v28 = *(_DWORD *)(v25 + 12) | 0x1000000;
            v21[1] = v26 & v28;
          }
          *((_BYTE *)v21 + 1) &= ~a4;
          ++Acl->AceCount;
          goto LABEL_30;
        }
      }
      else
      {
        v14 = 1;
      }
LABEL_67:
      v21 = (int *)((char *)Acl + Acl->AclSize);
      goto LABEL_31;
    }
    v30 = 0;
    v36[0] = 0;
    LODWORD(v23) = 0;
    *(_DWORD *)&v36[7] = 0;
    FirstFree = v21;
    if ( !a10 || (v31 = 1, (*(_BYTE *)(v18 + 1) & 3) == 0) )
      v31 = 0;
    if ( (*(_BYTE *)(v18 + 1) & 8) == 0 )
    {
      v32 = 0;
      if ( a11 )
        v32 = (*(_BYTE *)(v18 + 1) & 0x10) != 0;
      if ( !RtlpCopyEffectiveAce(
              (unsigned __int16 *)v18,
              v32,
              v31,
              v44,
              (unsigned __int8 *)v43,
              v42,
              v41,
              (_DWORD *)v40,
              0LL,
              0,
              &FirstFree,
              &v36[7],
              (__int64)Acl,
              0LL,
              v36,
              &v36[1]) )
        return 3221225597LL;
      v30 = *(_DWORD *)&v36[7];
      LODWORD(v23) = *(_DWORD *)&v36[7];
      if ( v36[1] )
      {
        v14 = 1;
      }
      else if ( !v14 && *(_DWORD *)&v36[7] )
      {
        v33 = a4;
        *((_BYTE *)v21 + 1) &= ~a4;
        v30 = *(_DWORD *)&v36[7];
LABEL_47:
        if ( v31 )
        {
          v47 = 0;
          v34 = *(_DWORD *)(v18 + 10);
          v48 = 768;
          if ( !v34 )
            v34 = *(unsigned __int16 *)(v18 + 14) - v48;
          if ( v30 && !v36[0] )
          {
            v20 = *(_DWORD *)&v36[3];
            if ( v14 )
              goto LABEL_67;
            *((_BYTE *)v21 + 1) = (*((_BYTE *)v21 + 1) | *(_BYTE *)(v18 + 1) & 0x1F) & ~v33;
LABEL_30:
            v21 = (int *)((char *)v21 + (unsigned int)v23);
LABEL_31:
            v19 = v37;
            v20 += v23;
            *(_DWORD *)&v36[3] = v20;
            goto LABEL_32;
          }
          if ( *(_BYTE *)v18 > 8u || *(_DWORD *)(v18 + 4) || !v34 )
          {
            LODWORD(v23) = *(unsigned __int16 *)(v18 + 2) + (_DWORD)v23;
            if ( (unsigned int)v23 > 0xFFFF )
              return 3221225597LL;
            if ( *(unsigned __int16 *)(v18 + 2) > (__int64)Acl + Acl->AclSize - (_QWORD)FirstFree )
            {
              v14 = 1;
              goto LABEL_66;
            }
            if ( v14 )
            {
LABEL_66:
              v20 = *(_DWORD *)&v36[3];
              goto LABEL_67;
            }
            memmove(FirstFree, (const void *)v18, *(unsigned __int16 *)(v18 + 2));
            *((_BYTE *)FirstFree + 1) |= 8u;
            *((_BYTE *)FirstFree + 1) &= ~a4;
            ++Acl->AceCount;
          }
        }
        if ( !v14 )
        {
          v20 = *(_DWORD *)&v36[3];
          goto LABEL_30;
        }
        goto LABEL_66;
      }
    }
    v33 = a4;
    goto LABEL_47;
  }
LABEL_33:
  if ( v20 > 0xFFFF )
    return 3221225597LL;
  v16 = (_DWORD *)v46;
LABEL_35:
  *v16 = v20;
  return v14 != 0 ? 0xC0000023 : 0;
}
