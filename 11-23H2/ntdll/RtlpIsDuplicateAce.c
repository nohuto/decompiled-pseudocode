/*
 * XREFs of RtlpIsDuplicateAce @ 0x1800105FC
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x18001A100 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareAces @ 0x180010724 (RtlpCompareAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // bl
  int v6; // ebp
  __int64 v7; // rdi
  char v8; // dl
  char v9; // cl
  char v10; // r8
  int v11; // r12d
  int v12; // r14d
  int v13; // r13d
  char v15; // dl
  int v16; // r8d
  int v17; // ecx
  int v18; // r8d
  int v19; // [rsp+58h] [rbp+10h]

  if ( *(_BYTE *)a2 > 8u || *(_BYTE *)a2 == 4 )
    return 0;
  v4 = *(_BYTE *)(a2 + 1);
  v5 = 0;
  if ( (v4 & 0x10) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    v7 = a1 + 8;
    v8 = v4 & 1;
    v9 = v4 & 2;
    v10 = v4 & 8;
    v11 = 0;
    if ( *(unsigned __int16 *)(a1 + 4) - 1 > 0 )
    {
      v12 = v9 != 0 ? v6 : 0;
      v13 = v8 != 0 ? v6 : 0;
      if ( v10 )
        v6 = 0;
      while ( 1 )
      {
        v19 = v12;
        if ( *(_BYTE *)v7 <= 8u
          && *(_BYTE *)v7 != 4
          && (*(_BYTE *)(v7 + 1) & 0x10) != 0
          && (unsigned __int8)RtlpCompareAces(v7, a2, 0LL, 0LL) )
        {
          v15 = *(_BYTE *)(v7 + 1);
          v16 = ~*(_DWORD *)(v7 + 4);
          v12 &= v16;
          if ( (v15 & 2) == 0 )
            v12 = v19;
          v17 = v13 & ~*(_DWORD *)(v7 + 4);
          if ( (v15 & 1) == 0 )
            v17 = v13;
          v18 = v6 & v16;
          v13 = v17;
          if ( (v15 & 8) != 0 )
            v18 = v6;
          v6 = v18;
          if ( !(v12 | v17 | v18) )
            break;
        }
        ++v11;
        v7 += *(unsigned __int16 *)(v7 + 2);
        if ( v11 >= *(unsigned __int16 *)(a1 + 4) - 1 )
          return v5;
      }
      return 1;
    }
  }
  return v5;
}
