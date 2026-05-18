/*
 * XREFs of sub_18000FBFC @ 0x18000FBFC
 * Callers:
 *     sub_18000DE50 @ 0x18000DE50 (sub_18000DE50.c)
 * Callees:
 *     sub_18000D48C @ 0x18000D48C (sub_18000D48C.c)
 *     sub_18000F018 @ 0x18000F018 (sub_18000F018.c)
 *     sub_18000F4B0 @ 0x18000F4B0 (sub_18000F4B0.c)
 */

int __fastcall sub_18000FBFC(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // r9
  int v5; // edi
  _WORD *v7; // rcx
  _DWORD *v8; // rcx
  unsigned __int16 v9; // dx
  _WORD *v11; // [rsp+20h] [rbp-28h] BYREF
  _WORD *v12; // [rsp+28h] [rbp-20h]
  _DWORD *v13; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 16);
  if ( v3 )
    goto LABEL_18;
  if ( v5 )
  {
    v2 = (_UNKNOWN **)sub_18000F018(8u, 0x190uLL);
    *(_QWORD *)(a1 + 24) = v2;
    if ( v2 )
    {
      *(_DWORD *)(a1 + 32) = 5;
      LODWORD(v2) = (unsigned int)sub_18000D48C(&v11, (__int64)v2, 5LL);
      v7 = v11;
      if ( v11 == v12 )
        goto LABEL_18;
      do
      {
        *v7 = 80;
        v7 += 40;
      }
      while ( v7 != v12 );
      v3 = *(_QWORD *)(a1 + 24);
      if ( v3 )
      {
LABEL_18:
        if ( !v5 || (sub_18000D48C(&v13, v3, *(unsigned __int16 *)(a1 + 32)), v13 == v14) )
        {
LABEL_14:
          v9 = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
          *(_WORD *)(a1 + 34) = v9;
          LODWORD(v2) = sub_18000F4B0(v3 + 80LL * v9, a2, _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 8)));
        }
        else
        {
          v8 = v13 + 2;
          while ( 1 )
          {
            if ( *(v8 - 1) > *(_DWORD *)(a1 + 16) )
            {
              LODWORD(v2) = *(_DWORD *)(a2 + 8);
              if ( *v8 == (_DWORD)v2 )
                break;
            }
            v8 += 20;
            if ( v8 - 2 == v14 )
            {
              v3 = *(_QWORD *)(a1 + 24);
              goto LABEL_14;
            }
          }
        }
      }
    }
  }
  return (int)v2;
}
