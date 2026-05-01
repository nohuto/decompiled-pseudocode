/*
 * XREFs of ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1803CC4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CB2CC (--$As@UIApplicationViewBase@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

__int64 __fastcall CApplicationViewManager::TryGetLastActiveVisibleView(
        RTL_SRWLOCK *this,
        struct IApplicationView **a2)
{
  struct IApplicationView *v4; // r14
  unsigned __int64 v5; // r15
  RTL_SRWLOCK *v6; // rbx
  __int64 *Ptr; // rsi
  __int64 *v8; // rdi
  int v9; // eax
  HWND v10; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  int v14; // [rsp+60h] [rbp+40h] BYREF
  struct IApplicationView *v15; // [rsp+68h] [rbp+48h] BYREF
  __int64 v16; // [rsp+70h] [rbp+50h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+58h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v6 = this + 66;
  AcquireSRWLockShared(this + 66);
  Ptr = (__int64 *)this[67].Ptr;
  v8 = &Ptr[(__int64)this[68].Ptr];
  if ( Ptr != v8 )
  {
    do
    {
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)*Ptr + 184LL))(*Ptr, &v17) >= 0
        && v17 > v5
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)*Ptr + 88LL))(*Ptr, &v14) >= 0
        && v14 )
      {
        v16 = 0LL;
        v9 = Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(
               (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))Ptr,
               &v16);
        if ( v9 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x173,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v9,
            savedregs);
        v10 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
        if ( !IsIconic(v10) )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v15, Ptr);
          v5 = v17;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      }
      ++Ptr;
    }
    while ( Ptr != v8 );
    v4 = v15;
  }
  v15 = 0LL;
  *a2 = v4;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v15);
  return 0LL;
}
