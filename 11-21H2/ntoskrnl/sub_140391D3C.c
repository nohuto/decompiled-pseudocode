/*
 * XREFs of sub_140391D3C @ 0x140391D3C
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_140391B9C @ 0x140391B9C (sub_140391B9C.c)
 * Callees:
 *     MmAreMdlPagesCached @ 0x140384950 (MmAreMdlPagesCached.c)
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 */

__int64 __fastcall sub_140391D3C(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int v5; // r14d
  bool v6; // zf
  __int64 v8; // xmm1_8
  unsigned int v9; // r12d
  __int128 v10; // xmm0
  __int128 *v11; // rsi
  int i; // eax
  unsigned int v13; // edi
  __int128 *v14; // rcx
  unsigned __int8 v15; // cl
  unsigned int v16; // eax
  __int64 *v17; // r8
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-38h]
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF

  v21 = 0LL;
  v22 = (__int64 *)&v21;
  v3 = *(_DWORD *)(a3 + 8);
  *(_BYTE *)(a3 + 8) = 0;
  v5 = a2;
  v6 = *(_QWORD *)(a2 + 48) == 0LL;
  v8 = *(_QWORD *)(a3 + 24);
  v25 = 0LL;
  v9 = (unsigned __int8)v3;
  v10 = *(_OWORD *)(a3 + 8);
  v24 = v8;
  v23 = v10;
  if ( !v6 && !(unsigned int)MmAreMdlPagesCached(*(_DWORD **)(a3 + 16)) )
    *(_DWORD *)(a3 + 8) |= 0x8000000u;
  v11 = &v25;
  for ( i = sub_140391E54(a1, v5, (unsigned int)&v23, a3, (__int64)&v25);
        ;
        i = sub_140391E54(a1, v5, (unsigned int)&v23, a3, (__int64)v11) )
  {
    v13 = i;
    if ( i < 0 )
      break;
    v14 = v11 + 1;
    if ( i != 259 )
      v14 = v11;
    v11 = v14;
    v15 = v23 + 1;
    v16 = (unsigned __int8)(v23 + 1);
    LODWORD(v23) = (unsigned __int8)(v23 ^ (v23 + 1)) ^ (unsigned int)v23;
    if ( v16 >= v9 )
    {
      v13 = 0;
      goto LABEL_11;
    }
    LODWORD(v24) = v24 + 1;
  }
  v15 = v23;
LABEL_11:
  if ( *(_BYTE *)(a3 + 8) != v15 )
    *(_BYTE *)(a3 + 8) = v23;
  v17 = v22;
  if ( v22 != (__int64 *)&v21 )
  {
    while ( v17 != (__int64 *)&v21 )
    {
      v19 = v21;
      v21 = (__int64 *)(*v21 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v19 == v17 )
      {
        v21 = 0LL;
        v22 = (__int64 *)&v21;
      }
      else
      {
        *v17 = *v17 & 7 | (8 * ((unsigned __int64)*v17 >> 3) - 8);
      }
      if ( (*((_DWORD *)v19 + 7) & 1) == 0 )
      {
        *((_DWORD *)v19 + 7) |= 1u;
        v20 = v19[2];
        if ( v20 )
          *(_DWORD *)(v20 + 4) = v13;
        else
          *((_DWORD *)v19 + 2) = v13;
      }
      sub_1405F8978(a1, v19);
      v17 = v22;
    }
    return 259;
  }
  return v13;
}
