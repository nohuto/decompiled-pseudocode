/*
 * XREFs of sub_18000F4C4 @ 0x18000F4C4
 * Callers:
 *     sub_18000DC40 @ 0x18000DC40 (sub_18000DC40.c)
 * Callees:
 *     sub_18000D308 @ 0x18000D308 (sub_18000D308.c)
 *     sub_18000ED7C @ 0x18000ED7C (sub_18000ED7C.c)
 *     sub_18000F12C @ 0x18000F12C (sub_18000F12C.c)
 */

int __fastcall sub_18000F4C4(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  int v3; // edi
  _WORD *i; // rcx
  __int64 v7; // r9
  _DWORD *j; // rcx
  unsigned __int16 v9; // dx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( v3 )
    {
      v2 = (_UNKNOWN **)sub_18000ED7C(8u, 0x190uLL);
      *(_QWORD *)(a1 + 24) = v2;
      if ( v2 )
      {
        *(_DWORD *)(a1 + 32) = 5;
        LODWORD(v2) = (unsigned int)sub_18000D308(v11, (__int64)v2, 5LL);
        for ( i = (_WORD *)v11[0]; i != (_WORD *)v11[1]; i += 40 )
          *i = 80;
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    if ( v3 )
    {
      sub_18000D308(v12, *(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a1 + 32));
      for ( j = (_DWORD *)(v12[0] + 8LL); j - 2 != (_DWORD *)v12[1]; j += 20 )
      {
        if ( *(j - 1) > *(_DWORD *)(a1 + 16) )
        {
          LODWORD(v2) = *(_DWORD *)(a2 + 8);
          if ( *j == (_DWORD)v2 )
            return (int)v2;
        }
      }
    }
    v9 = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
    *(_WORD *)(a1 + 34) = v9;
    LODWORD(v2) = sub_18000F12C(v7 + 80LL * v9, a2, _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 8)));
  }
  return (int)v2;
}
