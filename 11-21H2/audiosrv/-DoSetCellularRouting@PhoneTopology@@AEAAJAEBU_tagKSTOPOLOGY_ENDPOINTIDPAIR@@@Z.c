/*
 * XREFs of ?DoSetCellularRouting@PhoneTopology@@AEAAJAEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x18015E264
 * Callers:
 *     ?Process@SetCellularRoutingWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x18015F4A0 (-Process@SetCellularRoutingWorkItem@@UEAAXPEAVPhoneTopology@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology::DoSetCellularRouting(
        PhoneTopology *this,
        const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a2)
{
  __int64 *v2; // rcx
  _OWORD *v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rdx
  int v16; // eax
  _BYTE v18[1064]; // [rsp+20h] [rbp-428h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = v18;
  v4 = 0;
  v5 = *v2;
  v6 = 8LL;
  do
  {
    v7 = *((_OWORD *)a2 + 1);
    *v3 = *(_OWORD *)a2;
    v8 = *((_OWORD *)a2 + 2);
    v3[1] = v7;
    v9 = *((_OWORD *)a2 + 3);
    v3[2] = v8;
    v10 = *((_OWORD *)a2 + 4);
    v3[3] = v9;
    v11 = *((_OWORD *)a2 + 5);
    v3[4] = v10;
    v12 = *((_OWORD *)a2 + 6);
    v3[5] = v11;
    v13 = *((_OWORD *)a2 + 7);
    a2 = (const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *)((char *)a2 + 128);
    v3[6] = v12;
    v3 += 8;
    *(v3 - 1) = v13;
    --v6;
  }
  while ( v6 );
  v14 = *(_OWORD *)a2;
  v15 = *((_QWORD *)a2 + 2);
  *v3 = v14;
  *((_QWORD *)v3 + 2) = v15;
  v16 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v5 + 48))(v2, v18);
  if ( v16 < 0 )
    return (unsigned int)v16;
  return v4;
}
