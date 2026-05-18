/*
 * XREFs of sub_180013AF0 @ 0x180013AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013A18 @ 0x180013A18 (sub_180013A18.c)
 *     sub_180048440 @ 0x180048440 (sub_180048440.c)
 *     sub_180049130 @ 0x180049130 (sub_180049130.c)
 *     sub_180049274 @ 0x180049274 (sub_180049274.c)
 *     sub_180049288 @ 0x180049288 (sub_180049288.c)
 *     sub_180049360 @ 0x180049360 (sub_180049360.c)
 *     sub_1800496A8 @ 0x1800496A8 (sub_1800496A8.c)
 *     sub_1800497F8 @ 0x1800497F8 (sub_1800497F8.c)
 *     sub_180049938 @ 0x180049938 (sub_180049938.c)
 *     sub_180049A80 @ 0x180049A80 (sub_180049A80.c)
 *     sub_180049B14 @ 0x180049B14 (sub_180049B14.c)
 *     sub_180049C54 @ 0x180049C54 (sub_180049C54.c)
 *     sub_180049D94 @ 0x180049D94 (sub_180049D94.c)
 */

__int64 __fastcall sub_180013AF0(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  sub_180049D94(*(_QWORD *)(a1 + 16), *a2);
  sub_180049274(*(_QWORD *)(a1 + 16), a2[14]);
  try
  {
    if ( *a2 )
    {
      if ( *((_QWORD *)a2 + 1) )
        sub_1800497F8(*(_QWORD *)(a1 + 16));
      v4 = *((_QWORD *)a2 + 2);
      if ( v4 )
        sub_1800496A8(*(_QWORD *)(a1 + 16), v4, 0LL);
      v5 = *((_QWORD *)a2 + 3);
      if ( v5 )
        sub_180049938(*(_QWORD *)(a1 + 16), v5, 0LL);
      if ( *((_QWORD *)a2 + 4) )
        sub_180049130(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 5) )
        sub_180049B14(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 6) )
        sub_180049C54(*(_QWORD *)(a1 + 16));
      if ( a2[14] )
      {
        if ( *((_QWORD *)a2 + 8) )
        {
          sub_180049288(*(_QWORD *)(a1 + 16));
        }
        else if ( *((_QWORD *)a2 + 9) )
        {
          sub_180049360(*(_QWORD *)(a1 + 16));
        }
      }
      switch ( a2[20] )
      {
        case 1u:
          sub_180049A80(*(_QWORD *)(a1 + 16), 2LL);
          goto LABEL_31;
        case 2u:
          v6 = 1LL;
          break;
        case 3u:
          v6 = 4LL;
          break;
        case 4u:
          v6 = 0LL;
          break;
        case 5u:
          v6 = 3LL;
          break;
        default:
LABEL_31:
          sub_180048440(*(_QWORD *)(a1 + 16), 3LL);
          sub_180013A18(a1 + 32, *a2, *((unsigned __int64 **)a2 + 1));
          return 0LL;
      }
      sub_180049A80(*(_QWORD *)(a1 + 16), v6);
      goto LABEL_31;
    }
    *(_QWORD *)(a1 + 32) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(a1 + 52) = 0;
  }
  catch ( ... )
  {
    sub_18000F024(
      retaddr,
      115LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremesh.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return 0LL;
}
