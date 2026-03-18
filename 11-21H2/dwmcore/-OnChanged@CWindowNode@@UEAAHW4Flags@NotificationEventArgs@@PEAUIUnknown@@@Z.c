/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180115080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800068A4 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085064 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18008C294 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x1801152E0 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, volatile signed __int32 *a3)
{
  unsigned int v5; // edi
  __int64 *v6; // r14
  CCompositionSurfaceBitmap *v7; // rax
  __int64 v8; // r11
  volatile signed __int32 *v9; // r14
  int v10; // eax
  FastRegion::Internal::CRgnData **v11; // rax
  int v12; // r8d
  int v13; // r10d
  __int64 v14; // r9
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v16; // rcx
  volatile signed __int32 *v18; // [rsp+20h] [rbp-29h] BYREF
  __int64 v19; // [rsp+28h] [rbp-21h] BYREF
  float v20[2]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v21[8]; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-9h]
  _DWORD *v23; // [rsp+48h] [rbp-1h]
  __int64 v24; // [rsp+50h] [rbp+7h]
  int v25; // [rsp+58h] [rbp+Fh]
  _DWORD v26[4]; // [rsp+68h] [rbp+1Fh]
  float v27[4]; // [rsp+78h] [rbp+2Fh] BYREF

  v5 = 4;
  if ( a2 == 5 )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)a1);
  }
  else
  {
    v18 = 0LL;
    if ( a2 == 1 && (*(_BYTE *)(a1 + 96) & 4) == 0 )
    {
      if ( a3 )
      {
        if ( *(_BYTE *)(a1 + 920) )
        {
          v6 = (__int64 *)(a1 + 808);
          if ( !*(_BYTE *)(a1 + 916)
            || (v7 = (CCompositionSurfaceBitmap *)CPtrArrayBase::operator[]((__int64 *)(a1 + 808), 0LL),
                (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v7) != 1) )
          {
            v9 = (volatile signed __int32 *)CPtrArrayBase::operator[](v6, 0LL);
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
            if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                        v9,
                        &GUID_00000000_0000_0000_c000_000000000046,
                        &v18) >= 0
              && a3 == v18 )
            {
              v19 = 0LL;
              if ( (**(int (__fastcall ***)(volatile signed __int32 *, GUID *, __int64 *))a3)(
                     a3,
                     &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27,
                     &v19) >= 0 )
              {
                v10 = *(_DWORD *)(a1 + 780) - *(_DWORD *)(a1 + 772);
                v20[0] = (float)(*(_DWORD *)(a1 + 776) - *(_DWORD *)(a1 + 768));
                v20[1] = (float)v10;
                v11 = (FastRegion::Internal::CRgnData **)(*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v19 + 24LL))(
                                                           v19,
                                                           v20);
                if ( v11 )
                {
                  FastRegion::Internal::CRgnData::BeginIterator(*v11, (struct FastRegion::CRegion::Iterator *)v21);
                  while ( (unsigned __int64)v23 < v22 )
                  {
                    v12 = *(_DWORD *)(a1 + 768);
                    v13 = *(_DWORD *)(a1 + 772);
                    v14 = 2 * v25;
                    v26[0] = v12 + *(_DWORD *)(v24 + 4 * v14);
                    v26[1] = v13 + *v23;
                    v26[2] = v12 + *(_DWORD *)(v24 + 4 * v14 + 4);
                    v26[3] = v13 + v23[2];
                    for ( i = 0LL; i < 4; ++i )
                      v27[i] = (float)(int)v26[i];
                    CVisual::AddAdditionalDirtyRect((CVisual *)a1, v27);
                    FastRegion::Internal::CRgnData::StepIterator(v16, (struct FastRegion::CRegion::Iterator *)v21);
                  }
                  v5 = 0;
                }
              }
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
            }
          }
        }
      }
    }
    if ( !CWindowNode::ProcessReadyFlipExSurfaces((CWindowNode *)a1) && v5 )
      CVisual::PropagateFlags(a1, v5);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  }
  return 0LL;
}
