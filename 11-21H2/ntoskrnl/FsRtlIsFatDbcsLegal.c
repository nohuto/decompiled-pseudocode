/*
 * XREFs of FsRtlIsFatDbcsLegal @ 0x140693FB0
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x140693FB0 (FsRtlIsFatDbcsLegal.c)
 * Callees:
 *     FsRtlIsFatDbcsLegal @ 0x140693FB0 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x1408814B0 (FsRtlDoesDbcsContainWildCards.c)
 *     FsRtlDissectDbcs @ 0x14092EF60 (FsRtlDissectDbcs.c)
 */

BOOLEAN __stdcall FsRtlIsFatDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // cx
  char v7; // si
  char *v8; // rdi
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  char v14; // dl
  char *Buffer; // rax
  _STRING v16; // xmm1
  __int16 v17; // ax
  int v18; // r8d
  __int64 v19; // rdx
  _STRING RemainingName; // [rsp+20h] [rbp-48h] BYREF
  _STRING FirstName; // [rsp+30h] [rbp-38h] BYREF
  ANSI_STRING Path; // [rsp+40h] [rbp-28h] BYREF

  Length = DbcsName->Length;
  v7 = 0;
  if ( !Length )
    return 0;
  if ( WildCardsPermissible )
  {
    if ( Length == 1 )
    {
      v14 = *DbcsName->Buffer;
      if ( v14 == 46 || v14 == 34 )
        return 1;
    }
    if ( Length == 2 )
    {
      Buffer = DbcsName->Buffer;
      if ( *Buffer == 46 && Buffer[1] == 46 )
        return 1;
      if ( *Buffer == 34 && Buffer[1] == 34 )
        return 1;
    }
  }
  v8 = DbcsName->Buffer;
  if ( *v8 != 92 )
    goto LABEL_4;
  if ( !LeadingBackslashPermissible )
    return 0;
  if ( Length <= 1u )
    return 1;
  DbcsName->Buffer = ++v8;
  --DbcsName->MaximumLength;
  DbcsName->Length = Length - 1;
LABEL_4:
  if ( PathNamePermissible )
  {
    v16 = *DbcsName;
    v17 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
    FirstName = 0LL;
    RemainingName = v16;
    if ( v17 )
    {
      while ( *(_BYTE *)_mm_srli_si128((__m128i)v16, 8).m128i_i8[0] != 92 )
      {
        Path = v16;
        FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
        Path = FirstName;
        if ( !FsRtlIsFatDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
          break;
        if ( !RemainingName.Length )
          return 1;
        v16 = RemainingName;
      }
      return 0;
    }
    return 1;
  }
  if ( WildCardsPermissible && FsRtlDoesDbcsContainWildCards(DbcsName) )
  {
    v18 = 0;
    if ( DbcsName->Length )
    {
      while ( 1 )
      {
        v19 = (unsigned __int8)v8[v18];
        if ( (unsigned __int8)v19 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + v19) )
        {
          ++v18;
        }
        else if ( (v19 & 0x80u) == 0LL && (*((_BYTE *)qword_140015C50 + v19) & 9) == 0 )
        {
          return 0;
        }
        if ( ++v18 >= (unsigned int)DbcsName->Length )
          return 1;
      }
    }
    return 1;
  }
  v9 = DbcsName->Length;
  if ( v9 <= 0xC )
  {
    v10 = 0;
    if ( !(_WORD)v9 )
      return 1;
    do
    {
      v11 = (unsigned __int8)v8[v10];
      if ( (unsigned __int8)v11 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + v11) )
      {
        if ( !v7 && v10 >= 7 || v10 == v9 - 1 )
          return 0;
        ++v10;
      }
      else
      {
        if ( (v11 & 0x80u) == 0LL
          && ((WildCardsPermissible != 0 ? 9 : 1) & *((unsigned __int8 *)qword_140015C50 + v11)) == 0 )
        {
          return 0;
        }
        if ( (_BYTE)v11 == 46 || (_BYTE)v11 == 34 )
        {
          if ( !v10 || v7 || v9 - v10 - 1 > 3 || v8[v10 - 1] == 32 )
            return 0;
          v7 = 1;
        }
        if ( v10 >= 8 && !v7 )
          return 0;
      }
      ++v10;
    }
    while ( v10 < v9 );
    if ( (unsigned __int8)v11 > 0x2Eu )
      return 1;
    v12 = 0x400500000000LL;
    if ( !_bittest64(&v12, v11) )
      return 1;
  }
  return 0;
}
