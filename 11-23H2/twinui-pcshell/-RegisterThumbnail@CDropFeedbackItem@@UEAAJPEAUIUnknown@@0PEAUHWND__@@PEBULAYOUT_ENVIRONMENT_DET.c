/*
 * XREFs of ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805F38B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180572FEC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::RegisterThumbnail(
        CDropFeedbackItem *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        HWND a4,
        __int64 a5)
{
  __int64 v5; // rax
  char *v6; // r12
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v11; // rbx
  struct IApplicationView *v12; // rdx
  int v13; // ebx
  _QWORD *v14; // r14
  HRESULT (__stdcall *v15)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v16; // rbx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rsi
  _QWORD *v21; // r15
  __int64 (__fastcall *v22)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  __int64 *v23; // rbx
  __int64 v24; // rdx
  unsigned int Color; // eax
  __int64 v26; // rsi
  unsigned int v27; // r15d
  __int64 (__fastcall *v28)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  __int64 *v29; // rbx
  int v30; // edx
  __int64 v31; // rdx
  __int64 WindowForView; // r15
  __int64 v33; // rsi
  __int64 (__fastcall *v34)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v35; // rbx
  __int64 v37; // [rsp+80h] [rbp+8h] BYREF

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
    v14 = (_QWORD *)((char *)this + 56);
    if ( !a3
      || (v15 = a3->lpVtbl->QueryInterface,
          v16 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                              (__int64)this + 56,
                              &a5),
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v16),
          v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v15)(
                  a3,
                  &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                  v16),
          v13 >= 0) )
    {
      v17 = *((_DWORD *)this + 17);
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
            {
              v20 = *(_QWORD *)v6;
              v21 = (_QWORD *)((char *)this + 184);
              v22 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(**(_QWORD **)v6
                                                                                                  + 112LL);
              v23 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                  (__int64)this + 184,
                                  &v37);
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v23);
              a5 = 0x100000001LL;
              v13 = v22(v20, *v14, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v23);
              if ( v13 >= 0 )
              {
                (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v21 + 56LL))(*v21, 1LL);
                (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v21 + 32LL))(*v21, v24, 0LL, 0LL);
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
            v26 = *(_QWORD *)v6;
            v27 = Color;
            v28 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(**(_QWORD **)v6 + 112LL);
            v29 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                (__int64)this + 184,
                                &v37);
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v29);
            v30 = *((_DWORD *)this + 34) - *((_DWORD *)this + 32);
            LODWORD(a5) = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
            HIDWORD(a5) = v30;
            v13 = v28(v26, *v14, v27, a5, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v29);
            if ( v13 >= 0 )
              return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 23)
                                                                                              + 32LL))(
                                     *((_QWORD *)this + 23),
                                     v31,
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
          v33 = *(_QWORD *)v6;
          v34 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)v6 + 64LL);
          v35 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                              (__int64)this + 184,
                              &a5);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v35);
          v13 = v34(v33, *v14, WindowForView, 0LL, 0LL, 0LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v35);
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
