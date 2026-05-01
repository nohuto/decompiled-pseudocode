/*
 * XREFs of sub_1800107D4 @ 0x1800107D4
 * Callers:
 *     sub_18000DED0 @ 0x18000DED0 (sub_18000DED0.c)
 * Callees:
 *     sub_18000F5AC @ 0x18000F5AC (sub_18000F5AC.c)
 *     sub_18001056C @ 0x18001056C (sub_18001056C.c)
 */

int __fastcall sub_1800107D4(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  int v3; // edi
  _WORD *v6; // rcx
  _DWORD *v7; // r8
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int16 v10; // dx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( v3 )
    {
      v2 = sub_18000F5AC(8u, 0x190uLL);
      *(_QWORD *)(a1 + 24) = v2;
      if ( v2 )
      {
        *(_DWORD *)(a1 + 32) = 5;
        v6 = v2 + 200;
        while ( v2 != v6 )
        {
          *v2 = 80;
          v2 += 40;
        }
      }
    }
  }
  v7 = *(_DWORD **)(a1 + 24);
  if ( v7 )
  {
    if ( !v3 || (v8 = &v7[20 * *(unsigned __int16 *)(a1 + 32)], v7 == v8) )
    {
LABEL_14:
      v10 = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
      *(_WORD *)(a1 + 34) = v10;
      LODWORD(v2) = sub_18001056C(
                      (__int64)&v7[20 * v10],
                      a2,
                      _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 8)));
    }
    else
    {
      v9 = v7 + 2;
      while ( 1 )
      {
        if ( *(v9 - 1) > *(_DWORD *)(a1 + 16) )
        {
          LODWORD(v2) = *(_DWORD *)(a2 + 8);
          if ( *v9 == (_DWORD)v2 )
            break;
        }
        v9 += 20;
        if ( v9 - 2 == v8 )
          goto LABEL_14;
      }
    }
  }
  return (int)v2;
}
