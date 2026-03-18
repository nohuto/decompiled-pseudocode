/*
 * XREFs of ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180066C1C
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x180066804 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180066B8C (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180066D64 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180069D54 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPrimaryYUVRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAPEAVIYUVSwapChainRealization@@XZ @ 0x180248D7C (-GetPrimaryYUVRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAPEAVIYUVSwapChainRealizat.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A4834 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A52AC (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A53C0 (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        struct _LUID **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        char a4,
        struct ISwapChainRealization **a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // ebx
  int SubResource; // eax
  char *v14; // rcx
  struct CDecodeBitmap *v16; // r12
  struct _LUID *v17; // rbx
  int v18; // r9d
  struct _LUID v19; // rbx
  struct IYUVSwapChainRealization *PrimaryYUVRealization; // rax
  char *v21; // rcx
  int v22; // [rsp+20h] [rbp-61h]
  unsigned int v23; // [rsp+20h] [rbp-61h]
  HGDIOBJ ho[2]; // [rsp+30h] [rbp-51h] BYREF
  int *v25; // [rsp+40h] [rbp-41h] BYREF
  int v26; // [rsp+48h] [rbp-39h] BYREF

  ho[0] = 0LL;
  *a5 = 0LL;
  v9 = NtOpenCompositionSurfaceDirtyRegion(*(_QWORD *)&(*this)[4], this + 3, a3, ho);
  v10 = (__int64)ho[0];
  if ( v9 < 0 )
    v10 = 1LL;
  ho[0] = (HGDIOBJ)v10;
  v11 = *(_DWORD *)a3 - 1;
  if ( *(_DWORD *)a3 == 1 )
  {
    v12 = -2003292287;
    v23 = 1432;
    goto LABEL_28;
  }
  if ( *(_DWORD *)a3 == 2 )
  {
    v12 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
            *((_DWORD *)this + 9),
            *(_QWORD *)&(*this)[5],
            a2,
            (__int64)a3,
            (__int64)this[1],
            (__int64 *)a5);
    if ( v12 >= 0 )
      goto LABEL_7;
    LOBYTE(v22) = a4;
    SubResource = CDxHandleBitmapRealization::Create(
                    *((unsigned int *)this + 9),
                    *(_QWORD *)&(*this)[5],
                    a2,
                    a3,
                    v22,
                    a5);
    v12 = SubResource;
    if ( SubResource >= 0 )
      goto LABEL_7;
    v23 = 1452;
    goto LABEL_21;
  }
  v11 = *(_DWORD *)a3 - 3;
  if ( *(_DWORD *)a3 == 3 )
  {
    SubResource = CDxHandleStereoBitmapRealization::Create((*this)[5], a2, a3, a5);
    v12 = SubResource;
    if ( SubResource < 0 )
    {
      v23 = 1462;
      goto LABEL_21;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 != 4 )
    {
      v12 = -2147024809;
      v23 = 1494;
LABEL_28:
      v18 = v12;
      goto LABEL_29;
    }
    v16 = (struct CDecodeBitmap *)this[1];
    v17 = *this;
    if ( *((_DWORD *)a3 + 8) )
    {
      v19 = v17[5];
      PrimaryYUVRealization = CGlobalCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVRealization((CGlobalCompositionSurfaceInfo::CBindInfo *)this);
      SubResource = CDxHandleYUVBitmapRealization::CreateSubResource(PrimaryYUVRealization, v19, a2, a3, v16, a5);
      v12 = SubResource;
      if ( SubResource < 0 )
      {
        v23 = 1488;
        goto LABEL_21;
      }
    }
    else
    {
      SubResource = CDxHandleYUVBitmapRealization::Create(
                      *((unsigned int *)this + 9),
                      *(_QWORD *)&v17[5],
                      a2,
                      a3,
                      v16,
                      a5);
      v12 = SubResource;
      if ( SubResource < 0 )
      {
        v23 = 1476;
LABEL_21:
        v18 = SubResource;
LABEL_29:
        MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1803464E0, 3u, v18, v23, 0LL);
        goto LABEL_11;
      }
    }
  }
LABEL_7:
  if ( !ho[0] )
    return (unsigned int)v12;
  if ( *a5 )
  {
    if ( ho[0] == (HGDIOBJ)1 )
    {
      v14 = (char *)*a5 + *(int *)(*((_QWORD *)*a5 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 40LL))(v14);
    }
    else
    {
      v26 = 0;
      v25 = &v26;
      CRegion::SetHRGN((CRegion *)&v25, (HRGN)ho[0]);
      v21 = (char *)*a5 + *(int *)(*((_QWORD *)*a5 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(char *, int **))(*(_QWORD *)v21 + 32LL))(v21, &v25);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v25);
    }
  }
LABEL_11:
  if ( ho[0] >= (HGDIOBJ)2 )
    DeleteObject(ho[0]);
  return (unsigned int)v12;
}
