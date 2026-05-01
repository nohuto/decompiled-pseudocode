/*
 * XREFs of ?Show@CDropFeedback@@UEAAJXZ @ 0x18052FCF0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::Show(HWND *this)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  unsigned int i; // r14d
  HWND v5; // rdi
  int (__fastcall *v6)(HWND, _QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *); // rbx
  HWND v7; // rcx
  __int64 v8; // r8
  int pvAttribute; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+38h] [rbp-18h] BYREF

  pvAttribute = 1;
  v2 = 0;
  DwmSetWindowAttribute(this[5], 0xDu, &pvAttribute, 4u);
  ShowWindow(this[5], 4);
  if ( ((_BYTE)this[12] & 1) != 0 )
  {
    if ( SetForegroundWindow(this[5]) )
    {
      if ( ((_BYTE)this[12] & 2) != 0 && GetKeyState(91) >= 0 && GetKeyState(92) >= 0 )
        PostMessageW(this[5], 0x101u, 0x5BuLL, 0LL);
    }
    else
    {
      v2 = -2147019873;
    }
  }
  (*(void (__fastcall **)(HWND, GUID *))(*(_QWORD *)this[15] + 24LL))(this[15], &GUID_NULL);
  (*(void (__fastcall **)(HWND, unsigned int *))(*(_QWORD *)this[13] + 24LL))(this[13], &v11);
  for ( i = 0; i < v11; ++i )
  {
    v5 = this[13];
    v12.Ptr = 0LL;
    v6 = *(int (__fastcall **)(HWND, _QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v5 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v12);
    if ( v6(v5, i, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v12) >= 0 )
      (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v12.Ptr + 72LL))(v12.Ptr);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v12);
  }
  LOBYTE(v3) = 1;
  (*(void (__fastcall **)(HWND, __int64))(*(_QWORD *)this[15] + 32LL))(this[15], v3);
  v7 = this[5];
  pvAttribute = 0;
  DwmSetWindowAttribute(v7, 0xDu, &pvAttribute, 4u);
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DropFeedback_Show_Info, v8, 1u, &v12);
  return v2;
}
