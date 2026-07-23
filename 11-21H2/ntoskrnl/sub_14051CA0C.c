/*
 * XREFs of sub_14051CA0C @ 0x14051CA0C
 * Callers:
 *     sub_14051CCC0 @ 0x14051CCC0 (sub_14051CCC0.c)
 * Callees:
 *     sub_14050E73C @ 0x14050E73C (sub_14050E73C.c)
 *     sub_14051C6B0 @ 0x14051C6B0 (sub_14051C6B0.c)
 */

__int64 __fastcall sub_14051CA0C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r8
  unsigned int v4; // r9d
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // eax

  v1 = *(_QWORD *)(a1 + 20);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = -1073741637;
  if ( (v1 & 3) == 1 )
  {
    if ( *(_DWORD *)a1 < 3u )
      return v4;
    *(_DWORD *)(a1 + 272) |= 8u;
    goto LABEL_26;
  }
  if ( (unsigned __int8)v3 >> 4 == 3 )
  {
    v5 = (((unsigned __int8)v3 >> 2) & 3) == 1;
  }
  else
  {
    if ( (unsigned __int8)v3 >> 4 != 5 )
      goto LABEL_26;
    v5 = (((unsigned __int8)v3 >> 2) & 3) == 0;
  }
  if ( !v5 || (v3 & 3) != 0 )
    goto LABEL_26;
  if ( (v3 & 0x800000000000000LL) == 0 || (v3 & 0x400000000000000LL) == 0 )
  {
    if ( *(_DWORD *)a1 < 3u )
      return v4;
    *(_DWORD *)(a1 + 272) |= 0x20u;
    goto LABEL_26;
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( (v6 & 0x1C0) != 0x80 )
  {
    if ( *(_DWORD *)a1 < 3u )
      return v4;
    *(_DWORD *)(a1 + 272) |= 0x40u;
    goto LABEL_26;
  }
  v7 = qword_140C09798 & *(_QWORD *)(a1 + 48) & ~((1LL << (v6 & 0x3F)) - 1);
  if ( byte_140C4C450 )
  {
    v4 = sub_14050E73C(*(unsigned int *)(a1 + 16), v7, v3, (v1 & 2) != 0, v1 & 1);
    if ( (v4 & 0x80000000) == 0 )
    {
      if ( *(_DWORD *)a1 >= 3u )
        *(_DWORD *)(a1 + 276) |= 2u;
      return v4;
    }
  }
  v8 = sub_14051C6B0(1, 1, v7);
  v4 = v8;
  if ( v8 < 0 && *(_DWORD *)a1 >= 3u )
    *(_DWORD *)(a1 + 272) |= 0x10u;
  if ( v8 == -1073741637 )
  {
LABEL_26:
    if ( *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 1u;
  }
  return v4;
}
