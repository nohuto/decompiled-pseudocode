/*
 * XREFs of ??R_lambda_64934c7e96d1b9526a948e7f65b87268_@@QEBAJXZ @ 0x180146EB4
 * Callers:
 *     ??$LeaveSession_Callback@V_lambda_03a6d95062640a5667444b450c384120_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_03a6d95062640a5667444b450c384120_@@@Z @ 0x180146AC4 (--$LeaveSession_Callback@V_lambda_03a6d95062640a5667444b450c384120_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_11a7e0926f067da0f34c5b9b86ec737f_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_11a7e0926f067da0f34c5b9b86ec737f_@@@Z @ 0x180146B54 (--$LeaveSession_Callback@V_lambda_11a7e0926f067da0f34c5b9b86ec737f_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_64934c7e96d1b9526a948e7f65b87268_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_64934c7e96d1b9526a948e7f65b87268_@@@Z @ 0x180146BE4 (--$LeaveSession_Callback@V_lambda_64934c7e96d1b9526a948e7f65b87268_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_707b29dbea9b654e1d98bab86da837b0_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_707b29dbea9b654e1d98bab86da837b0_@@@Z @ 0x180146C74 (--$LeaveSession_Callback@V_lambda_707b29dbea9b654e1d98bab86da837b0_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_91b4bafeadcc6149a4e3b56f06eda066_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_91b4bafeadcc6149a4e3b56f06eda066_@@@Z @ 0x180146D04 (--$LeaveSession_Callback@V_lambda_91b4bafeadcc6149a4e3b56f06eda066_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_a6db259483414c5f4a6b2cc09fccf246_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_a6db259483414c5f4a6b2cc09fccf246_@@@Z @ 0x180146D94 (--$LeaveSession_Callback@V_lambda_a6db259483414c5f4a6b2cc09fccf246_@@@ContextSession@WRL2@Micros.c)
 *     ??$LeaveSession_Callback@V_lambda_f4ab11bb8dcfcac7d428c4fc5a91824d_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_f4ab11bb8dcfcac7d428c4fc5a91824d_@@@Z @ 0x180146E24 (--$LeaveSession_Callback@V_lambda_f4ab11bb8dcfcac7d428c4fc5a91824d_@@@ContextSession@WRL2@Micros.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall _lambda_64934c7e96d1b9526a948e7f65b87268_::operator()(__int64 a1)
{
  _OWORD *v2; // r9
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 *v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // r9
  __int64 *v16; // rcx
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  _BYTE *v19; // r9
  __int128 v20; // [rsp+30h] [rbp-9h] BYREF
  __int64 v21; // [rsp+40h] [rbp+7h]
  _OWORD v22[4]; // [rsp+50h] [rbp+17h] BYREF

  switch ( *(_DWORD *)a1 )
  {
    case 0x11:
      v19 = *(_BYTE **)(a1 + 32);
      LOBYTE(v19) = *v19;
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *))(**(_QWORD **)(a1 + 8) + 88LL))(
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 24),
               v19);
    case 0x12:
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 24));
    case 0x23:
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 24),
               **(_QWORD **)(a1 + 32));
    case 0x34:
      v15 = *(__int64 **)(a1 + 32);
      v16 = *(__int64 **)(a1 + 8);
      v17 = *v15;
      LODWORD(v15) = *((_DWORD *)v15 + 2);
      v18 = *v16;
      *(_QWORD *)&v20 = v17;
      DWORD2(v20) = (_DWORD)v15;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *))(v18 + 72))(
               v16,
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 24),
               &v20);
    case 0x45:
      v13 = *(__int64 **)(a1 + 8);
      v14 = *v13;
      v20 = *(_OWORD *)*(_QWORD *)(a1 + 32);
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *))(v14 + 80))(
               v13,
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 24),
               &v20);
    case 0x68:
      v9 = *(__int128 **)(a1 + 32);
      v10 = *(__int64 **)(a1 + 8);
      v11 = *v10;
      v12 = *((_QWORD *)v9 + 2);
      v20 = *v9;
      v21 = v12;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *))(v11 + 32))(
               v10,
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 24),
               &v20);
    case 0x109:
      v2 = *(_OWORD **)(a1 + 32);
      v3 = *(__int64 **)(a1 + 8);
      v4 = *v3;
      v5 = v2[1];
      v22[0] = *v2;
      v6 = v2[2];
      v22[1] = v5;
      v7 = v2[3];
      v22[2] = v6;
      v22[3] = v7;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _OWORD *))(v4 + 40))(
               v3,
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 24),
               v22);
    default:
      Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
}
