/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x18007B5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x18001B1D0 (RtlValidAcl.c)
 *     RtlpValidateSDOffsetAndSize @ 0x18007B720 (RtlpValidateSDOffsetAndSize.c)
 */

bool __fastcall RtlValidRelativeSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  char v3; // r10
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (unsigned int)a2 < 0x14 || *(_BYTE *)a1 != 1 || *(__int16 *)(a1 + 2) >= 0 )
    return 0;
  v6 = *(unsigned int *)(a1 + 4);
  v7 = 12LL;
  if ( (_DWORD)v6 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v6, a2, 12LL, &v18)
      || *(_BYTE *)(v13 + a1) != 1
      || *(_BYTE *)(v13 + a1 + 1) > 0xFu
      || v18 < 4 * (unsigned int)*(unsigned __int8 *)(v13 + a1 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v8 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned __int8)RtlpValidateSDOffsetAndSize(v8, v4, v7, &v18)
      && *(_BYTE *)(v14 + a1) == 1
      && *(_BYTE *)(v14 + a1 + 1) <= 0xFu
      && v18 >= 4 * (unsigned int)*(unsigned __int8 *)(v14 + a1 + 1) + 8 )
    {
      goto LABEL_8;
    }
    return 0;
  }
  if ( (v3 & 2) != 0 )
    return 0;
LABEL_8:
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    v9 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v9 )
    {
      if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v9, v4, 8LL, &v18) )
        return 0;
      v11 = a1 + v10;
      if ( v18 < *(unsigned __int16 *)(v11 + 2) || !RtlValidAcl(v11) )
        return 0;
    }
  }
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    return 1;
  v15 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v15 )
    return 1;
  if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v15, v4, 8LL, &v18) )
    return 0;
  v17 = a1 + v16;
  if ( v18 < *(unsigned __int16 *)(v17 + 2) )
    return 0;
  return RtlValidAcl(v17) != 0;
}
