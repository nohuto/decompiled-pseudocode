/*
 * XREFs of ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x180103E30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CClassicWindowManager::GetApplicationViewWindow(CClassicWindowManager *this, HWND a2)
{
  HWND Window; // rsi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rcx
  __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  Window = a2;
  v4 = 0LL;
  while ( Window )
  {
    if ( v4 )
      break;
    v15 = 0LL;
    v14[1] = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    if ( *((_QWORD *)this + 16) )
    {
      while ( 1 )
      {
        v14[0] = 0LL;
        v7 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v6);
        v17 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v16 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
               v7,
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v16) >= 0
          && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v16 + 192LL))(v16, Window) )
        {
          v8 = 0;
        }
        else
        {
          v8 = -1;
        }
        v9 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
        if ( !v8 )
          break;
        if ( (unsigned __int64)++v6 >= *((_QWORD *)this + 16) )
          goto LABEL_13;
      }
      v5 = v6;
      v10 = 0;
    }
    else
    {
LABEL_13:
      v10 = -2147319765;
    }
    if ( v10 >= 0 )
    {
      v11 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8 * v5);
      if ( (**v11)(v11, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v15) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 128LL))(v15) )
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
      }
    }
    Window = GetWindow(Window, 4u);
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return v4;
}
