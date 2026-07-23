/*
 * XREFs of sub_1402A47B0 @ 0x1402A47B0
 * Callers:
 *     sub_140254F94 @ 0x140254F94 (sub_140254F94.c)
 *     sub_140257C7C @ 0x140257C7C (sub_140257C7C.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

unsigned __int8 *__fastcall sub_1402A47B0(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  int v8; // r15d
  unsigned int v9; // ecx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rcx
  unsigned __int64 v12; // rax

  if ( !a1 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  v8 = 4089359;
  while ( 1 )
  {
    v9 = *v6;
    if ( (unsigned __int8)v9 <= 0x15u && _bittest(&v8, v9) )
    {
      v10 = 8LL;
    }
    else if ( (_BYTE)v9 == 4 )
    {
      v10 = 12LL;
    }
    else
    {
      if ( (unsigned __int8)(v9 - 5) > 3u && (unsigned __int8)(v9 - 11) > 1u && (unsigned __int8)(v9 - 15) > 1u )
        goto LABEL_10;
      v10 = 16LL * (*((_DWORD *)v6 + 2) & 1) + ((8LL * (*((_DWORD *)v6 + 2) & 2)) | 0xC);
    }
    v11 = &v6[v10];
    if ( v11 )
      break;
LABEL_10:
    ++v7;
    v6 += *((unsigned __int16 *)v6 + 1);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    v12 = *(unsigned __int16 *)v11;
    if ( (_WORD)v12 == *a2 && !memcmp(v11, a2, 4 * (v12 >> 8) + 8) )
      return v6;
    goto LABEL_10;
  }
  if ( v7 < *a3 || !RtlEqualSid(v11, a2) )
    goto LABEL_10;
  *a3 = v7;
  return v6;
}
