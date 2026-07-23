/*
 * XREFs of RtlpGenerateInheritedAce @ 0x180044620
 * Callers:
 *     RtlpGenerateInheritAcl @ 0x180044438 (RtlpGenerateInheritAcl.c)
 * Callees:
 *     RtlpCopyEffectiveAce @ 0x180011D88 (RtlpCopyEffectiveAce.c)
 *     RtlpIsDuplicateAce @ 0x1800122E8 (RtlpIsDuplicateAce.c)
 *     RtlFirstFreeAce @ 0x180048120 (RtlFirstFreeAce.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        char *Src,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        unsigned int a10,
        unsigned int *a11,
        PACL Acl,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  __int64 v17; // r13
  unsigned int v18; // edi
  char v19; // r12
  void *v20; // rcx
  bool v21; // zf
  char v23; // al
  char v24; // al
  unsigned int v25; // eax
  char v26; // [rsp+88h] [rbp-9h] BYREF
  char v27; // [rsp+89h] [rbp-8h]
  char v28; // [rsp+8Ah] [rbp-7h] BYREF
  unsigned int v29; // [rsp+8Ch] [rbp-5h] BYREF
  __int64 v30[7]; // [rsp+90h] [rbp-1h] BYREF

  v29 = 0;
  v15 = 0;
  v28 = 0;
  v16 = 0;
  v26 = 0;
  v17 = 0LL;
  *a14 = 0;
  v18 = 0;
  v19 = 0;
  v27 = a2 && (v23 = Src[1], (v23 & 4) == 0) && ((v23 & 1) != 0 || (v23 & 2) != 0);
  if ( !RtlFirstFreeAce(Acl, (PVOID *)v30) )
    return 3221225597LL;
  v20 = (void *)v30[0];
  if ( !v30[0] )
    return 3221225597LL;
  if ( a2 )
    v21 = (Src[1] & 2) == 0;
  else
    v21 = (Src[1] & 1) == 0;
  if ( v21 )
    goto LABEL_8;
  v17 = v30[0];
  if ( !RtlpCopyEffectiveAce(
          Src,
          a3,
          v27,
          a4,
          a5,
          a6,
          a7,
          GenericMapping,
          a9,
          a10,
          (void **)v30,
          &v29,
          (__int64)Acl,
          a14,
          &v28,
          &v26) )
    return 3221225597LL;
  v18 = v29;
  if ( !v26 && v29 )
  {
    if ( RtlpIsDuplicateAce((__int64)Acl, v17) )
    {
      v16 = v29;
      v20 = (void *)v17;
      --Acl->AceCount;
      v18 = 0;
      v30[0] = v17;
      v29 = 0;
      goto LABEL_16;
    }
    v18 = v29;
  }
  v20 = (void *)v30[0];
LABEL_16:
  v19 = v28;
  v15 = v18;
LABEL_8:
  if ( !v27 )
    goto LABEL_9;
  if ( v18 && !v19 )
  {
    if ( !v26 )
    {
      v24 = *(_BYTE *)(v17 + 1) | Src[1] & 3;
      *(_BYTE *)(v17 + 1) = v24;
      if ( a3 )
        *(_BYTE *)(v17 + 1) = v24 | 0x10;
    }
    goto LABEL_9;
  }
  if ( (unsigned __int8)*Src <= 8u && !*((_DWORD *)Src + 1) )
  {
LABEL_9:
    *a11 = v15;
    *a13 = v16;
    return v26 != 0 ? 0xC0000023 : 0;
  }
  v15 += *((unsigned __int16 *)Src + 1);
  if ( v15 <= 0xFFFF )
  {
    if ( *((unsigned __int16 *)Src + 1) > (__int64)Acl + Acl->AclSize - (_QWORD)v20 )
    {
      v26 = 1;
    }
    else if ( !v26 )
    {
      memmove(v20, Src, *((unsigned __int16 *)Src + 1));
      *(_BYTE *)(v30[0] + 1) |= 8u;
      ++Acl->AceCount;
      if ( a3 )
      {
        *(_BYTE *)(v30[0] + 1) |= 0x10u;
        if ( RtlpIsDuplicateAce((__int64)Acl, v30[0]) )
        {
          --Acl->AceCount;
          v25 = *((unsigned __int16 *)Src + 1);
          v15 -= v25;
          if ( v16 <= v25 )
            v16 = *((unsigned __int16 *)Src + 1);
        }
      }
    }
    goto LABEL_9;
  }
  return 3221225597LL;
}
