/*
 * XREFs of ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180538B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804B84AC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::RegisterThumbnail(
        CDropFeedbackItem *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        HWND a4,
        __int64 a5)
{
  __int64 v5; // rax
  char *v6; // r15
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v11; // rbx
  struct IApplicationView *v12; // rdx
  int v13; // ebx
  HRESULT (__stdcall *v14)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v15; // rbx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rsi
  _QWORD *v20; // r15
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  __int64 *v22; // rbx
  __int64 v23; // rdx
  unsigned int Color; // eax
  __int64 v25; // rsi
  unsigned int v26; // r14d
  __int64 (__fastcall *v27)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  __int64 *v28; // rbx
  int v29; // edx
  __int64 v30; // rdx
  __int64 WindowForView; // r14
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v34; // rbx
  __int64 v36; // [rsp+80h] [rbp+8h] BYREF

  v5 = a5;
  v6 = (char *)this + 48;
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)a5;
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)(v5 + 16);
  *((_QWORD *)this + 29) = *(_QWORD *)(v5 + 32);
  *((_QWORD *)this + 24) = a4;
  QueryInterface = a2->lpVtbl->QueryInterface;
  v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)this + 48, &a5);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v11);
  v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_3bb2b41c_a03f_4e91_87af_46a21b23a806,
          v11);
  if ( v13 >= 0 )
  {
    if ( !a3
      || (v14 = a3->lpVtbl->QueryInterface,
          v15 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                              (__int64)this + 56,
                              &a5),
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v15),
          v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v14)(
                  a3,
                  &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                  v15),
          v13 >= 0) )
    {
      v16 = *((_DWORD *)this + 17);
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
            {
              v19 = *(_QWORD *)v6;
              v20 = (_QWORD *)((char *)this + 184);
              v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v19
                                                                                                  + 112LL);
              v22 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                  (__int64)this + 184,
                                  &v36);
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v22);
              a5 = 0x100000001LL;
              v13 = v21(v19, *((_QWORD *)this + 7), 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v22);
              if ( v13 >= 0 )
              {
                (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v20 + 56LL))(*v20, 1LL);
                (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v20 + 32LL))(*v20, v23, 0LL, 0LL);
              }
            }
            else
            {
              return (unsigned int)-2147467259;
            }
          }
          else
          {
            Color = CImmersiveColor::GetColor(0x498u);
            v25 = *(_QWORD *)v6;
            v26 = Color;
            v27 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(**(_QWORD **)v6 + 112LL);
            v28 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                (__int64)this + 184,
                                &v36);
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v28);
            v29 = *((_DWORD *)this + 34) - *((_DWORD *)this + 32);
            LODWORD(a5) = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
            HIDWORD(a5) = v29;
            v13 = v27(v25, *((_QWORD *)this + 7), v26, a5, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v28);
            if ( v13 >= 0 )
              return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 23)
                                                                                              + 32LL))(
                                     *((_QWORD *)this + 23),
                                     v30,
                                     0LL,
                                     0LL);
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        v13 = -2147467259;
        WindowForView = ApplicationViewHelpers::GetWindowForView(
                          *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))this + 5),
                          v12);
        if ( WindowForView )
        {
          v32 = *(_QWORD *)v6;
          v33 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)v6 + 64LL);
          v34 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                              (__int64)this + 184,
                              &a5);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v34);
          v13 = v33(
                  v32,
                  *((_QWORD *)this + 7),
                  WindowForView,
                  0LL,
                  0LL,
                  0LL,
                  &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                  v34);
          if ( v13 >= 0 )
          {
            if ( *((_BYTE *)this + 156) )
              (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 56LL))(*((_QWORD *)this + 23), 1LL);
          }
        }
      }
    }
  }
  return (unsigned int)v13;
}
