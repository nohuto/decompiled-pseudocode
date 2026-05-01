/*
 * XREFs of ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18051BF2C
 * Callers:
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x18004FD90 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A7A68 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x18050FB48 (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::UpdateVisibileViewsBorder(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbp
  const struct KBViewInfo **Ptr; // rsi
  const struct KBViewInfo **v4; // r15
  const struct KBViewInfo *v5; // rdi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD pvAttribute; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  HWND hwnd; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v16; // [rsp+78h] [rbp+20h]

  v2 = this + 53;
  AcquireSRWLockShared(this + 53);
  v16 = v2;
  Ptr = (const struct KBViewInfo **)this[54].Ptr;
  v4 = (const struct KBViewInfo **)this[55].Ptr;
  while ( 1 )
  {
    if ( Ptr == v4 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    if ( *((_BYTE *)*Ptr + 34) )
      goto LABEL_8;
    v5 = *Ptr;
    if ( *((_DWORD *)*Ptr + 40) != 1 )
      goto LABEL_8;
    v14 = 0LL;
    v6 = *((_QWORD *)v5 + 1);
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    v8 = v7(v6, &v14);
    v9 = v8;
    if ( v8 < 0 )
      break;
    v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 24LL))(v14, &hwnd);
    v9 = v8;
    if ( v8 < 0 )
    {
      v11 = 5728LL;
      goto LABEL_17;
    }
    pvAttribute = TouchKeyboardExperienceManager::GetBorderColor((TouchKeyboardExperienceManager *)this, *Ptr);
    v8 = DwmSetWindowAttribute(hwnd, 0x22u, &pvAttribute, 4u);
    v9 = v8;
    if ( v8 < 0 )
    {
      v11 = 5730LL;
      goto LABEL_17;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
LABEL_8:
    Ptr += 2;
  }
  v11 = 5726LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
LABEL_11:
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v9;
}
