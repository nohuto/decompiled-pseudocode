/*
 * XREFs of RtlFindAceBySid @ 0x1800F4974
 * Callers:
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x180012520 (RtlEqualSid.c)
 */

unsigned __int8 *__fastcall RtlFindAceBySid(__int64 a1, void *a2, unsigned int *a3)
{
  unsigned int v5; // ebp
  unsigned __int8 *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int v9; // edx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rcx

  if ( !a1 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( 1 )
  {
    v8 = *v6;
    if ( (unsigned __int8)v8 <= 0x15u && (v9 = 4089359, _bittest(&v9, v8)) )
    {
      v10 = 8LL;
    }
    else if ( (_BYTE)v8 == 4 )
    {
      v10 = 12LL;
    }
    else
    {
      if ( (unsigned __int8)(v8 - 5) > 3u && (unsigned __int8)(v8 - 11) > 1u && (unsigned __int8)(v8 - 15) > 1u )
        goto LABEL_18;
      v10 = 16LL * (*((_DWORD *)v6 + 2) & 1) + ((8LL * (*((_DWORD *)v6 + 2) & 2)) | 0xC);
    }
    v11 = &v6[v10];
    if ( v11 )
      break;
LABEL_18:
    ++v7;
    v6 += *((unsigned __int16 *)v6 + 1);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    if ( RtlEqualSid(v11, a2) )
      return v6;
    goto LABEL_18;
  }
  if ( v7 < *a3 || !RtlEqualSid(v11, a2) )
    goto LABEL_18;
  *a3 = v7;
  return v6;
}
