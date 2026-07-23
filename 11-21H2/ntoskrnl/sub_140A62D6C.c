/*
 * XREFs of sub_140A62D6C @ 0x140A62D6C
 * Callers:
 *     sub_140A62BC0 @ 0x140A62BC0 (sub_140A62BC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A62D6C(__int64 a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // ebp
  __int64 v10; // r9
  __int64 i; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // esi
  int v15; // eax
  int v16; // r10d
  int v17; // r10d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  bool v21; // zf

  v5 = 0;
  if ( *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20) > 0 )
  {
    v10 = 0LL;
    for ( i = 0LL; ; i += 56LL )
    {
      v12 = *(_QWORD *)(a1 + 40);
      v13 = *(_QWORD *)(a1 + 48);
      v14 = *(_DWORD *)(i + v12 + 24);
      if ( v14 != 4 )
        goto LABEL_6;
      if ( *(_DWORD *)(i + v12 + 32) == a2 )
        break;
LABEL_11:
      if ( *a4 == 6 && v14 == 6 )
      {
        v18 = a4[2];
        if ( *(_BYTE *)(v10 + v13 + 2) )
        {
          if ( *(_DWORD *)(v10 + v13 + 4) == v18 && (*(_DWORD *)(v10 + v13 + 8) & a4[3]) != 0 )
          {
            *(_DWORD *)(i + v12 + 36) |= a5[3];
            v20 = ~a4[3];
            v21 = (v20 & *(_DWORD *)(v10 + v13 + 8)) == 0;
            *(_DWORD *)(v10 + v13 + 8) &= v20;
            if ( v21 )
              *(_BYTE *)(v10 + v13 + 2) = 0;
          }
        }
        else if ( v18 == *(_DWORD *)(i + v12 + 32) )
        {
          if ( v18 == a5[2] )
          {
            *(_DWORD *)(i + v12 + 36) &= ~a4[3];
            *(_DWORD *)(i + v12 + 36) |= a5[3];
          }
          else
          {
            *(_BYTE *)(v10 + v13 + 2) = 1;
            *(_DWORD *)(v10 + v13 + 4) = *(_DWORD *)(i + v12 + 32);
            v19 = *(_DWORD *)(i + v12 + 36) & ~a4[3];
            *(_DWORD *)(v10 + v13 + 8) = v19;
            *(_BYTE *)(v10 + v13 + 2) &= -(v19 != 0);
            *(_DWORD *)(i + v12 + 32) = a5[2];
            *(_DWORD *)(i + v12 + 36) = a5[3];
          }
        }
      }
      ++v5;
      v10 += 16LL;
      if ( v5 >= *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20) )
        return 0LL;
    }
    *(_DWORD *)(i + v12 + 32) = a3;
LABEL_6:
    if ( v14 == 5 && *a4 == 5 )
    {
      v15 = *(_DWORD *)(i + v12 + 32);
      v16 = a4[2];
      if ( (v16 & v15) != 0 )
      {
        v17 = v15 & ~v16;
        *(_DWORD *)(i + v12 + 32) = v17;
        if ( *a5 == 5 )
          *(_DWORD *)(i + v12 + 32) = v17 | a5[2];
      }
    }
    goto LABEL_11;
  }
  return 0LL;
}
