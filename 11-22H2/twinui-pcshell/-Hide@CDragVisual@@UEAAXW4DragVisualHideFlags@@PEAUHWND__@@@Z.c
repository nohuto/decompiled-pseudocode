/*
 * XREFs of ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1805ED110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180176D28 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x1805EBF94 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x1805EC22C (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x1805EC2C8 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0 @ 0x1805EC300 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x1805EC714 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--operator().c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1805F0688 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 */

void __fastcall CDragVisual::Hide(__int64 a1, char a2, __int64 a3)
{
  CDragVisual *v5; // rbx
  __int64 v6; // rcx
  HWND v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pvAttribute; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF

  v18 = a3;
  if ( *(_BYTE *)(a1 + 255) )
    return;
  v5 = (CDragVisual *)(a1 - 24);
  pvAttribute.Ptr = a1 - 24;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&pvAttribute);
  lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0(
    v16,
    (__int64 *)&pvAttribute,
    &v18);
  if ( !*(_QWORD *)(a1 + 88) && (a2 & 2) != 0 )
    a2 = a2 & 0xF9 | 4;
  if ( (a2 & 1) != 0 )
  {
    v7 = *(HWND *)(a1 + 128);
    LODWORD(pvAttribute.Ptr) = 1;
    DwmSetWindowAttribute(v7, 0xDu, &pvAttribute, 4u);
    *(_DWORD *)(a1 + 124) = -1;
    *(_BYTE *)(a1 + 254) = 0;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 80));
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 88));
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 48));
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 80);
      *(_BYTE *)(a1 + 255) = 1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 168LL))(v8);
      v9 = lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(
             (__int64 *)&pvAttribute,
             v16);
      v12 = DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
              *(_QWORD *)(a1 + 88),
              v10,
              v11,
              v9);
    }
    else
    {
      if ( (a2 & 4) == 0 )
      {
        if ( IsWindowVisible(*(HWND *)(a1 + 128)) )
        {
          CDragVisual::_TrackMouseLeave(v5, 0);
          ShowWindow(*(HWND *)(a1 + 128), 0);
          v15 = *(_QWORD *)(a1 + 72);
          if ( v15 )
          {
            LOBYTE(v13) = 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 56LL))(v15, v13);
          }
          if ( *(_BYTE *)(a1 + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            McGenEventWrite_EventWriteTransfer(
              MICROSOFT_TWINUI_PUBLISHER_Context,
              &DragVisual_Hide_Info,
              v14,
              1u,
              &pvAttribute);
        }
        goto LABEL_19;
      }
      v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____(v6, (__int64)v16);
    }
    if ( v12 < 0 )
      lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator()(v16);
  }
LABEL_19:
  if ( v16[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
  if ( v5 )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v5 + 16LL))(v5);
}
