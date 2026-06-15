/*
 * XREFs of ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18014F550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18004201C (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800FE5BC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x18014A7EC (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::IsInputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  struct IAudioMediaType *v5; // r14
  int v6; // ecx
  int v7; // eax
  signed int v8; // r15d
  int v9; // r12d
  unsigned int v10; // r13d
  bool v11; // zf
  signed int v12; // ebx
  signed int v13; // esi
  const struct tWAVEFORMATEX *v14; // rax
  __int64 v15; // rbx
  struct IAudioMediaType *v16; // rsi
  char *v17; // r14
  int v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 (__fastcall *v22)(__int64, __int64, __int64, __int64 *); // rsi
  int v23; // eax
  int v24; // esi
  __int64 *v25; // rdx
  struct IAudioProcessingObject **v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64, _QWORD, __int64, __int64 *); // rdi
  int v30; // eax
  int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 (__fastcall *v34)(__int64, __int64, __int64, __int64 *); // rbx
  int v35; // eax
  int v36; // ebx
  struct IAudioMediaType *v37; // rax
  struct IAudioMediaType *v39; // [rsp+38h] [rbp-49h] BYREF
  __int64 v40; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMediaType *v41; // [rsp+48h] [rbp-39h] BYREF
  int v42; // [rsp+50h] [rbp-31h]
  int v43; // [rsp+54h] [rbp-2Dh]
  __int64 v44; // [rsp+58h] [rbp-29h] BYREF
  __int64 v45; // [rsp+60h] [rbp-21h] BYREF
  __int64 v46; // [rsp+68h] [rbp-19h] BYREF
  __int64 v47; // [rsp+70h] [rbp-11h] BYREF
  int v48; // [rsp+78h] [rbp-9h]
  char *v49; // [rsp+80h] [rbp-1h]
  __int64 v50[10]; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  signed int v52; // [rsp+E8h] [rbp+67h]

  v5 = a3;
  v6 = *((_DWORD *)this + 12);
  v7 = *((_DWORD *)this + 20);
  if ( v6 )
  {
    v8 = v7 - 1;
    v9 = -1;
  }
  else
  {
    v8 = 0;
    v9 = *((_DWORD *)this + 20);
  }
  v43 = v9;
  v10 = 1;
  v11 = *((_DWORD *)this + 11) == 0;
  v48 = v6 != 0 ? -1 : 1;
  if ( v11 )
  {
    v42 = 0;
    v52 = v8;
  }
  else
  {
    v12 = v7 - 1;
    v13 = v8;
    v42 = v7 - 1;
    v52 = v8;
    if ( *((_DWORD *)this + 11) == 1 )
    {
      v14 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
      if ( (unsigned int)ValidateUncompressedWaveFormatEx(v14) == 1 )
        v13 = v12;
      v52 = v13;
    }
  }
  v15 = (__int64)v5;
  v39 = v5;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v39);
  v16 = a2;
  v50[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v50);
  v41 = 0LL;
  if ( v8 == v9 )
    goto LABEL_43;
  v17 = (char *)this + 72;
  v18 = -2005073917;
  v49 = (char *)this + 72;
  while ( 1 )
  {
    v47 = v15;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v47);
    v19 = v15;
    if ( v8 == v42 )
      v19 = (__int64)v16;
    v46 = v19;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v46);
    v45 = 0LL;
    v20 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
            (__int64)v17,
            v8);
    v21 = *(_QWORD *)v20;
    v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(**(_QWORD **)v20 + 56LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v45);
    v23 = v22(v21, v19, v15, &v45);
    v24 = v23;
    if ( v23 == -2005073917 )
    {
      v17 = v49;
      v26 = (struct IAudioProcessingObject **)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                (__int64)v49,
                                                v8);
      if ( !IsFixedFormatApo(*v26) )
        goto LABEL_30;
      v40 = 0LL;
      v27 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)v17,
              v8);
      v28 = *(_QWORD *)v27;
      v29 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(**(_QWORD **)v27 + 56LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
      v30 = v29(v28, 0LL, v15, &v40);
      v31 = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38E,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v30);
        v18 = v31;
LABEL_38:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
LABEL_39:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v45);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v46);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v47);
        goto LABEL_44;
      }
      if ( v8 == v52 )
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v41, &v40);
      v44 = 0LL;
      v32 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)v17,
              v8);
      v33 = *(_QWORD *)v32;
      v34 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(**(_QWORD **)v32 + 64LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v44);
      v35 = v34(v33, v40, v40, &v44);
      v36 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x398,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v35);
        v18 = v36;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v44);
        goto LABEL_38;
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v39, &v44);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
    }
    else
    {
      if ( v23 )
      {
        if ( v23 != 1 )
        {
          if ( v23 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x39F,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v23);
          v18 = v24;
          goto LABEL_39;
        }
        if ( v8 != v52 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x378,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x887D0003LL);
          goto LABEL_39;
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v41, &v45);
        v25 = (__int64 *)&v41;
      }
      else
      {
        v25 = &v47;
      }
      if ( v19 )
        v25 = &v46;
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v39, v25);
      v17 = v49;
    }
    v15 = (__int64)v39;
LABEL_30:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v46);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v47);
    v8 += v48;
    if ( v8 == v43 )
      break;
    v16 = a2;
  }
  v37 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    *a4 = v37;
    goto LABEL_45;
  }
  v5 = a3;
LABEL_43:
  *a4 = v5;
  ((void (__fastcall *)(struct IAudioMediaType *))v5->lpVtbl->AddRef)(v5);
  v18 = 0;
LABEL_44:
  v10 = v18;
LABEL_45:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v41);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v50);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  return v10;
}
