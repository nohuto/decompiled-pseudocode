/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x1800D6D50
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x180108D90 (-CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18029075C (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x18029245C (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800B84E0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1800D6E94 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySwapChain::CopyFrontToBackBuffer(CLegacySwapChain *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  FastRegion::Internal::CRgnData *v5; // rcx
  unsigned int v7; // esi
  ULONG v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  FastRegion::Internal::CRgnData *v13; // rcx
  unsigned int RectangleCount; // eax
  _BYTE v15[8]; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+Fh]
  _DWORD *v17; // [rsp+68h] [rbp+17h]
  __int64 v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+78h] [rbp+27h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+88h] [rbp+37h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this - 37) + 8LL * *((unsigned int *)this - 68));
  v5 = *(FastRegion::Internal::CRgnData **)(v4 + 16);
  if ( *(_DWORD *)v5 )
  {
    v7 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start,
        a3,
        1u,
        &v20);
      v5 = *(FastRegion::Internal::CRgnData **)(v4 + 16);
    }
    FastRegion::Internal::CRgnData::BeginIterator(v5, (struct FastRegion::CRegion::Iterator *)v15);
    while ( (unsigned __int64)v17 < v16 )
    {
      v8 = v17[2];
      v9 = 2 * v19;
      HIDWORD(v20.Ptr) = *v17;
      v20.Reserved = v8;
      v10 = *(_DWORD *)(v18 + 4 * v9);
      v11 = *((_QWORD *)this - 39);
      v20.Size = *(_DWORD *)(v18 + 4 * v9 + 4);
      v12 = *((_QWORD *)this - 42);
      LODWORD(v20.Ptr) = v10;
      CD3DDevice::CopySubresourceRegion(
        v12,
        *((_QWORD *)this - 38),
        0,
        (unsigned int)&v20,
        v11,
        0,
        v10,
        HIDWORD(v20.Ptr),
        0);
      v13 = (FastRegion::Internal::CRgnData *)((v20.Reserved - HIDWORD(v20.Ptr)) * (v20.Size - LODWORD(v20.Ptr)));
      v7 += (unsigned int)v13;
      FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v15);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(v4 + 16));
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
        RectangleCount,
        v7);
    }
    **(_DWORD **)(*(_QWORD *)(*((_QWORD *)this - 37) + 8LL * *((unsigned int *)this - 68)) + 16LL) = 0;
  }
  return 0LL;
}
