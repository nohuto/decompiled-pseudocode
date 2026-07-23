/*
 * XREFs of sub_140938A9C @ 0x140938A9C
 * Callers:
 *     ntoskrnl_32 @ 0x14055A160 (ntoskrnl_32.c)
 * Callees:
 *     sub_140559E1C @ 0x140559E1C (sub_140559E1C.c)
 *     sub_1409380B4 @ 0x1409380B4 (sub_1409380B4.c)
 *     sub_140938198 @ 0x140938198 (sub_140938198.c)
 *     sub_140938314 @ 0x140938314 (sub_140938314.c)
 *     sub_1409386B8 @ 0x1409386B8 (sub_1409386B8.c)
 */

LONG_PTR __fastcall sub_140938A9C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-10h] BYREF

  ++a1[14];
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFC) != 0 )
  {
    *(_QWORD *)&v6 = 3225812993LL;
  }
  else if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        return sub_140938198(a1, a2);
      case 2:
        return sub_1409386B8((__int64)a1, a2);
      case 3:
        return sub_140938314((__int64)a1, a2);
      case 4:
        return sub_1409380B4((__int64)a1, a2, a3, a4);
    }
    *(_QWORD *)&v6 = 3221225474LL;
  }
  else
  {
    *(_QWORD *)&v6 = 0LL;
  }
  v5 = *(_QWORD *)(a2 + 48);
  *((_QWORD *)&v6 + 1) = 0LL;
  return sub_140559E1C((__int64)a1, v5, &v6, 0);
}
