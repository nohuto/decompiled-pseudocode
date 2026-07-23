/*
 * XREFs of sub_140821830 @ 0x140821830
 * Callers:
 *     sub_1405611AC @ 0x1405611AC (sub_1405611AC.c)
 *     sub_14082052C @ 0x14082052C (sub_14082052C.c)
 *     sub_140821364 @ 0x140821364 (sub_140821364.c)
 *     sub_14095F29C @ 0x14095F29C (sub_14095F29C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140821830(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  __int128 v6; // xmm0
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  v9 = 0LL;
  v10 = 0LL;
  switch ( (_DWORD)a2 )
  {
    case 0:
      DWORD2(v9) = 0;
      a2 = 0LL;
      *(_QWORD *)&v10 = 0LL;
LABEL_11:
      *(_QWORD *)&v9 = a3;
      return sub_14042A5E0(*(_QWORD *)(v3 + 8), a2);
    case 1:
      *(_QWORD *)&v9 = a3;
      DWORD2(v9) = 0;
      *(_QWORD *)&v10 = 0LL;
      sub_14042A5E0(*(_QWORD *)(v3 + 8), 1LL);
LABEL_18:
      a2 = v5;
      goto LABEL_11;
    case 2:
      return sub_14042A5E0(*(_QWORD *)(v3 + 8), a2);
  }
  if ( (_DWORD)a2 != 4 )
  {
    if ( (_DWORD)a2 != 5 )
    {
      if ( (_DWORD)a2 != 6 )
      {
        if ( (_DWORD)a2 == 7 )
        {
          v6 = *(__int128 *)((char *)a3 + 40);
          *((_QWORD *)a3 + 6) = &v8;
          v8 = v6;
          *((_QWORD *)a3 + 5) = &v8;
          *(_QWORD *)&v9 = &v8;
          result = sub_14042A5E0(*(_QWORD *)(v3 + 8), 7LL);
          *(__int128 *)((char *)a3 + 40) = v8;
          return result;
        }
        if ( (_DWORD)a2 != 9 )
          return 3221225485LL;
        goto LABEL_18;
      }
      a2 = 6LL;
      v9 = *a3;
      v10 = a3[1];
    }
    return sub_14042A5E0(*(_QWORD *)(v3 + 8), a2);
  }
  return 3221225474LL;
}
