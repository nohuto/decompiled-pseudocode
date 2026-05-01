/*
 * XREFs of ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180052310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F0138 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionerPriority::Clone(RTL_SRWLOCK *this, struct IShellPositionerPriority **a2)
{
  RTL_SRWLOCK *v4; // rdi
  BOOL v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 i; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IShellPositionerPriority *v13; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+48h] [rbp+10h]

  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  v14 = v4;
  v5 = LOBYTE(this[4].Ptr) == 0;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  v7 = PositionerPriority_CreateInstance(v5, v6, &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v7,
      v11);
  }
  else
  {
    for ( i = 0LL; i < 0xA; ++i )
    {
      if ( *((_BYTE *)&this[4].Ptr + i)
        && !(*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v13 + 32LL))(
              v13,
              (unsigned int)i) )
      {
        (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v13 + 40LL))(
          v13,
          (unsigned int)i);
      }
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    *a2 = v13;
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v8;
}
