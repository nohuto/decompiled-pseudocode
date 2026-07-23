/*
 * XREFs of RtlpInheritAcl2 @ 0x1406C4100
 * Callers:
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpGenerateInheritAcl @ 0x1406C3AC0 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x1406C45B0 (RtlpCopyAces.c)
 *     RtlFirstFreeAce @ 0x1407F32C0 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        UCHAR *a1,
        unsigned __int8 *a2,
        __int16 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        unsigned int *a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  int v18; // ebp
  int v19; // ebx
  int v20; // r14d
  char v22; // r8
  int v23; // r12d
  char v24; // r11
  unsigned int v26; // esi
  _BYTE *v27; // r10
  int v28; // ecx
  int v29; // edx
  char v30; // r9
  char v31; // al
  __int64 result; // rax
  char v33; // r12
  int v34; // ecx
  UCHAR v35; // r15
  __int64 v36; // rax
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // [rsp+80h] [rbp-58h] BYREF
  __int64 v40; // [rsp+88h] [rbp-50h] BYREF
  PVOID v41; // [rsp+90h] [rbp-48h] BYREF
  PVOID FirstFree; // [rsp+98h] [rbp-40h] BYREF
  char v44; // [rsp+F0h] [rbp+18h]

  v18 = 0;
  v19 = 0;
  v40 = 0LL;
  v20 = 0;
  FirstFree = 0LL;
  v41 = 0LL;
  v22 = 0;
  v39 = 0x200000100LL;
  v23 = 2;
  v24 = a4;
  v44 = 0;
  v26 = *a15;
  if ( *a15 - 8 <= 0xFFF4 )
  {
    memset(Acl, 0, v26);
    v24 = a4;
    *(_WORD *)&Acl->AclRevision = 2;
    Acl->AclSize = v26 & 0xFFFC;
    *(_DWORD *)&Acl->AceCount = 0;
    v22 = 0;
  }
  v27 = a17;
  v28 = a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  v29 = a3 & 8;
  *a18 = v28;
  if ( (a3 & 8) != 0 )
    goto LABEL_42;
  if ( (a3 & 0x1000) != 0 )
  {
    v22 = 1;
    v44 = 1;
    *a18 = v28 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
  {
    v29 = a3 & 8;
LABEL_42:
    v33 = 0;
    goto LABEL_22;
  }
  if ( a2 )
  {
    if ( *a2 >= 2u )
      HIDWORD(v39) = *a2;
    BYTE1(v39) = 0;
    if ( a5 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        v30 = 16;
      }
      else
      {
        v23 = 1;
        v30 = 0;
      }
      v31 = 1;
    }
    else
    {
      v30 = 0;
      v31 = 0;
    }
    result = RtlpCopyAces((int)a2, a11, v23, v30, v31, a7, a8, a9, a10, v24, 0, a12, (__int64)&v40 + 4, Acl);
    v18 = HIDWORD(v40);
    v19 = HIDWORD(v40);
    if ( (_DWORD)result == -1073741789 )
    {
      v33 = 1;
    }
    else
    {
      if ( (int)result < 0 )
        return result;
      v33 = 0;
    }
    if ( a6 )
    {
      if ( HIDWORD(v40) )
      {
        WORD1(v39) = Acl->AceCount;
        if ( !RtlFirstFreeAce(Acl, &FirstFree) )
          return 3221225597LL;
      }
    }
    v22 = v44;
    v27 = a17;
LABEL_19:
    v34 = a12;
    if ( a12 != 1 )
      goto LABEL_20;
LABEL_46:
    *v27 = 1;
    goto LABEL_21;
  }
  if ( !a5 )
  {
    v33 = 0;
    goto LABEL_19;
  }
  v34 = a12;
  if ( a12 == 1 )
  {
    if ( (a3 & 0x1004) == 4 )
      return 3221225591LL;
    v33 = 0;
    goto LABEL_46;
  }
  v33 = 0;
LABEL_20:
  if ( v34 == 2 )
  {
    if ( !v18 && !v22 )
    {
      if ( a2 && !*((_WORD *)a2 + 2) )
      {
        v29 = a3 & 8;
        *v27 = 1;
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    goto LABEL_46;
  }
LABEL_21:
  v29 = a3 & 8;
LABEL_22:
  if ( (a5 || (a3 & 4) != 0) && !v29 && (!a5 || v22) || !a1 )
  {
    v35 = BYTE4(v39);
    goto LABEL_28;
  }
  v37 = *a1;
  if ( (unsigned __int8)(v37 - 2) > 2u )
    return 3221225560LL;
  v35 = BYTE4(v39);
  if ( HIDWORD(v39) <= v37 )
    v35 = *a1;
  result = RtlpGenerateInheritAcl((__int64)a1, a4, a5, a7, a8, a9, a10, a11, a13, a14, a12, v33, &v40, Acl, &v39);
  if ( (_DWORD)result == -1073741789 )
  {
    v33 = 1;
LABEL_39:
    if ( a6 && v18 && (_BYTE)v39 && !v33 )
    {
      if ( !RtlFirstFreeAce(Acl, &v41) )
        return 3221225597LL;
      v38 = (int)v41;
      if ( !v41 )
        v38 = (_DWORD)Acl + Acl->AclSize;
      memmove(&Acl[1], FirstFree, (unsigned int)(v38 - (_DWORD)FirstFree));
      Acl->AceCount -= WORD1(v39);
      v19 = 0;
    }
    v20 = v40;
LABEL_28:
    v36 = (unsigned int)(v20 + v19);
    if ( !(_DWORD)v36 )
    {
      if ( !*a17 )
      {
        *a15 = 0;
        return 2147483659LL;
      }
      if ( BYTE1(v39) )
      {
        *a15 = 0;
        return 0LL;
      }
    }
    if ( (unsigned __int64)(v36 + 8) <= 0xFFFF )
    {
      *a15 = v20 + v18 + 8;
      if ( v33 )
        return 3221225507LL;
      Acl->AclRevision = v35;
      Acl->AclSize = v20 + v19 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  if ( (int)result >= 0 )
    goto LABEL_39;
  return result;
}
