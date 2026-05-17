/*
 * XREFs of RtlpComputeMergedAcl2 @ 0x180091A74
 * Callers:
 *     RtlpComputeMergedAcl @ 0x180091978 (RtlpComputeMergedAcl.c)
 * Callees:
 *     RtlCreateAcl @ 0x180010E90 (RtlCreateAcl.c)
 *     RtlpCopyAces @ 0x1800118FC (RtlpCopyAces.c)
 */

__int64 __fastcall RtlpComputeMergedAcl2(
        _BYTE *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int *a9,
        __int64 a10,
        _DWORD *a11)
{
  unsigned int *v13; // r12
  __int64 v14; // r15
  char v16; // di
  bool v17; // bp
  unsigned int v18; // esi
  _DWORD *v19; // rax
  int v20; // ebx
  __int64 result; // rax
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  _DWORD v24[18]; // [rsp+70h] [rbp-48h] BYREF
  int v26; // [rsp+D8h] [rbp+20h] BYREF

  v26 = 0;
  v24[0] = 0;
  v13 = a9;
  v14 = a10;
  v16 = 0;
  v17 = 1;
  v18 = 2;
  RtlCreateAcl(a10, *a9, 2);
  v19 = a11;
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *v19 = 5120;
    if ( !a3 )
      goto LABEL_15;
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    result = RtlpCopyAces((__int64)a3, a7, 2, 16, 1, a5, a6, a5, a6, 1, 0, a8, &v26, v14);
    goto LABEL_31;
  }
  if ( (a2 & 0x1000) == 0 )
  {
    v20 = a8;
    v17 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v18 = *a3;
      result = RtlpCopyAces((__int64)a3, a7, 1, 0, 1, a5, a6, a5, a6, 1, 0, a8, &v26, v14);
      if ( (_DWORD)result == -1073741789 )
      {
        v16 = 1;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
      if ( !*((_WORD *)a3 + 2) )
        v17 = 0;
LABEL_10:
      if ( a1 )
      {
        if ( v18 <= (unsigned __int8)*a1 )
          LOBYTE(v18) = *a1;
        result = RtlpCopyAces((__int64)a1, a7, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 1, 0, v20, v24, v14);
        if ( (_DWORD)result == -1073741789 )
        {
          v16 = 1;
        }
        else if ( (int)result < 0 )
        {
          return result;
        }
      }
      goto LABEL_15;
    }
    if ( a8 != 1 )
      goto LABEL_10;
    return 3221225591LL;
  }
  if ( a3 )
  {
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    result = RtlpCopyAces((__int64)a3, a7, 2, 0, 1, a5, a6, a5, a6, 1, 1, a8, &v26, v14);
LABEL_31:
    if ( (_DWORD)result == -1073741789 )
    {
      v16 = 1;
    }
    else if ( (int)result < 0 )
    {
      return result;
    }
    v17 = 0;
    goto LABEL_15;
  }
  if ( a8 == 1 )
    return 3221225591LL;
LABEL_15:
  v22 = v24[0] + v26;
  if ( v24[0] + v26 || !v17 )
  {
    if ( (unsigned __int64)v22 + 8 > 0xFFFF )
      return 3221225597LL;
    v23 = v22 + 8;
    *v13 = v23;
    if ( v16 )
      return 3221225507LL;
    *(_WORD *)(v14 + 2) = v23;
    *(_BYTE *)v14 = v18;
  }
  else
  {
    *v13 = 0;
  }
  return 0LL;
}
