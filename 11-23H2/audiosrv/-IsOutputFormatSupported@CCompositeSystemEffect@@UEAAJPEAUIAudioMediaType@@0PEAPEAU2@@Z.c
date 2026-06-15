/*
 * XREFs of ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180156F10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x180014008 (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800636B8 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_fb55aca7c1b5235f1be9947e4affc47c___::_lambda_call__lambda_fb55aca7c1b5235f1be9947e4affc47c___ @ 0x180156398 (wil--details--lambda_call__lambda_fb55aca7c1b5235f1be9947e4affc47c___--_lambda_call__lambda_fb55.c)
 *     _lambda_fb55aca7c1b5235f1be9947e4affc47c_::operator() @ 0x1801565FC (_lambda_fb55aca7c1b5235f1be9947e4affc47c_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::IsOutputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  int v7; // edi
  int v8; // ebx
  int v9; // r14d
  int v10; // r13d
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // esi
  struct IAudioMediaType *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *); // rbx
  int v18; // eax
  __int64 *v19; // rdx
  struct IAudioProcessingObject **v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, _QWORD, struct IAudioMediaType *, __int64 *); // rbx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, __int64, __int64, __int64 *); // rbx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  struct IAudioMediaType *v33; // [rsp+30h] [rbp-99h] BYREF
  __int64 v34; // [rsp+38h] [rbp-91h] BYREF
  __int64 v35; // [rsp+40h] [rbp-89h] BYREF
  __int64 v36; // [rsp+48h] [rbp-81h] BYREF
  struct IAudioMediaType *v37; // [rsp+50h] [rbp-79h] BYREF
  int v38; // [rsp+58h] [rbp-71h]
  int v39; // [rsp+5Ch] [rbp-6Dh]
  int v40; // [rsp+60h] [rbp-69h] BYREF
  __int64 v41; // [rsp+68h] [rbp-61h] BYREF
  struct IAudioMediaType *v42; // [rsp+70h] [rbp-59h] BYREF
  struct IAudioMediaType *v43; // [rsp+78h] [rbp-51h] BYREF
  __int128 v44; // [rsp+80h] [rbp-49h]
  __int128 v45; // [rsp+90h] [rbp-39h]
  int *v46; // [rsp+A0h] [rbp-29h]
  _OWORD v47[2]; // [rsp+A8h] [rbp-21h] BYREF
  int *v48; // [rsp+C8h] [rbp-1h]
  char v49; // [rsp+D0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]
  char v51; // [rsp+130h] [rbp+67h]
  signed int v53; // [rsp+140h] [rbp+77h] BYREF
  struct IAudioMediaType **v54; // [rsp+148h] [rbp+7Fh]

  v54 = a4;
  v7 = -1;
  if ( *((_DWORD *)this + 18) == 1 )
  {
    v8 = *((_DWORD *)this + 26) - 1;
    v9 = -1;
    v38 = *((_DWORD *)this + 17) != 0 ? v8 : 0;
    v10 = v38;
  }
  else
  {
    v11 = *((_DWORD *)this + 17);
    v12 = *((_DWORD *)this + 26);
    if ( !v11 )
      v7 = v12;
    v9 = v11 != 0 ? -1 : 1;
    v8 = v11 != 0 ? v12 - 1 : 0;
    v10 = v7 - v9;
    v38 = v8;
  }
  v39 = v7;
  v37 = a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v37);
  v43 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v43);
  v36 = 0LL;
  v51 = 1;
  v53 = v8;
  v13 = -2005073917;
  while ( v8 != v7 )
  {
    v14 = v37;
    v42 = v37;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v42);
    if ( v53 == v38 )
      v14 = a2;
    v33 = v14;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v33);
    v41 = 0LL;
    v15 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
            (__int64)this + 96,
            v53);
    v16 = *(_QWORD *)v15;
    v17 = *(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v15 + 64LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
    v18 = v17(v16, v33, v42, &v41);
    v40 = v18;
    *(_QWORD *)&v44 = (char *)this - 8;
    *((_QWORD *)&v44 + 1) = &v33;
    *(_QWORD *)&v45 = &v42;
    *((_QWORD *)&v45 + 1) = &v53;
    v46 = &v40;
    v47[0] = v44;
    v47[1] = v45;
    v48 = &v40;
    v49 = 1;
    if ( v18 == -2005073917 )
    {
      v20 = (struct IAudioProcessingObject **)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                (__int64)this + 96,
                                                v53);
      if ( !IsFixedFormatApo(*v20) )
      {
        v13 = v40;
        if ( v40 >= 0 )
          goto LABEL_39;
        v30 = 1177LL;
        goto LABEL_38;
      }
      v35 = 0LL;
      v21 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)this + 96,
              v53);
      v22 = *(_QWORD *)v21;
      v23 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v21 + 56LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
      v24 = v23(v22, 0LL, v33, &v35);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48A,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v24);
LABEL_35:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
        v13 = v25;
LABEL_39:
        wil::details::lambda_call__lambda_fb55aca7c1b5235f1be9947e4affc47c___::_lambda_call__lambda_fb55aca7c1b5235f1be9947e4affc47c___((__int64)v47);
LABEL_40:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v42);
        goto LABEL_44;
      }
      v34 = 0LL;
      v26 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)this + 96,
              v53);
      v27 = *(_QWORD *)v26;
      v28 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(**(_QWORD **)v26 + 64LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
      v29 = v28(v27, v35, v35, &v34);
      v25 = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48E,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v29);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
        goto LABEL_35;
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v37, &v34);
      if ( v53 == v10 )
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v36, &v34);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
    }
    else
    {
      if ( v18 )
      {
        if ( v18 != 1 )
        {
          v13 = v18;
          if ( v18 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x49F,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v18);
          v49 = 0;
          lambda_fb55aca7c1b5235f1be9947e4affc47c_::operator()((signed int **)v47);
          goto LABEL_40;
        }
        if ( v53 != v10 )
        {
          v30 = 1141LL;
LABEL_38:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v30,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v13);
          goto LABEL_39;
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v36, &v41);
        v19 = &v36;
        if ( v33 )
          v19 = (__int64 *)&v33;
      }
      else
      {
        if ( !v33 )
        {
          v51 = 0;
          goto LABEL_27;
        }
        v19 = (__int64 *)&v33;
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v37, v19);
    }
LABEL_27:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v42);
    v8 = v9 + v53;
    v53 += v9;
    if ( !v51 )
      break;
    v7 = v39;
  }
  v31 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    *v54 = (struct IAudioMediaType *)v31;
    v13 = 1;
  }
  else
  {
    *v54 = a3;
    ((void (__fastcall *)(struct IAudioMediaType *))a3->lpVtbl->AddRef)(a3);
    v13 = 0;
  }
LABEL_44:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v43);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
  return v13;
}
