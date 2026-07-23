/*
 * XREFs of sub_140828E20 @ 0x140828E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140828EBC @ 0x140828EBC (sub_140828EBC.c)
 *     sub_1409960C8 @ 0x1409960C8 (sub_1409960C8.c)
 */

__int64 __fastcall sub_140828E20(_QWORD *a1, int *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int128 v6; // xmm0
  int v7; // edi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v4 = 0x43F4D361AE4C4FF1LL - *a1;
  if ( *a1 == 0x43F4D361AE4C4FF1LL )
    v4 = 0x94DE03EBB6BBAA80uLL - a1[1];
  v5 = 0;
  if ( !v4 && a3 == 4 && a2 )
  {
    v6 = *(_OWORD *)a1;
    v10 = *a2;
    v9 = v6;
    sub_140828EBC(0LL, 20LL, &v9);
    v7 = *a2;
    if ( byte_140C5AC3C )
    {
      sub_1402D66A8((ULONG_PTR)&xmmword_140C20B50);
      BYTE1(qword_140C20B40) = v7 != 0 ? qword_140C20B40 : 0;
      sub_1409960C8();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
