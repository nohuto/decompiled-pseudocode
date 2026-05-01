/*
 * XREFs of ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1805323B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180531248 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x1805314E0 (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x18053157C (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0 @ 0x1805315B4 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x1805319C8 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--operator().c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1805358D8 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
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
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&pvAttribute);
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
