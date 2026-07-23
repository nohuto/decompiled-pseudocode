/*
 * XREFs of RtlpCopyAces @ 0x1406C4630
 * Callers:
 *     RtlpInheritAcl2 @ 0x1406C4180 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1409BC98C (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x1402AD1C0 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x1406C4B30 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  char v14; // r14
  PACL v15; // r15
  int v16; // esi
  __int64 v17; // r11
  unsigned __int8 v18; // al
  __int64 v19; // r9
  unsigned int AceCount; // edx
  USHORT *p_AclSize; // r10
  PACL v22; // rcx
  int *v23; // rbx
  unsigned int v24; // r8d
  __int64 v25; // rdi
  unsigned int v26; // ecx
  unsigned int v27; // r13d
  int v28; // eax
  int v29; // ecx
  signed __int64 v30; // rsi
  bool v31; // r15
  char v32; // r8
  bool v33; // cf
  unsigned int v35; // edx
  int v36; // ecx
  __int64 v37; // r8
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  unsigned __int16 *v41; // rcx
  int v42; // edx
  _BYTE v44[15]; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned int v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  void *v47; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  __int64 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  unsigned int *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v57; // [rsp+ECh] [rbp-14h]

  v14 = 0;
  v15 = Acl;
  v16 = a3;
  v54 = a6;
  v17 = a2;
  v53 = a7;
  v52 = a8;
  v51 = a9;
  v55 = a13;
  v18 = Acl->AclRevision - 2;
  v49 = a3;
  v19 = a1;
  v48 = a2;
  v50 = a1;
  v46 = (__int64)Acl;
  if ( v18 > 2u )
    return 3221225560LL;
  AceCount = Acl->AceCount;
  p_AclSize = &Acl->AclSize;
  v22 = Acl + 1;
  v23 = 0LL;
  v24 = 0;
  *(_QWORD *)&v44[7] = &Acl->AclSize;
  if ( AceCount )
  {
    do
    {
      if ( v22 >= (PACL)((char *)Acl + *p_AclSize) )
        return 3221225597LL;
      ++v24;
      v22 = (PACL)((char *)v22 + v22->AclSize);
    }
    while ( v24 < AceCount );
    v19 = v50;
  }
  else
  {
    *(_QWORD *)&v44[7] = &Acl->AclSize;
  }
  if ( v22 <= (PACL)((char *)Acl + *p_AclSize) )
    v23 = (int *)v22;
  v25 = v19 + 8;
  v26 = 0;
  v27 = 0;
  v45 = 0;
  if ( !*(_WORD *)(v19 + 4) )
  {
LABEL_30:
    *v55 = v27;
    return v14 != 0 ? 0xC0000023 : 0;
  }
  v28 = a12;
  do
  {
    if ( *(_BYTE *)v25 == 17 )
    {
      if ( v28 != 3 )
        goto LABEL_28;
      if ( RtlFindAceByType(v15, 0x11u, 0LL) )
        break;
      v26 = v45;
      v19 = v50;
      p_AclSize = *(USHORT **)&v44[7];
      v17 = v48;
    }
    else if ( v28 == 3 )
    {
      goto LABEL_28;
    }
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        if ( (*(_BYTE *)(v25 + 1) & 0x10) != 0 )
          goto LABEL_28;
LABEL_15:
        if ( !a5 )
        {
          v30 = *(unsigned __int16 *)(v25 + 2);
          if ( v23 && v30 <= (__int64)v15 + *p_AclSize - (_QWORD)v23 )
          {
            if ( !v14 )
            {
              memmove(v23, (const void *)v25, *(unsigned __int16 *)(v25 + 2));
              v35 = *(unsigned __int8 *)v23;
              if ( ((unsigned __int8)v35 < 0xBu || (unsigned __int8)(v35 - 13) <= 1u) && (*((_BYTE *)v23 + 1) & 8) == 0 )
              {
                v36 = v23[1];
                v37 = v48;
                if ( v36 < 0 )
                  v36 |= *(_DWORD *)v48;
                if ( (v36 & 0x40000000) != 0 )
                  v36 |= *(_DWORD *)(v48 + 4);
                if ( (v36 & 0x20000000) != 0 )
                  v36 |= *(_DWORD *)(v48 + 8);
                if ( (v36 & 0x10000000) != 0 )
                  v36 |= *(_DWORD *)(v48 + 12);
                v38 = v36 & 0xFFFFFFF;
                v23[1] = v38;
                if ( (unsigned __int8)v35 <= 0xAu && (v39 = 1651, _bittest(&v39, v35)) )
                  v40 = *(_DWORD *)(v37 + 12);
                else
                  v40 = *(_DWORD *)(v37 + 12) | 0x1000000;
                v23[1] = v38 & v40;
              }
              *((_BYTE *)v23 + 1) &= ~a4;
              ++v15->AceCount;
              goto LABEL_26;
            }
          }
          else
          {
            v14 = 1;
          }
          goto LABEL_58;
        }
        v29 = 0;
        *(_DWORD *)&v44[3] = 0;
        LODWORD(v30) = 0;
        v44[1] = 0;
        v47 = v23;
        v31 = a10 && (*(_BYTE *)(v25 + 1) & 3) != 0;
        if ( (*(_BYTE *)(v25 + 1) & 8) == 0 )
        {
          v44[0] = 0;
          if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                   (void *)v25,
                                   v53,
                                   v52,
                                   v51,
                                   v17,
                                   0LL,
                                   0,
                                   (__int64)&v47,
                                   (__int64)&v44[3],
                                   v46,
                                   0LL,
                                   (__int64)&v44[1],
                                   (__int64)v44) )
            return 3221225597LL;
          v29 = *(_DWORD *)&v44[3];
          LODWORD(v30) = *(_DWORD *)&v44[3];
          if ( v44[0] )
          {
            v14 = 1;
          }
          else if ( !v14 && *(_DWORD *)&v44[3] )
          {
            v32 = a4;
            *((_BYTE *)v23 + 1) &= ~a4;
            v29 = *(_DWORD *)&v44[3];
LABEL_24:
            if ( !v31 )
            {
LABEL_25:
              v15 = (PACL)v46;
              if ( !v14 )
              {
LABEL_26:
                v23 = (int *)((char *)v23 + (unsigned int)v30);
LABEL_27:
                v26 = v45;
                v27 += v30;
                v19 = v50;
                goto LABEL_28;
              }
              goto LABEL_58;
            }
            v42 = *(_DWORD *)(v25 + 10);
            v56 = 0;
            v57 = 768;
            if ( !v42 )
              v42 = *(unsigned __int16 *)(v25 + 14) - v57;
            if ( !v29 || v44[1] )
            {
              if ( *(_BYTE *)v25 > 8u || *(_DWORD *)(v25 + 4) || !v42 )
              {
                LODWORD(v30) = *(unsigned __int16 *)(v25 + 2) + (_DWORD)v30;
                if ( (unsigned int)v30 > 0xFFFF )
                  return 3221225597LL;
                v41 = *(unsigned __int16 **)&v44[7];
                v15 = (PACL)v46;
                if ( *(unsigned __int16 *)(v25 + 2) > v46 + (unsigned __int16)**(_WORD **)&v44[7] - (_QWORD)v47 )
                {
                  v14 = 1;
                  v23 = (int *)(v46 + (unsigned __int16)**(_WORD **)&v44[7]);
                  goto LABEL_27;
                }
                if ( !v14 )
                {
                  memmove(v47, (const void *)v25, *(unsigned __int16 *)(v25 + 2));
                  *((_BYTE *)v47 + 1) |= 8u;
                  *((_BYTE *)v47 + 1) &= ~a4;
                  ++v15->AceCount;
                  goto LABEL_26;
                }
LABEL_59:
                v23 = (int *)((char *)v15 + *v41);
                goto LABEL_27;
              }
              goto LABEL_25;
            }
            v15 = (PACL)v46;
            if ( !v14 )
            {
              *((_BYTE *)v23 + 1) = ~v32 & (*((_BYTE *)v23 + 1) | *(_BYTE *)(v25 + 1) & 0x1F);
              goto LABEL_26;
            }
LABEL_58:
            v41 = *(unsigned __int16 **)&v44[7];
            goto LABEL_59;
          }
        }
        v32 = a4;
        goto LABEL_24;
      }
      if ( v16 == 2 )
        goto LABEL_15;
    }
    else if ( (*(_BYTE *)(v25 + 1) & 0x10) != 0 )
    {
      goto LABEL_15;
    }
LABEL_28:
    ++v26;
    v16 = v49;
    v25 += *(unsigned __int16 *)(v25 + 2);
    p_AclSize = *(USHORT **)&v44[7];
    v33 = v26 < *(unsigned __int16 *)(v19 + 4);
    v28 = a12;
    v17 = v48;
    v45 = v26;
  }
  while ( v33 );
  if ( v27 <= 0xFFFF )
    goto LABEL_30;
  return 3221225597LL;
}
