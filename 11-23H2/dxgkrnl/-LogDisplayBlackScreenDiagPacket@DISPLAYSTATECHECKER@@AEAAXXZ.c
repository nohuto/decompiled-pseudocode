/*
 * XREFs of ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02F90EC
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F8E64 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004A804 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02F830C (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F96FC (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(DISPLAYSTATECHECKER *this)
{
  unsigned int BlackScreenDiagDataSize; // esi
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v3; // rax
  struct _DXGK_DIAG_HEADER *v4; // rbx
  __int64 v5; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v3 = (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)operator new[](BlackScreenDiagDataSize, 0x4B677844u, 256LL);
  v4 = v3;
  if ( v3 )
  {
    DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(this, v3, BlackScreenDiagDataSize);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
    DxgkWriteDiagEntry(v4, CurrentProcessSessionId);
    v9 = 0x3800000033LL;
    v12 = 0LL;
    DWORD2(v12) = 0;
    *(_QWORD *)&v12 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
    if ( DISPLAYSTATECHECKER::NeedLidStateRecovery(this) )
      LODWORD(v13) = v13 | 1;
    v8 = PsGetCurrentProcessSessionId(v7);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v9, v8);
    operator delete(v4);
  }
  else
  {
    WdLogSingleEntry1(3LL, 494LL);
  }
}
