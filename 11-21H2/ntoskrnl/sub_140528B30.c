/*
 * XREFs of sub_140528B30 @ 0x140528B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_14045939A @ 0x14045939A (sub_14045939A.c)
 *     sub_14051A9F8 @ 0x14051A9F8 (sub_14051A9F8.c)
 *     sub_14051AC2C @ 0x14051AC2C (sub_14051AC2C.c)
 */

__int64 __fastcall sub_140528B30(ULONG_PTR a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, ULONG_PTR a6)
{
  _QWORD *v6; // r15
  int v11; // edi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx

  v6 = (_QWORD *)a6;
  a6 = 0LL;
  *v6 = 0LL;
  if ( (a2 & 0xFFF) != 0 || !a2 )
    return (unsigned int)-1073741584;
  if ( *(_DWORD *)(a1 + 8) )
  {
    return (unsigned int)-1073741585;
  }
  else
  {
    v12 = sub_1403B1F04(a1, 32LL);
    if ( v12 )
    {
      v13 = sub_14051A9F8(a1, a3, a2, a4, a5, &a6);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v11 = sub_14051AC2C(a1, 0, 0, a2, a6);
        if ( v11 >= 0 )
        {
          *(_DWORD *)(v12 + 24) = 0;
          *(_QWORD *)(v12 + 16) = a1;
          *(_QWORD *)v12 = a6;
          *(_QWORD *)(v12 + 8) = a2;
          *v6 = v12;
          return (unsigned int)v11;
        }
        sub_14045939A(a1, a6);
      }
      else if ( v13 == -1073741584 || v13 == -1073741811 )
      {
        v11 = -1073741583;
      }
      sub_1403B1B5C(v14, v12);
      return (unsigned int)v11;
    }
    return (unsigned int)-1073741670;
  }
}
