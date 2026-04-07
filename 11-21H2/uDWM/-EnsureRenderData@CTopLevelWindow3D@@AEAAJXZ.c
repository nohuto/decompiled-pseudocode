/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180029E9C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCachedVisualImageProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCachedVisualImageProxy@@@Z @ 0x18000D940 (--4-$com_ptr_t@VCCachedVisualImageProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCache.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x18000E0AC (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x18000FF00 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AB4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18002726C (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180046938 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x1801009EC (-SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CTopLevelWindow3D *this)
{
  unsigned int v2; // edi
  CBaseObject *v3; // r14
  CBaseObject **v4; // r13
  volatile signed __int32 *v5; // rbx
  CBaseObject *v6; // r15
  CBaseObject *v7; // r12
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool ShouldFreezeAnimationCVI; // di
  volatile signed __int32 *CVIForAnimation; // rax
  CBaseObject *v16; // rcx
  int v17; // eax
  CBaseObject *v18; // r13
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  volatile signed __int32 *v24; // [rsp+40h] [rbp-28h]
  CBaseObject *v25; // [rsp+48h] [rbp-20h] BYREF
  struct CPushTransformInstruction *v26; // [rsp+B0h] [rbp+48h] BYREF
  CBaseObject *v27; // [rsp+B8h] [rbp+50h] BYREF
  struct CPopInstruction *v28; // [rsp+C0h] [rbp+58h] BYREF
  struct CPopInstruction *v29; // [rsp+C8h] [rbp+60h] BYREF

  v2 = 0;
  v25 = 0LL;
  v3 = 0LL;
  v26 = 0LL;
  v4 = (CBaseObject **)((char *)this + 544);
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 68);
  v24 = v5;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v3 = v26;
  }
  v6 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  if ( !*((_DWORD *)this + 70) )
  {
    v9 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 44), &v27);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x3F1u);
    }
    else
    {
      v10 = CRenderDataVisual::AddInstruction(this, v27);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3F2u);
      }
      else
      {
        if ( *((_BYTE *)this + 616) )
        {
LABEL_14:
          if ( !*v4 )
          {
            ShouldFreezeAnimationCVI = CTopLevelWindow3D::ShouldFreezeAnimationCVI(this);
            CVIForAnimation = (volatile signed __int32 *)CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                                           *((CSecondaryWindowRepresentation **)this + 43),
                                                           ShouldFreezeAnimationCVI);
            v16 = (CBaseObject *)v5;
            v5 = CVIForAnimation;
            v24 = CVIForAnimation;
            if ( v16 )
            {
              CBaseObject::Release(v16);
              CVIForAnimation = v5;
            }
            if ( ShouldFreezeAnimationCVI )
              wil::com_ptr_t<CCachedVisualImageProxy,wil::err_returncode_policy>::operator=(v4, CVIForAnimation);
          }
          v17 = CDrawBitmapInstruction::Create((struct CBaseImageProxy *)v5, &v25);
          v2 = v17;
          v18 = v25;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x413u);
            goto LABEL_29;
          }
          v19 = CRenderDataVisual::AddInstruction(this, v25);
          v2 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x414u);
            goto LABEL_29;
          }
          if ( !v3 )
            goto LABEL_24;
          v20 = CPopInstruction::Create(&v28);
          v2 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x41Au);
            v6 = v28;
            goto LABEL_29;
          }
          v6 = v28;
          v21 = CRenderDataVisual::AddInstruction(this, v28);
          v2 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x41Bu);
          }
          else
          {
LABEL_24:
            if ( !v27 )
              goto LABEL_27;
            v22 = CPopInstruction::Create(&v29);
            v2 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x420u);
              v7 = v29;
            }
            else
            {
              v7 = v29;
              v23 = CRenderDataVisual::AddInstruction(this, v29);
              v2 = v23;
              if ( v23 >= 0 )
              {
LABEL_27:
                if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 42) + 440LL) + 249LL) & 0x40) != 0 )
                  CVisualProxy::SetVisualProtectContent(*((CVisualProxy **)this + 2), 1);
                goto LABEL_29;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x421u);
            }
          }
LABEL_29:
          if ( v18 )
            CBaseObject::Release(v18);
          goto LABEL_31;
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 45) + 16LL) + 16LL)
                                                        + 968LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 45) + 16LL) + 16LL),
                *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 45) + 16LL) + 24LL));
        v2 = v11;
        if ( v11 >= 0 )
        {
          v12 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 45), &v26);
          v2 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x400u);
            v3 = v26;
          }
          else
          {
            v3 = v26;
            v13 = CRenderDataVisual::AddInstruction(this, v26);
            v2 = v13;
            if ( v13 >= 0 )
              goto LABEL_14;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x401u);
          }
LABEL_31:
          if ( v3 )
            CBaseObject::Release(v3);
          if ( v6 )
            CBaseObject::Release(v6);
          goto LABEL_35;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3FEu);
      }
    }
LABEL_35:
    if ( v27 )
      CBaseObject::Release(v27);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v24)(v24, 1LL);
  return v2;
}
