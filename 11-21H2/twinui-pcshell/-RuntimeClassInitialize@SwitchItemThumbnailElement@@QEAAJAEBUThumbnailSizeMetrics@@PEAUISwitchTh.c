/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x18023710E
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x1802344CA (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISwitchItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchItem@@@Z @ 0x1804B3178 (--4-$ComPtr@UISwitchItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchItem@@@Z.c)
 *     ?RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z @ 0x1804C7D78 (-RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z.c)
 *     ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___ @ 0x1804CEA20 (ObservableProperty_HWND_____--AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x1804CF338 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SwitchItemThumbnailElement::RuntimeClassInitialize(
        SwitchItemThumbnailElement *this,
        const struct ThumbnailSizeMetrics *a2,
        struct ISwitchThumbnailFactory *a3,
        struct ISwitchItem *a4)
{
  const struct ThumbnailSizeMetrics *v5; // rbx
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // edi
  _OWORD *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  char v16; // bp
  __int64 v17; // rdi
  int v18; // eax
  int v19[2]; // [rsp+20h] [rbp-38h] BYREF
  SwitchItemThumbnailElement *v20; // [rsp+28h] [rbp-30h]
  char v21; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v23; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  v7 = CShrinkButtonElement::RuntimeClassInitialize(this, *((double *)a2 + 15), a3);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v11 = (_OWORD *)((char *)this + 296);
    v12 = 2LL;
    do
    {
      *v11 = *(_OWORD *)v5;
      v11[1] = *((_OWORD *)v5 + 1);
      v11[2] = *((_OWORD *)v5 + 2);
      v11[3] = *((_OWORD *)v5 + 3);
      v11[4] = *((_OWORD *)v5 + 4);
      v11[5] = *((_OWORD *)v5 + 5);
      v11[6] = *((_OWORD *)v5 + 6);
      v11 += 8;
      *(v11 - 1) = *((_OWORD *)v5 + 7);
      v5 = (const struct ThumbnailSizeMetrics *)((char *)v5 + 128);
      --v12;
    }
    while ( v12 );
    *v11 = *(_OWORD *)v5;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v5 + 2);
    Microsoft::WRL::ComPtr<ISwitchItem>::operator=((char *)this + 576, a4, v8);
    v13 = WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize((char *)this + 600, this);
    v14 = v13;
    if ( v13 >= 0 )
    {
      *(_QWORD *)v19 = *((_QWORD *)this + 75);
      v15 = *(_QWORD *)v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v19);
      v20 = this;
      v16 = 1;
      v21 = 1;
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 40LL))(*((_QWORD *)this + 72));
      v23 = v15;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
      v18 = ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___(v17, &v23);
      v14 = v18;
      if ( v18 >= 0 )
      {
        v14 = 0;
        v16 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
          (const char *)(unsigned int)v18);
      }
      if ( v16 )
        (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)this + 80LL))(this);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
        (const char *)(unsigned int)v13);
    }
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v7);
    return v9;
  }
}
