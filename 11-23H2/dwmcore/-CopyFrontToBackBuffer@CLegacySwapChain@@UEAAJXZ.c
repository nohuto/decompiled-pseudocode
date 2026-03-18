/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x180034430
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJXZ @ 0x18011F470 (-CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18029FB00 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x1802A1710 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180032A7C (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180034874 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D87C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D0D6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySwapChain::CopyFrontToBackBuffer(CLegacySwapChain *this)
{
  __int64 v2; // r15
  unsigned int v3; // r12d
  int v4; // esi
  int v5; // r14d
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // edi
  __int64 v10; // rax
  FastRegion::Internal::CRgnData *v11; // rcx
  unsigned int RectangleCount; // eax
  _DWORD *v14; // [rsp+28h] [rbp-59h]
  _BYTE v15[8]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp-11h]
  int *v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  _DWORD v20[6]; // [rsp+98h] [rbp+17h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68));
  if ( **(_DWORD **)(v2 + 16) )
  {
    v3 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v14 = v20;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
    }
    FastRegion::Internal::CRgnData::BeginIterator(
      *(FastRegion::Internal::CRgnData **)(v2 + 16),
      (struct FastRegion::CRegion::Iterator *)v15);
    while ( (unsigned __int64)v17 < v16 )
    {
      v4 = *v17;
      v5 = v17[2];
      v20[2] = 0;
      v6 = *((_QWORD *)this + 30);
      v7 = 2 * v19;
      v20[1] = v4;
      v20[4] = v5;
      v20[5] = 1;
      v8 = *(_DWORD *)(v18 + 4 * v7);
      v9 = *(_DWORD *)(v18 + 4 * v7 + 4);
      v10 = *((_QWORD *)this + 10);
      v20[0] = v8;
      v20[3] = v9;
      LODWORD(v14) = v4;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD, __int64, _DWORD, _DWORD *, _DWORD))(**(_QWORD **)(v10 + 560) + 920LL))(
        *(_QWORD *)(v10 + 560),
        *((_QWORD *)this + 29),
        0LL,
        v8,
        v14,
        0,
        v6,
        0,
        v20,
        0);
      v3 += (v5 - v4) * (v9 - v8);
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v15);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(v2 + 16));
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
        RectangleCount,
        v3);
    }
    **(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68)) + 16LL) = 0;
  }
  return 0LL;
}
