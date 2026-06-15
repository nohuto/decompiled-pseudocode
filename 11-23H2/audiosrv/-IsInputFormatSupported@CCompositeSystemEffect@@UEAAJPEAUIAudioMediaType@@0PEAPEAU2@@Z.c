/*
 * XREFs of ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180063450
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x180014008 (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800636B8 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___::_lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___ @ 0x180156378 (wil--details--lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___--_lambda_call__lambda_5fa6.c)
 *     _lambda_5fa69d74b67413ee0ef50ee94853c5ba_::operator() @ 0x1801563B8 (_lambda_5fa69d74b67413ee0ef50ee94853c5ba_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::IsInputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  int v6; // ecx
  signed int v7; // esi
  int v8; // r13d
  int v9; // eax
  int v10; // r15d
  signed int v11; // r14d
  signed int v12; // ebx
  const struct tWAVEFORMATEX *v13; // rax
  struct IAudioMediaType *v14; // rbx
  char *v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *); // rbx
  int v20; // eax
  __int64 *v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rbx
  struct IAudioProcessingObject **v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, _QWORD, struct IAudioMediaType *, __int64 *); // rbx
  int v29; // eax
  unsigned int v30; // ebx
  signed int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 (__fastcall *v34)(__int64, __int64, __int64, __int64 *); // rbx
  int v35; // eax
  __int64 v36; // rdx
  struct IAudioMediaType *v37; // [rsp+30h] [rbp-99h] BYREF
  __int64 v38; // [rsp+38h] [rbp-91h] BYREF
  struct IAudioMediaType *v39; // [rsp+40h] [rbp-89h] BYREF
  __int64 v40; // [rsp+48h] [rbp-81h] BYREF
  struct IAudioMediaType *v41; // [rsp+50h] [rbp-79h] BYREF
  int v42; // [rsp+58h] [rbp-71h] BYREF
  __int64 v43; // [rsp+60h] [rbp-69h] BYREF
  __int64 v44; // [rsp+68h] [rbp-61h] BYREF
  struct IAudioMediaType *v45; // [rsp+70h] [rbp-59h] BYREF
  char *v46; // [rsp+78h] [rbp-51h]
  char *v47; // [rsp+80h] [rbp-49h]
  __int128 v48; // [rsp+88h] [rbp-41h]
  __int128 v49; // [rsp+98h] [rbp-31h]
  int *v50; // [rsp+A8h] [rbp-21h]
  _OWORD v51[2]; // [rsp+B0h] [rbp-19h] BYREF
  int *v52; // [rsp+D0h] [rbp+7h]
  char v53; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]
  signed int v55; // [rsp+130h] [rbp+67h] BYREF
  struct IAudioMediaType *v56; // [rsp+138h] [rbp+6Fh]
  int v57; // [rsp+140h] [rbp+77h]
  struct IAudioMediaType **v58; // [rsp+148h] [rbp+7Fh]

  v58 = a4;
  v56 = a2;
  v6 = *((_DWORD *)this + 18);
  if ( v6 )
  {
    v9 = *((_DWORD *)this + 26);
    v7 = v9 - 1;
    v8 = -1;
  }
  else
  {
    v7 = 0;
    v8 = *((_DWORD *)this + 26);
    v9 = v8;
  }
  v10 = v6 != 0 ? -1 : 1;
  v11 = v7;
  if ( *((_DWORD *)this + 17) )
  {
    v12 = v9 - 1;
    v57 = v9 - 1;
    if ( *((_DWORD *)this + 17) == 1 )
    {
      v13 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
      if ( (unsigned int)ValidateUncompressedWaveFormatEx(v13) == 1 )
        v11 = v12;
    }
  }
  else
  {
    v57 = 0;
  }
  v14 = a3;
  v39 = a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v39);
  v45 = v56;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v45);
  v38 = 0LL;
  v55 = v7;
  if ( v7 == v8 )
  {
LABEL_20:
    *v58 = a3;
    ((void (__fastcall *)(struct IAudioMediaType *))a3->lpVtbl->AddRef)(a3);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v45);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
    return 0LL;
  }
  else
  {
    v47 = (char *)this - 8;
    v15 = (char *)this + 96;
    v46 = v15;
    v16 = -2005073917;
    while ( 1 )
    {
      v41 = v14;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v41);
      if ( v55 == v57 )
        v14 = v56;
      v37 = v14;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v37);
      v44 = 0LL;
      v17 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)v15,
              v55);
      v18 = *(_QWORD *)v17;
      v19 = *(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v17 + 56LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v44);
      v20 = v19(v18, v37, v41, &v44);
      v42 = v20;
      *(_QWORD *)&v48 = v47;
      *((_QWORD *)&v48 + 1) = &v41;
      *(_QWORD *)&v49 = &v37;
      *((_QWORD *)&v49 + 1) = &v55;
      v50 = &v42;
      v51[0] = v48;
      v51[1] = v49;
      v52 = &v42;
      v53 = 1;
      if ( v20 == -2005073917 )
      {
        v24 = (__int64)v46;
        v25 = (struct IAudioProcessingObject **)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                  (__int64)v46,
                                                  v55);
        if ( !IsFixedFormatApo(*v25) )
        {
          v16 = v42;
          if ( v42 >= 0 )
            goto LABEL_43;
          v36 = 997LL;
          goto LABEL_42;
        }
        v40 = 0LL;
        v26 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                v24,
                v55);
        v27 = *(_QWORD *)v26;
        v28 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v26 + 56LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
        v29 = v28(v27, 0LL, v41, &v40);
        v30 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3D6,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v29);
LABEL_39:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
          v16 = v30;
LABEL_43:
          wil::details::lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___::_lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___(v51);
LABEL_44:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v44);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v41);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v45);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
          return v16;
        }
        v31 = v55;
        if ( v55 == v11 )
        {
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v38, &v40);
          v31 = v55;
        }
        v43 = 0LL;
        v32 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                (__int64)v46,
                v31);
        v33 = *(_QWORD *)v32;
        v34 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(**(_QWORD **)v32 + 64LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v43);
        v35 = v34(v33, v40, v40, &v43);
        v30 = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E0,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v35);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v43);
          goto LABEL_39;
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v39, &v43);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v43);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
      }
      else
      {
        if ( v20 )
        {
          if ( v20 != 1 )
          {
            v16 = v20;
            if ( v20 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3EB,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)(unsigned int)v20);
            v53 = 0;
            lambda_5fa69d74b67413ee0ef50ee94853c5ba_::operator()(v51);
            goto LABEL_44;
          }
          if ( v55 != v11 )
          {
            v36 = 960LL;
LABEL_42:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v36,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)v16);
            goto LABEL_43;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v38, &v44);
          v21 = &v38;
        }
        else
        {
          v21 = (__int64 *)&v41;
        }
        if ( v37 )
          v21 = (__int64 *)&v37;
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v39, v21);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v41);
      v55 += v10;
      if ( v55 == v8 )
        break;
      v14 = v39;
      v15 = v46;
    }
    v22 = v38;
    if ( !v38 )
      goto LABEL_20;
    v38 = 0LL;
    *v58 = (struct IAudioMediaType *)v22;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v45);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
    return 1LL;
  }
}
