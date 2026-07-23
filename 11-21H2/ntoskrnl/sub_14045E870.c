/*
 * XREFs of sub_14045E870 @ 0x14045E870
 * Callers:
 *     sub_1402485E0 @ 0x1402485E0 (sub_1402485E0.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     sub_1403051E0 @ 0x1403051E0 (sub_1403051E0.c)
 */

__int64 __fastcall sub_14045E870(struct _KPRCB *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  char v7; // bl
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v6 = 0;
  if ( sub_1403051E0((__int64)a1, 0LL, a1 != KeGetCurrentPrcb(), 0, (__int64)&v11, 0LL) )
  {
    v7 = dword_140D06D1C;
    if ( *((_DWORD *)a1 + 8456) == 3 )
      v7 = dword_140D06D20;
    v8 = *((_QWORD *)&v12 + 1);
    *(_QWORD *)(a2 + 8) = (unsigned __int64)v13 >> v7;
    v9 = sub_14029394C(v8, 0x64uLL, a3);
    *(_QWORD *)(a2 + 16) = *((_QWORD *)&v13 + 1) >> v7;
    *(_DWORD *)a2 = (unsigned __int64)v11 >> v7;
    *(_DWORD *)(a2 + 4) = *((_QWORD *)&v11 + 1) >> v7;
    *(_QWORD *)(a2 + 24) = v9 >> v7;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
