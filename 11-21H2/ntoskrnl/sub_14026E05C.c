/*
 * XREFs of sub_14026E05C @ 0x14026E05C
 * Callers:
 *     NaptrDnsRecordConvert @ 0x140267594 (NaptrDnsRecordConvert.c)
 *     sub_14026DFF0 @ 0x14026DFF0 (sub_14026DFF0.c)
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 *     sub_140589518 @ 0x140589518 (sub_140589518.c)
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1405C20CC @ 0x1405C20CC (sub_1405C20CC.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14026E05C(int a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v7; // rbp
  int v9; // r10d
  _QWORD **v10; // rcx
  _QWORD *v11; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdi
  char v15; // al
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  __int128 v19; // [rsp+50h] [rbp-58h]

  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v9 = a1;
  do
  {
    while ( 1 )
    {
      v10 = (_QWORD **)(a2 + 24 * v7);
      v11 = *v10;
      if ( *v10 == v10 )
        break;
      if ( (_QWORD **)v11[1] != v10 || (v13 = (_QWORD *)*v11, *(_QWORD **)(*v11 + 8LL) != v11) )
        __fastfail(3u);
      *v10 = v13;
      v13[1] = v10;
      if ( (_DWORD)v7 == 3 )
      {
        if ( a4 && (unsigned int)sub_140277C50(v11) )
          ++v5;
        sub_140268408((__int64)v11);
        ++v4;
      }
      else
      {
        v14 = qword_14001C780[v7];
        sub_1402C38D0(v9, -1431655765 * ((__int64)(v11 + 0x44000000000LL) >> 4), v14, 0, 1);
        v15 = sub_1402F2700(v11);
        *((_QWORD *)&v18 + 1) = a3;
        v19 = 0LL;
        *(_QWORD *)&v18 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v11 + 0x44000000000LL) >> 4);
        LOBYTE(v19) = v15;
        sub_1402BEEA0(&v18);
        v4 += v14;
      }
      v9 = a1;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < 4 );
  if ( a4 )
    *a4 = v5;
  return v4;
}
