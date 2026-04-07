/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002BB90
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002B800 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ??4?$com_ptr_t@VCCachedVisualImageProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCachedVisualImageProxy@@@Z @ 0x1800151DC (--4-$com_ptr_t@VCCachedVisualImageProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCache.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18001C638 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180037E00 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180051574 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180052140 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x180106070 (-SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CTopLevelWindow3D *this)
{
  unsigned int v2; // edi
  volatile signed __int32 *v3; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  char v11; // di
  CBaseObject *CVIForAnimation; // r15
  CBaseObject *v13; // rcx
  int v14; // eax
  struct CRenderDataInstruction *v15; // r14
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct CRenderDataInstruction *v21; // [rsp+40h] [rbp-20h] BYREF
  struct CRenderDataInstruction *v22; // [rsp+48h] [rbp-18h] BYREF
  struct CRenderDataInstruction *v23; // [rsp+50h] [rbp-10h] BYREF
  struct CRenderDataInstruction *v24; // [rsp+A8h] [rbp+48h] BYREF
  struct CRenderDataInstruction *v25; // [rsp+B0h] [rbp+50h] BYREF
  CBaseObject *v26; // [rsp+B8h] [rbp+58h]

  v2 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 68);
  v26 = (CBaseObject *)v3;
  if ( v3 )
    _InterlockedIncrement(v3 + 2);
  v21 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  if ( !*((_DWORD *)this + 70) )
  {
    v5 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 44), &v25);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3C0u, 0LL);
    }
    else
    {
      v6 = CRenderDataVisual::AddInstruction(this, v25);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3C1u, 0LL);
      }
      else
      {
        if ( *((_BYTE *)this + 616) )
          goto LABEL_14;
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 45) + 16LL) + 16LL)
                                                       + 896LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 45) + 16LL) + 16LL),
               *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 45) + 16LL) + 24LL));
        v2 = v7;
        if ( v7 >= 0 )
        {
          v8 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 45), &v24);
          v2 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3CFu, 0LL);
          }
          else
          {
            v9 = CRenderDataVisual::AddInstruction(this, v24);
            v2 = v9;
            if ( v9 >= 0 )
            {
LABEL_14:
              if ( !*((_QWORD *)this + 68) )
              {
                v10 = *((_DWORD *)this + 96);
                v11 = v10 == 6 || v10 == 3;
                CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                    *((CSecondaryWindowRepresentation **)this + 43),
                                    v11);
                v13 = v26;
                v26 = CVIForAnimation;
                if ( v13 )
                  CBaseObject::Release(v13);
                if ( v11 )
                  wil::com_ptr_t<CCachedVisualImageProxy,wil::err_returncode_policy>::operator=(
                    (CBaseObject **)this + 68,
                    (volatile signed __int32 *)CVIForAnimation);
              }
              v14 = CDrawBitmapInstruction::Create(v26, &v23);
              v2 = v14;
              v15 = v23;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x3E2u, 0LL);
              }
              else
              {
                v16 = CRenderDataVisual::AddInstruction(this, v23);
                v2 = v16;
                if ( v16 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3E3u, 0LL);
                }
                else
                {
                  if ( v24 )
                  {
                    v17 = CPopInstruction::Create(&v21);
                    v2 = v17;
                    if ( v17 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x3E9u, 0LL);
                      goto LABEL_32;
                    }
                    v18 = CRenderDataVisual::AddInstruction(this, v21);
                    v2 = v18;
                    if ( v18 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3EAu, 0LL);
                      goto LABEL_32;
                    }
                  }
                  if ( !v25 )
                    goto LABEL_30;
                  v19 = CPopInstruction::Create(&v22);
                  v2 = v19;
                  if ( v19 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x3EFu, 0LL);
                  }
                  else
                  {
                    v20 = CRenderDataVisual::AddInstruction(this, v22);
                    v2 = v20;
                    if ( v20 >= 0 )
                    {
LABEL_30:
                      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 42) + 440LL) + 249LL) & 0x20) != 0 )
                        CVisualProxy::SetVisualProtectContent(*((CVisualProxy **)this + 2), 1);
                      goto LABEL_32;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x3F0u, 0LL);
                  }
                }
              }
LABEL_32:
              if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 2, 0xFFFFFFFF) == 1 )
                (**(void (__fastcall ***)(struct CRenderDataInstruction *, __int64))v23)(v23, 1LL);
              goto LABEL_35;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3D0u, 0LL);
          }
LABEL_35:
          if ( v24 && _InterlockedExchangeAdd((volatile signed __int32 *)v24 + 2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(struct CRenderDataInstruction *, __int64))v24)(v24, 1LL);
          if ( v21 && _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(struct CRenderDataInstruction *, __int64))v21)(v21, 1LL);
          goto LABEL_41;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3CDu, 0LL);
      }
    }
LABEL_41:
    if ( v25 && _InterlockedExchangeAdd((volatile signed __int32 *)v25 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(struct CRenderDataInstruction *, __int64))v25)(v25, 1LL);
    if ( v22 && _InterlockedExchangeAdd((volatile signed __int32 *)v22 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(struct CRenderDataInstruction *, __int64))v22)(v22, 1LL);
  }
  if ( v26 && _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v26)(v26, 1LL);
  return v2;
}
