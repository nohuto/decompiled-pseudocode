/*
 * XREFs of sub_180048060 @ 0x180048060
 * Callers:
 *     sub_180045C24 @ 0x180045C24 (sub_180045C24.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180044338 @ 0x180044338 (sub_180044338.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180048060(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 *v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 **v10; // r10
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx

  v3 = sub_180044338((__int64)a2);
  v5 = v4[3];
  v6 = v4[6] & v3;
  v7 = (__int64 *)v4[1];
  v8 = 2 * v6;
  v9 = *(__int64 **)(v5 + 16 * v6 + 8);
  if ( v9 == v7 )
    return 0LL;
  while ( *a2 != v9[2] )
  {
    if ( v9 == *(__int64 **)(v5 + 16 * v6) )
      return 0LL;
    v9 = (__int64 *)v9[1];
  }
  if ( !v9 )
    return 0LL;
  v10 = (__int64 **)(v5 + 16 * v6);
  if ( *(__int64 **)(v5 + 8 * v8 + 8) == v9 )
  {
    if ( *v10 == v9 )
      *v10 = v7;
    else
      v7 = (__int64 *)v9[1];
    *(_QWORD *)(v5 + 8 * v8 + 8) = v7;
  }
  else if ( *v10 == v9 )
  {
    *v10 = (__int64 *)*v9;
  }
  v11 = *v9;
  --v4[2];
  *(_QWORD *)v9[1] = v11;
  *(_QWORD *)(v11 + 8) = v9[1];
  v12 = (volatile signed __int32 *)v9[4];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  sub_180010884((char *)v9, 0x28uLL);
  return 1LL;
}
