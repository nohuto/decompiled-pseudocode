/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801165E0
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801A16C8 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1800AA284 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E60D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800EBABC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC838 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@QEAA_NXZ @ 0x180117E5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18012CEC4 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x1801A7500 (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        struct CManipulationFrame *a1,
        const struct tagPOINTER_INFO *a2,
        const struct IManipulationContext *a3,
        struct TargetingInfo *a4)
{
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // rsi
  _DWORD *v12; // rax
  int v13; // ecx
  __int64 *v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // r14
  __int64 v22; // rdx
  int v23; // eax
  __int64 (__fastcall *v24)(const struct IManipulationContext *, __int64, _QWORD); // rdi
  __int64 v25; // rax
  unsigned int v26; // r13d
  int v27; // ebx
  __int64 v28; // rdi
  int (__fastcall *v29)(__int64, _QWORD, __int64 *); // rbx
  bool v30; // al
  unsigned int v31; // ebx
  struct TargetingInfo *v32; // rcx
  int v34; // [rsp+20h] [rbp-89h]
  __int64 (__fastcall ***v35)(_QWORD); // [rsp+28h] [rbp-81h] BYREF
  int v36; // [rsp+30h] [rbp-79h] BYREF
  __int64 v37; // [rsp+38h] [rbp-71h] BYREF
  int v38; // [rsp+40h] [rbp-69h]
  __int64 v39; // [rsp+48h] [rbp-61h] BYREF
  __int64 v40; // [rsp+50h] [rbp-59h] BYREF
  __int64 (__fastcall ***v41)(_QWORD); // [rsp+58h] [rbp-51h] BYREF
  struct TargetingInfo *v42; // [rsp+60h] [rbp-49h]
  _BYTE v43[8]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v44; // [rsp+70h] [rbp-39h] BYREF
  int v45; // [rsp+78h] [rbp-31h] BYREF
  char v46; // [rsp+7Ch] [rbp-2Dh]
  char v47; // [rsp+B0h] [rbp+7h]

  v42 = a4;
  v35 = 0LL;
  v37 = 0LL;
  v36 = 1;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v37);
  v7 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
  v8 = *(_QWORD *)a3;
  v9 = v7;
  LODWORD(v39) = v7;
  v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(v8 + 64))(
          a3,
          *((unsigned int *)a2 + 1),
          &v36);
  v38 = v10;
  if ( v10 < 0 )
  {
    v31 = v10;
    goto LABEL_66;
  }
  if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0
    && v36
    && v37
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v37 + 144LL))(v37) )
  {
    v34 = v36;
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v35, &v37);
    v11 = (__int64)v35;
  }
  else
  {
    v12 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, _BYTE *))(*(_QWORD *)a3 + 80LL))(
                      a3,
                      v43);
    v11 = 0LL;
    v13 = *v12;
    v14 = (__int64 *)(v12 + 2);
    v34 = v13;
    if ( &v40 != v14 )
    {
      v11 = *v14;
      *v14 = 0LL;
    }
    v40 = 0LL;
    v35 = (__int64 (__fastcall ***)(_QWORD))v11;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v40);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v44);
  }
  if ( v11 )
  {
    v15 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a3 + 56LL))(
            a3,
            v11,
            v9);
    if ( !v15
      || (v16 = *(_QWORD *)a3,
          v17 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a3 + 16LL))(a3),
          (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v16 + 56))(a3, v17, v9) > v15) )
    {
      v34 = 0;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v35);
      v11 = (__int64)v35;
    }
  }
  v18 = *((_DWORD *)a2 + 3);
  if ( (v18 & 0x40000) != 0 )
  {
    if ( v36 )
    {
      if ( v37 != v11 )
      {
        v19 = ConvertToInputType(*(_DWORD *)a2, v18);
        if ( !(unsigned __int8)anonymous_namespace_::AllSupportedWithSingleTarget(a3, v19) )
        {
          v34 = 1;
          Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v35);
          v11 = (__int64)v35;
        }
      }
    }
  }
  if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 && v36 == 2 && v34 == 1 && v11 )
  {
    v34 = 1;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v35);
    v11 = (__int64)v35;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::GetImpl'::`2'::impl) )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x10000) != 0 && *(_DWORD *)a2 == 5 )
    {
      v20 = 0;
      if ( *((_DWORD *)a1 + 4) )
      {
        v21 = v37;
        while ( 1 )
        {
          v22 = *((unsigned int *)a1 + 62 * v20 + 93);
          if ( (_DWORD)v22 != *((_DWORD *)a2 + 1) )
          {
            v23 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, int *))(*(_QWORD *)a3 + 64LL))(
                    a3,
                    v22,
                    &v36);
            v21 = v37;
            if ( v23 >= 0 )
            {
              if ( v36 != 1 )
                goto LABEL_36;
              if ( v37 )
                break;
            }
          }
          if ( ++v20 >= *((_DWORD *)a1 + 4) )
            goto LABEL_36;
        }
LABEL_37:
        if ( v21 != v11 && (v36 != 1 || v21) )
        {
          v24 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a3 + 56LL);
          v25 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a3 + 16LL))(a3);
          v26 = v39;
          v27 = v24(a3, v25, (unsigned int)v39);
          if ( (unsigned int)v24(a3, v21, v26) == v27 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v37 + 80LL))(v37, v26, 1LL) )
            {
              v28 = v37;
              v39 = 0LL;
              v29 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v37 + 128LL);
              Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v39);
              if ( v29(v28, v26, &v39) >= 0 )
              {
                (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 40LL))(v39, &v45);
                v30 = v45 == 1 && ((v46 & 1) != 0 || (v46 & 2) != 0);
                if ( ((v47 & 1) == 0 || v30) && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v37 + 136LL))(v37) )
                {
                  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v35, &v37);
                  v11 = (__int64)v35;
                  v34 = v36;
                }
              }
              Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v39);
            }
          }
        }
        goto LABEL_53;
      }
    }
  }
  v21 = v37;
LABEL_36:
  if ( v21 )
    goto LABEL_37;
LABEL_53:
  if ( !v34 )
  {
    if ( !v36 && (*((_DWORD *)a2 + 3) & 0x40000) == 0 )
      goto LABEL_63;
    v34 = 1;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v35);
    v11 = (__int64)v35;
  }
  if ( v34 == 1 && !v11 )
  {
    (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a3 + 96LL))(a3, &v40);
    if ( v41 )
    {
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v35);
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v41);
      v31 = 0;
      v35 = v41;
    }
    else
    {
      v31 = v38;
    }
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v41);
    goto LABEL_64;
  }
LABEL_63:
  v31 = v38;
LABEL_64:
  v32 = v42;
  *(_DWORD *)v42 = v34;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((char *)v32 + 8, &v35);
LABEL_66:
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v37);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v35);
  return v31;
}
