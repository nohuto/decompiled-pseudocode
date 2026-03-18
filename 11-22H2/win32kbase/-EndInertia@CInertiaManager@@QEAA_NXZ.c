/*
 * XREFs of ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1C00D5060
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C000E904 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0064430 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C00644A0 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1C04 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E1FE0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ConvertPointCoordinates @ 0x1C01EFC28 (ConvertPointCoordinates.c)
 */

char __fastcall CInertiaManager::EndInertia(CInertiaManager *this)
{
  struct tagPOINT v1; // rbx
  __int64 *v3; // rdi
  CInertiaManager *v4; // rcx
  _BYTE v6[16]; // [rsp+60h] [rbp-2F8h] BYREF
  _OWORD v7[45]; // [rsp+70h] [rbp-2E8h] BYREF

  v1 = gptCursorAsync;
  v3 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                    this,
                    gptCursorAsync,
                    15LL);
  if ( v3
    && (RIMGetVirtualDesktopPhysicalSize((__int64)v6),
        InputConfig::Mouse::GetUnionRegion(v7),
        ConvertPointCoordinates(v1.x),
        CInertiaManager::PostInertiaMessage(v4, 0x23Cu, (CInertiaManager *)((char *)this + 8), v1, 0LL)) )
  {
    return CInertiaManager::InvalidateInertiaInfo(this, *v3, v3[1]);
  }
  else
  {
    return 0;
  }
}
