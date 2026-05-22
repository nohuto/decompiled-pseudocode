/*
 * XREFs of ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x180107C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x1801076E4 (-CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA-AUInputInteropMessageStorage@1@PEBUPoi.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x180109D20 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::DeliverInputToTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int a5)
{
  __int64 v8; // rdx
  __int64 *v9; // r9
  __int64 v10; // r9
  __int64 v11; // r8
  int (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx
  int v13; // ebx
  _DWORD *v14; // rcx
  unsigned int v15; // r8d
  unsigned int v17; // ebx
  void *v18[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+58h] [rbp+28h] BYREF

  if ( (*(_DWORD *)a2 & 0x1000) != 0 )
  {
    if ( *(_BYTE *)(a2 + 126) )
      ((void (__fastcall *)(__int64, _QWORD))Win32kInterop::s_pfnMTCallback)(a2 + 128, 0LL);
    return 0LL;
  }
  v8 = 2LL;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v18[0] = *(void **)(a2 + 304);
    if ( a4 )
    {
      v19 = *(_QWORD *)(a2 + 56);
      v9 = &v19;
      v8 = 1LL;
    }
    else
    {
      v9 = 0LL;
    }
    NtMITPostMouseInputMessage(v18, v8, 0LL, v9);
    return 0LL;
  }
  v19 = 0LL;
  if ( !a4 )
  {
    v10 = a5;
    v11 = 0LL;
    goto LABEL_19;
  }
  v12 = **a4;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
  if ( v12(a4, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v19) >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 64LL))(v19);
    if ( v13 )
    {
      Win32kInterop::CreateInputInteropMessageFromInputInfo((Win32kInterop::InputInteropMessageStorage *)v18, a2);
      v14 = v18[0];
      v15 = 0;
      if ( *(_DWORD *)(a2 + 316) )
      {
        do
          v14[60 * v15++ + 90] = v13;
        while ( v15 < *(_DWORD *)(a2 + 316) );
        v14 = v18[0];
      }
      ((void (__fastcall *)(_DWORD *, _QWORD))Win32kInterop::s_pfnMTCallback)(v14, 0LL);
      if ( v18[0] )
        operator delete[](v18[0]);
      goto LABEL_20;
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
    v10 = 0LL;
LABEL_19:
    Win32kInterop::RoutePointerFrame(a2, a3, v11, v10);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
    return 0LL;
  }
  Win32kInterop::RoutePointerFrame(a2, a3, 0LL, 1LL);
  v17 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a4)[3])(a4, a2);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
  return v17;
}
