/*
 * XREFs of sub_140504048 @ 0x140504048
 * Callers:
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 *     sub_140517BAC @ 0x140517BAC (sub_140517BAC.c)
 * Callees:
 *     sub_14045699C @ 0x14045699C (sub_14045699C.c)
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 */

void __fastcall sub_140504048(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]

  if ( (unsigned int)sub_14045699C(a1, a2, 0LL, a4, a6, a5) != a5 || *(_BYTE *)(a3 + 64) )
  {
    if ( !a6 )
      sub_140457A42(a1, a2, a4, (_QWORD *)a3, a5, 0, 0, a7);
    if ( a8 )
    {
      v13 = ((a4 & 0xFFF) + (unsigned __int64)a5 + 4095) >> 12;
      if ( (_DWORD)v13 )
      {
        v14 = (unsigned int)v13;
        do
        {
          a3 = *(_QWORD *)(a3 + 8);
          --v14;
        }
        while ( v14 );
      }
      *a8 = a3;
    }
  }
  else
  {
    if ( !a6 && !*(_BYTE *)(a1 + 437) )
    {
      LOBYTE(v16) = a7;
      LOBYTE(v15) = 0;
      sub_140513310(v12, a2, a4, a5, v15, v16);
    }
    if ( a8 )
      *a8 = a3;
  }
}
