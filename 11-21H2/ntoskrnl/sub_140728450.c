/*
 * XREFs of sub_140728450 @ 0x140728450
 * Callers:
 *     sub_140727FB0 @ 0x140727FB0 (sub_140727FB0.c)
 *     sub_1409B9860 @ 0x1409B9860 (sub_1409B9860.c)
 * Callees:
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407288D0 @ 0x1407288D0 (sub_1407288D0.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 */

__int64 __fastcall sub_140728450(
        __int64 a1,
        GENERIC_MAPPING *a2,
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
  char v14; // r15
  int v15; // esi
  GENERIC_MAPPING *v16; // r10
  unsigned __int8 v17; // al
  __int64 v18; // r9
  PACL v19; // rcx
  unsigned int v20; // r8d
  ACCESS_MASK *v21; // rdi
  __int64 v22; // rbx
  unsigned int v23; // ecx
  unsigned int v24; // r12d
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rsi
  char v28; // al
  char v29; // dl
  char v30; // r8
  bool v31; // cf
  unsigned int v33; // eax
  int v34; // ecx
  ACCESS_MASK GenericAll; // eax
  int v36; // edx
  _BYTE v38[15]; // [rsp+81h] [rbp-7Fh] BYREF
  void *v39; // [rsp+90h] [rbp-70h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  unsigned int *v47; // [rsp+D0h] [rbp-30h]
  int v48; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v49; // [rsp+DCh] [rbp-24h]

  v14 = 0;
  v15 = a3;
  v16 = a2;
  v46 = a7;
  v45 = a8;
  v44 = a9;
  v47 = a13;
  v17 = Acl->AclRevision - 2;
  v41 = a3;
  v18 = a1;
  GenericMapping = a2;
  v42 = a1;
  v43 = a6;
  if ( v17 > 2u )
    return 3221225560LL;
  v19 = Acl + 1;
  v20 = 0;
  v21 = 0LL;
  if ( Acl->AceCount )
  {
    do
    {
      if ( v19 >= (PACL)((char *)Acl + Acl->AclSize) )
        return 3221225597LL;
      ++v20;
      v19 = (PACL)((char *)v19 + v19->AclSize);
    }
    while ( v20 < Acl->AceCount );
    v18 = v42;
  }
  if ( v19 <= (PACL)((char *)Acl + Acl->AclSize) )
    v21 = (ACCESS_MASK *)v19;
  v22 = v18 + 8;
  v23 = 0;
  v24 = 0;
  *(_DWORD *)&v38[7] = 0;
  if ( !*(_WORD *)(v18 + 4) )
  {
LABEL_29:
    *v47 = v24;
    return v14 != 0 ? 0xC0000023 : 0;
  }
  v25 = a12;
  do
  {
    if ( *(_BYTE *)v22 == 17 )
    {
      if ( v25 != 3 )
        goto LABEL_27;
      if ( RtlFindAceByType(Acl, 0x11u, 0LL) )
        break;
      v23 = *(_DWORD *)&v38[7];
      v18 = v42;
      v16 = GenericMapping;
    }
    else if ( v25 == 3 )
    {
      goto LABEL_27;
    }
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        if ( (*(_BYTE *)(v22 + 1) & 0x10) != 0 )
          goto LABEL_27;
LABEL_14:
        if ( !a5 )
        {
          v27 = *(unsigned __int16 *)(v22 + 2);
          if ( v21 && v27 <= (__int64)Acl + Acl->AclSize - (_QWORD)v21 )
          {
            if ( !v14 )
            {
              memmove(v21, (const void *)v22, *(unsigned __int16 *)(v22 + 2));
              if ( (*(_BYTE *)v21 < 0xBu || (unsigned __int8)(*(_BYTE *)v21 - 13) <= 1u)
                && (*((_BYTE *)v21 + 1) & 8) == 0 )
              {
                RtlMapGenericMask(v21 + 1, GenericMapping);
                v33 = *(unsigned __int8 *)v21;
                if ( (unsigned __int8)v33 <= 0xAu && (v34 = 1651, _bittest(&v34, v33)) )
                  GenericAll = GenericMapping->GenericAll;
                else
                  GenericAll = GenericMapping->GenericAll | 0x1000000;
                v21[1] &= GenericAll;
              }
              *((_BYTE *)v21 + 1) &= ~a4;
              ++Acl->AceCount;
              goto LABEL_25;
            }
            goto LABEL_49;
          }
          goto LABEL_48;
        }
        v26 = 0;
        *(_DWORD *)&v38[3] = 0;
        LODWORD(v27) = 0;
        v38[2] = 0;
        v39 = v21;
        if ( a10 && (v28 = *(_BYTE *)(v22 + 1), (v28 & 3) != 0) )
        {
          v29 = 1;
        }
        else
        {
          v28 = *(_BYTE *)(v22 + 1);
          v29 = 0;
        }
        v38[1] = v29;
        if ( (v28 & 8) == 0 )
        {
          v38[0] = 0;
          if ( !(unsigned __int8)sub_1407288D0(
                                   (void *)v22,
                                   v46,
                                   v45,
                                   v44,
                                   v16,
                                   0LL,
                                   0,
                                   (__int64)&v39,
                                   (__int64)&v38[3],
                                   (__int64)Acl,
                                   0LL,
                                   (__int64)&v38[2],
                                   (__int64)v38) )
            return 3221225597LL;
          v26 = *(_DWORD *)&v38[3];
          LODWORD(v27) = *(_DWORD *)&v38[3];
          if ( v38[0] )
          {
            v14 = 1;
          }
          else if ( !v14 && *(_DWORD *)&v38[3] )
          {
            v30 = a4;
            *((_BYTE *)v21 + 1) &= ~a4;
            v26 = *(_DWORD *)&v38[3];
            goto LABEL_23;
          }
        }
        v30 = a4;
LABEL_23:
        if ( !v38[1] )
          goto LABEL_24;
        v36 = *(_DWORD *)(v22 + 10);
        v48 = 0;
        v49 = 768;
        if ( !v36 )
          v36 = *(unsigned __int16 *)(v22 + 14) - v49;
        if ( v26 && !v38[2] )
        {
          if ( !v14 )
          {
            *((_BYTE *)v21 + 1) = ~v30 & (*((_BYTE *)v21 + 1) | *(_BYTE *)(v22 + 1) & 0x1F);
            goto LABEL_25;
          }
          goto LABEL_49;
        }
        if ( *(_BYTE *)v22 <= 8u && !*(_DWORD *)(v22 + 4) && v36 )
        {
LABEL_24:
          if ( !v14 )
          {
LABEL_25:
            v21 = (ACCESS_MASK *)((char *)v21 + (unsigned int)v27);
LABEL_26:
            v23 = *(_DWORD *)&v38[7];
            v24 += v27;
            v18 = v42;
            goto LABEL_27;
          }
          goto LABEL_49;
        }
        LODWORD(v27) = *(unsigned __int16 *)(v22 + 2) + (_DWORD)v27;
        if ( (unsigned int)v27 > 0xFFFF )
          return 3221225597LL;
        if ( *(unsigned __int16 *)(v22 + 2) <= (__int64)Acl + Acl->AclSize - (_QWORD)v39 )
        {
          if ( !v14 )
          {
            memmove(v39, (const void *)v22, *(unsigned __int16 *)(v22 + 2));
            *((_BYTE *)v39 + 1) |= 8u;
            *((_BYTE *)v39 + 1) &= ~a4;
            ++Acl->AceCount;
            goto LABEL_25;
          }
LABEL_49:
          v21 = (ACCESS_MASK *)((char *)Acl + Acl->AclSize);
          goto LABEL_26;
        }
LABEL_48:
        v14 = 1;
        goto LABEL_49;
      }
      if ( v15 == 2 )
        goto LABEL_14;
    }
    else if ( (*(_BYTE *)(v22 + 1) & 0x10) != 0 )
    {
      goto LABEL_14;
    }
LABEL_27:
    ++v23;
    v15 = v41;
    v22 += *(unsigned __int16 *)(v22 + 2);
    v16 = GenericMapping;
    v31 = v23 < *(unsigned __int16 *)(v18 + 4);
    v25 = a12;
    *(_DWORD *)&v38[7] = v23;
  }
  while ( v31 );
  if ( v24 <= 0xFFFF )
    goto LABEL_29;
  return 3221225597LL;
}
