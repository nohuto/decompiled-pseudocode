/*
 * XREFs of sub_140218EAC @ 0x140218EAC
 * Callers:
 *     sub_140218C94 @ 0x140218C94 (sub_140218C94.c)
 *     sub_140218D80 @ 0x140218D80 (sub_140218D80.c)
 *     sub_14064AFB8 @ 0x14064AFB8 (sub_14064AFB8.c)
 *     sub_14064B0FC @ 0x14064B0FC (sub_14064B0FC.c)
 * Callees:
 *     sub_140219CE4 @ 0x140219CE4 (sub_140219CE4.c)
 *     sub_140300374 @ 0x140300374 (sub_140300374.c)
 */

__int64 __fastcall sub_140218EAC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v8; // edx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0;
  v5 = *(unsigned int *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    if ( *(_BYTE *)(a1 + 4) )
    {
      v8 = *(_DWORD *)(a1 + 24);
      if ( (unsigned int)v5 < v8 )
      {
        v4 = sub_140219CE4(*(_QWORD *)(a1 + 32) + v5, v8 - (unsigned int)v5, a2, &v9);
        if ( *(_BYTE *)(a2 + 4) )
          return (unsigned int)-1073741406;
        else
          *(_DWORD *)(a1 + 8) += v9;
        return v4;
      }
    }
    else if ( !(_DWORD)v5 )
    {
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 24);
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      return v4;
    }
    return (unsigned int)-2147483622;
  }
  if ( (_DWORD)v5 || !*(_DWORD *)(a1 + 4) )
  {
    if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 4) )
      return (_DWORD)v5 != 0 ? -2147483622 : -1073741275;
    v4 = sub_140300374(*(_QWORD *)(a1 + 16));
    *(_WORD *)a2 = *(_WORD *)a1;
    *(_BYTE *)(a2 + 4) = *(_BYTE *)(a1 + 4);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 16) = v6;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)a1;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  }
  ++*(_DWORD *)(a1 + 8);
  return v4;
}
