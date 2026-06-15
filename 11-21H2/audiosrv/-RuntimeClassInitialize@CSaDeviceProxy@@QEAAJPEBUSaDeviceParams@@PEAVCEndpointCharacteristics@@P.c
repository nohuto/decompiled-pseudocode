/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x180003B80
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x180003500 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180004218 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180034120 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065534 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Sddd @ 0x1800FB2D4 (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        CSaDeviceProxy *this,
        const struct SaDeviceParams *a2,
        struct CEndpointCharacteristics *a3,
        struct IDeviceGraphObjectsStore *a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned int a6,
        struct SaDeviceResourceParams *a7,
        const struct _GUID *a8,
        const struct _GUID *a9)
{
  struct IDeviceGraphObjectsStore *v13; // rcx
  __int64 v14; // rax
  unsigned __int128 v15; // rax
  __int64 v16; // rsi
  SaDeviceParams *v17; // rbx
  _WORD *v18; // rbp
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r14
  __int64 v21; // r9
  size_t v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdi
  LPVOID v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdi
  LPVOID v28; // rbp
  size_t v29; // rbx
  int v30; // edi
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rdi
  char *v34; // rbp
  _WORD *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  __int64 v38; // rax
  const struct tWAVEFORMATEX *v39; // rcx
  const struct tWAVEFORMATEX *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r10
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43; // r9d
  enum _AUDCLNT_SHAREMODE v44; // ebp
  int v45; // eax
  struct IAudioDeviceGraph *v46; // rcx
  struct IAudioDeviceGraph *v47; // rbx
  IMalloc *v48; // rax
  IMalloc *v49; // rsi
  struct SaDeviceResourceParams *v50; // r14
  int v51; // edi
  HANDLE ProcessHeap; // rax
  _QWORD *v53; // rax
  int v55; // [rsp+20h] [rbp-C8h]
  int v56; // [rsp+20h] [rbp-C8h]
  struct _GUID v57; // [rsp+70h] [rbp-78h] BYREF
  struct _GUID v58; // [rsp+80h] [rbp-68h] BYREF
  struct _GUID v59; // [rsp+90h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  struct IAudioDeviceGraph *v61; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v62; // [rsp+F8h] [rbp+10h] BYREF
  LPMALLOC ppMalloc; // [rsp+100h] [rbp+18h] BYREF
  LPMALLOC v64; // [rsp+108h] [rbp+20h] BYREF

  v13 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)this + 14);
  if ( v13 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)a4 + 8LL))(a4);
      v13 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)this + 14);
    }
    *((_QWORD *)this + 14) = a4;
    if ( v13 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v62 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)a3 + 2) + 40LL))(*((_QWORD *)a3 + 2), &v62);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v14 = *((_QWORD *)a2 + 2);
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *(unsigned __int16 *)(v14 + 14),
      *(unsigned __int16 *)(v14 + 2),
      v62,
      *(_DWORD *)(v14 + 4),
      *(_WORD *)(v14 + 2),
      *(_WORD *)(v14 + 14));
  }
  *(_QWORD *)&v15 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( (_QWORD)v15 )
  {
    *(_OWORD *)v15 = 0LL;
    *(_OWORD *)(v15 + 16) = 0LL;
    *(_OWORD *)(v15 + 32) = 0LL;
    *(_OWORD *)(v15 + 48) = 0LL;
    *(_OWORD *)(v15 + 64) = 0LL;
    *(_OWORD *)(v15 + 80) = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = (SaDeviceParams *)v16;
  *(_QWORD *)&v57.Data1 = v16;
  v18 = *(_WORD **)a2;
  v19 = -1LL;
  do
    ++v19;
  while ( v18[v19] );
  *(_QWORD *)v16 = 0LL;
  v20 = v19 + 1;
  if ( v19 + 1 >= v19 )
  {
    v15 = v20 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v20, 2uLL) )
    {
      *(_QWORD *)&v15 = CoTaskMemAlloc(2 * v20);
      v21 = v15;
      *(_QWORD *)v16 = v15;
      if ( (_QWORD)v15 )
      {
        if ( v20 > 0x7FFFFFFF )
        {
          v22 = 0LL;
          *(_WORD *)v15 = 0;
        }
        else
        {
          if ( v19 < 0x7FFFFFFF )
          {
            if ( !v18 )
            {
              v18 = &unk_18017F160;
              v19 = 0LL;
            }
            if ( v20 )
            {
              v31 = v20;
              *((_QWORD *)&v15 + 1) = v15;
              v32 = 0LL;
              v33 = v19 - v20;
              v34 = (char *)v18 - v15;
              do
              {
                if ( !(v31 + v33) )
                  break;
                LOWORD(v15) = *(_WORD *)&v34[*((_QWORD *)&v15 + 1)];
                if ( !(_WORD)v15 )
                  break;
                **((_WORD **)&v15 + 1) = v15;
                *((_QWORD *)&v15 + 1) += 2LL;
                ++v32;
                --v31;
              }
              while ( v31 );
              v35 = (_WORD *)(*((_QWORD *)&v15 + 1) - 2LL);
              if ( v31 )
                v35 = (_WORD *)*((_QWORD *)&v15 + 1);
              *v35 = 0;
              v36 = v32 - 1;
              if ( v31 )
                v36 = v32;
              v37 = v20 - v36;
              if ( v31 && v37 > 1 && 2 * v37 > 2 )
                memset_0((void *)(v21 + 2 * (v36 + 1)), 0, 2 * v37 - 2);
            }
          }
          else if ( v19 != -1LL )
          {
            *(_WORD *)v15 = 0;
          }
          v22 = 0LL;
        }
        v23 = *((_QWORD *)a2 + 2);
        if ( !v23 )
          goto LABEL_28;
        v24 = *(unsigned __int16 *)(v23 + 16);
        v25 = CoTaskMemAlloc(v24 + 18);
        *(_QWORD *)(v16 + 16) = v25;
        if ( v25 )
        {
          if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
          {
            v22 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v25);
            ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          }
          memset_0(*(void **)(v16 + 16), 0, v22);
          memcpy_0(*(void **)(v16 + 16), *((const void **)a2 + 2), v24 + 18);
LABEL_28:
          v26 = *((_QWORD *)a2 + 3);
          if ( !v26 )
          {
LABEL_33:
            *(_OWORD *)(v16 + 64) = *((_OWORD *)a2 + 4);
            *(_OWORD *)(v16 + 48) = *((_OWORD *)a2 + 3);
            *(_DWORD *)(v16 + 8) = *((_DWORD *)a2 + 2);
            *(_QWORD *)(v16 + 32) = *((_QWORD *)a2 + 4);
            *(_QWORD *)(v16 + 40) = *((_QWORD *)a2 + 5);
            *(_OWORD *)(v16 + 80) = *((_OWORD *)a2 + 5);
            v17 = 0LL;
            *((_QWORD *)this + 6) = v16;
            v30 = 0;
            goto LABEL_52;
          }
          v27 = *(unsigned __int16 *)(v26 + 16);
          v28 = CoTaskMemAlloc(v27 + 18);
          *(_QWORD *)(v16 + 24) = v28;
          if ( v28 )
          {
            v29 = 0LL;
            if ( CoGetMalloc(1u, &v64) >= 0 )
            {
              v29 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))v64->lpVtbl->GetSize)(v64, v28);
              ((void (__fastcall *)(LPMALLOC))v64->lpVtbl->Release)(v64);
            }
            memset_0(*(void **)(v16 + 24), 0, v29);
            memcpy_0(*(void **)(v16 + 24), *((const void **)a2 + 3), v27 + 18);
            goto LABEL_33;
          }
        }
      }
      v30 = -2147024882;
      goto LABEL_52;
    }
  }
  v30 = -2147024362;
LABEL_52:
  if ( v17 )
    SaDeviceParams::`scalar deleting destructor'(v17, DWORD2(v15));
  if ( v30 >= 0 )
  {
    v61 = 0LL;
    v38 = *((_QWORD *)this + 6);
    v39 = *(const struct tWAVEFORMATEX **)(v38 + 24);
    v40 = *(const struct tWAVEFORMATEX **)(v38 + 16);
    v41 = *(_QWORD *)(v38 + 40);
    v42 = *(_QWORD *)(v38 + 32);
    v43 = *(_DWORD *)(v38 + 8);
    v57 = *(struct _GUID *)(v38 + 80);
    v58 = *(struct _GUID *)(v38 + 64);
    v59 = *(struct _GUID *)(v38 + 48);
    v44 = a5;
    v45 = CreateSaDevice(a3, a5, a6, v43, &v59, &v58, v42, v41, v40, v39, &v57, a8, a9, &v61);
    v30 = v45;
    if ( v45 >= 0 )
    {
      v46 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 10);
      v47 = v61;
      if ( v46 != v61 )
      {
        if ( v61 )
        {
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v61 + 8LL))(v61);
          v46 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 10);
        }
        *((_QWORD *)this + 10) = v47;
        if ( v46 )
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v46 + 16LL))(v46);
      }
      v48 = (IMalloc *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v49 = v48;
      ppMalloc = v48;
      v50 = a7;
      if ( v48 )
      {
        v51 = *((_DWORD *)a7 + 2);
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v48, 0, 0);
        ppMalloc = v49 + 5;
        v49[5].lpVtbl = 0LL;
        v49[6].lpVtbl = 0LL;
        ProcessHeap = GetProcessHeap();
        v53 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
        *v53 = v53;
        v53[1] = v53;
        v53[2] = v53;
        *((_WORD *)v53 + 12) = 257;
        v49[5].lpVtbl = (struct IMallocVtbl *)v53;
        LODWORD(v49[7].lpVtbl) = v51;
      }
      else
      {
        v49 = 0LL;
      }
      *((_QWORD *)this + 7) = v49;
      if ( v49 )
      {
        *((_BYTE *)this + 72) = v44 == AUDCLNT_SHAREMODE_EXCLUSIVE;
        *((_QWORD *)this + 8) = *(_QWORD *)v50;
        *(_QWORD *)v50 = 0LL;
        v30 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x757,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)0x8007000ELL,
          v56);
        v30 = -2147024882;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x752,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v45,
        v56);
    }
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v61);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v30,
      v55);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v62);
  return (unsigned int)v30;
}
