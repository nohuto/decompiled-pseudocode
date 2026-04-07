/*
 * XREFs of ?InitializeVisualTreeClone@CSystemBackdropVisual@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800E16E4
 * Callers:
 *     ?CloneVisualTree@CSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800E0F40 (-CloneVisualTree@CSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A1F0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x1800E1A40 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSystemBackdropVisual::InitializeVisualTreeClone(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v5 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)a2, a3);
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 304);
    v5 = CSystemBackdropVisual::SetState(a2, *(unsigned int *)(a1 + 280), v6);
    if ( v5 < 0 )
    {
      v7 = 95LL;
      goto LABEL_3;
    }
    v13 = 0LL;
    v12 = 0LL;
    v8 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 264),
           &v13);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a2 + 264),
             (__int64 *)&v12);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 280LL))(v13, &v14);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v12 + 288))(v12, v14);
          v5 = v8;
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 160LL))(v13, &v17);
            v5 = v8;
            if ( v8 >= 0 )
            {
              v10 = *v12;
              v15 = v17;
              v16 = v18;
              v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 168))(v12, &v15);
              v5 = v8;
              if ( v8 >= 0 )
              {
                v5 = 0;
                goto LABEL_20;
              }
              v9 = 111LL;
            }
            else
            {
              v9 = 110LL;
            }
          }
          else
          {
            v9 = 107LL;
          }
        }
        else
        {
          v9 = 106LL;
        }
      }
      else
      {
        v9 = 103LL;
      }
    }
    else
    {
      v9 = 102LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v8);
LABEL_20:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    return (unsigned int)v5;
  }
  v7 = 92LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
