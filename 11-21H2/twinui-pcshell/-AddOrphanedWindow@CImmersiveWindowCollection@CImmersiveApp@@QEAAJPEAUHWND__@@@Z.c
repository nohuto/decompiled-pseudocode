/*
 * XREFs of ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180303734
 * Callers:
 *     ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x180305B90 (-HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18003A8A4 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18009D070 (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddOrphanedWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  __int64 v3; // rax
  int RoomAt; // ebx
  void *v5; // r8
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-79h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-71h] BYREF
  const struct TASKWINDOW_INIT_DATA *v12[8]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v13[2]; // [rsp+78h] [rbp-29h] BYREF
  int v14; // [rsp+88h] [rbp-19h]
  int v15; // [rsp+8Ch] [rbp-15h]
  __int128 v16; // [rsp+90h] [rbp-11h]
  __int128 v17; // [rsp+A0h] [rbp-1h]
  __int128 v18; // [rsp+B0h] [rbp+Fh]
  __int64 v19; // [rsp+C0h] [rbp+1Fh]
  int v20; // [rsp+C8h] [rbp+27h]
  __int64 v21; // [rsp+D0h] [rbp+2Fh]
  int v22; // [rsp+D8h] [rbp+37h]
  int v23; // [rsp+DCh] [rbp+3Bh]

  v3 = *((_QWORD *)this + 20);
  v13[0] = a2;
  v13[1] = 0LL;
  v14 = 3;
  v15 = 0;
  v16 = 0LL;
  v12[5] = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = (v3 + 112) & -(__int64)(v3 != 0);
  v22 = 3;
  v23 = 15;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v12[0] = (const struct TASKWINDOW_INIT_DATA *)v13;
  v10 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  RoomAt = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
             &v11,
             v12);
  if ( RoomAt >= 0 )
    RoomAt = (**v11)(v11, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  if ( RoomAt >= 0 )
  {
    v6 = (_QWORD *)((char *)this + 256);
    v7 = *((_QWORD *)this + 33);
    RoomAt = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
               v6,
               v7,
               v5);
    if ( RoomAt >= 0 )
    {
      v8 = (__int64 *)(*v6 + 8 * v7);
      if ( v8 )
      {
        *v8 = v10;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return (unsigned int)RoomAt;
}
