/*
 * XREFs of ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18014F980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18004201C (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800FE5BC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x18014A7EC (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::IsOutputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  int v4; // eax
  int v6; // ecx
  struct IAudioMediaType *v7; // rsi
  signed int v9; // r15d
  int v10; // r14d
  bool v11; // cf
  int v12; // eax
  struct IAudioMediaType *v13; // rbx
  unsigned int v14; // r13d
  char *v15; // r14
  int v16; // r12d
  struct IAudioMediaType *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 (__fastcall *v20)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *); // rsi
  int v21; // eax
  int v22; // esi
  __int64 *v23; // rdx
  struct IAudioProcessingObject **v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64, _QWORD, struct IAudioMediaType *, __int64 *); // rbx
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, __int64, __int64, __int64 *); // rbx
  int v33; // eax
  int v34; // ebx
  struct IAudioMediaType *v35; // rax
  struct IAudioMediaType *v37; // [rsp+38h] [rbp-49h] BYREF
  __int64 v38; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMediaType *v39; // [rsp+48h] [rbp-39h] BYREF
  int v40; // [rsp+50h] [rbp-31h]
  __int64 v41; // [rsp+58h] [rbp-29h] BYREF
  __int64 v42; // [rsp+60h] [rbp-21h] BYREF
  struct IAudioMediaType *v43; // [rsp+68h] [rbp-19h] BYREF
  struct IAudioMediaType *v44; // [rsp+70h] [rbp-11h] BYREF
  int v45; // [rsp+78h] [rbp-9h]
  unsigned int v46; // [rsp+7Ch] [rbp-5h]
  char *v47; // [rsp+80h] [rbp-1h]
  __int64 v48[10]; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  unsigned int v50; // [rsp+E8h] [rbp+67h]

  v4 = *((_DWORD *)this + 12);
  v6 = *((_DWORD *)this + 20);
  v7 = a3;
  if ( v4 )
  {
    v9 = v6 - 1;
    v10 = -1;
  }
  else
  {
    v9 = 0;
    v10 = v6;
  }
  v11 = v4 != 0;
  v40 = v10;
  v12 = *((_DWORD *)this + 11);
  v13 = a3;
  v37 = a3;
  v14 = 1;
  v46 = v11 ? -1 : 1;
  v45 = v12 != 0 ? v6 - 1 : 0;
  v50 = v10 - v46;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v37);
  v48[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v48);
  v39 = 0LL;
  if ( v9 != v10 )
  {
    v15 = (char *)this + 72;
    v16 = -2005073917;
    v47 = (char *)this + 72;
    while ( 1 )
    {
      v44 = v13;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v44);
      v17 = v13;
      if ( v9 == v45 )
        v17 = a2;
      v43 = v17;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v43);
      v42 = 0LL;
      v18 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
              (__int64)v15,
              v9);
      v19 = *(_QWORD *)v18;
      v20 = *(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v18 + 64LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
      v21 = v20(v19, v17, v13, &v42);
      v22 = v21;
      if ( v21 != -2005073917 )
        break;
      v15 = v47;
      v24 = (struct IAudioProcessingObject **)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                (__int64)v47,
                                                v9);
      if ( IsFixedFormatApo(*v24) )
      {
        v41 = 0LL;
        v25 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                (__int64)v15,
                v9);
        v26 = *(_QWORD *)v25;
        v27 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)v25 + 56LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
        v28 = v27(v26, 0LL, v17, &v41);
        v29 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x408,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v28);
          v16 = v29;
LABEL_33:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
LABEL_34:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v43);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
          goto LABEL_37;
        }
        v38 = 0LL;
        v30 = ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                (__int64)v15,
                v9);
        v31 = *(_QWORD *)v30;
        v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(**(_QWORD **)v30 + 64LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
        v33 = v32(v31, v41, v41, &v38);
        v34 = v33;
        if ( v33 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x40C,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v33);
          v16 = v34;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
          goto LABEL_33;
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v37, &v38);
        if ( v9 == v50 )
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v39, &v38);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
        goto LABEL_23;
      }
LABEL_24:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v43);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
      v9 += v46;
      if ( v9 == v40 )
      {
        v35 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          *a4 = v35;
          goto LABEL_38;
        }
        v7 = a3;
        goto LABEL_36;
      }
    }
    if ( v21 )
    {
      if ( v21 != 1 )
      {
        if ( v21 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x419,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v21);
        v16 = v22;
        goto LABEL_34;
      }
      if ( v9 != v50 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F3,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x887D0003LL);
        goto LABEL_34;
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v39, &v42);
      v23 = (__int64 *)&v39;
    }
    else
    {
      v23 = (__int64 *)&v44;
    }
    if ( v17 )
      v23 = (__int64 *)&v43;
    Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v37, v23);
    v15 = v47;
LABEL_23:
    v13 = v37;
    goto LABEL_24;
  }
LABEL_36:
  *a4 = v7;
  ((void (__fastcall *)(struct IAudioMediaType *))v7->lpVtbl->AddRef)(v7);
  v16 = 0;
LABEL_37:
  v14 = v16;
LABEL_38:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v48);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
  return v14;
}
