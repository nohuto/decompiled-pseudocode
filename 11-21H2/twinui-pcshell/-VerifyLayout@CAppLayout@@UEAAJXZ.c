/*
 * XREFs of ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x180617C50
 * Callers:
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x180618238 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1806189AC (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180618A30 (-_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::VerifyLayout(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  int v3; // ebx
  PVOID Ptr; // r15
  unsigned __int64 v5; // r14
  __int64 v6; // r13
  char *v7; // rbx
  __int64 *v8; // rdi
  unsigned __int64 v9; // r12
  __int64 (__fastcall ****v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v11; // rdi
  unsigned int v12; // r14d
  bool v13; // r12
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h]
  unsigned __int64 v26; // [rsp+38h] [rbp-38h]
  RTL_SRWLOCK *v27; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+48h] [rbp-28h] BYREF
  __int128 v29; // [rsp+58h] [rbp-18h] BYREF

  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  v27 = v2;
  v3 = 0;
  Ptr = this[9].Ptr;
  if ( !Ptr )
    goto LABEL_14;
  v5 = 1LL;
  v6 = 0LL;
  v25 = 0LL;
  do
  {
    v26 = v5;
    if ( v3 < 0 )
      goto LABEL_48;
    v24 = 0LL;
    v7 = (char *)this[8].Ptr;
    v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, &v29);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
    v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v7[v6])(
           *(_QWORD *)&v7[v6],
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           v8);
    if ( v3 >= 0 )
    {
      v9 = v5;
      if ( v5 < (unsigned __int64)Ptr )
      {
        do
        {
          if ( v3 < 0 )
            break;
          v23 = 0LL;
          v10 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[8].Ptr;
          v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v28);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
          v3 = (**v10[v9])(v10[v9], &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v11);
          if ( v3 >= 0 && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 96LL))(v24, v23) )
            v3 = -2147319767;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
          ++v9;
        }
        while ( v9 < (unsigned __int64)Ptr );
        v6 = v25;
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    v6 += 8LL;
    v25 = v6;
    ++v5;
  }
  while ( v26 < (unsigned __int64)Ptr );
  if ( v3 >= 0 )
  {
LABEL_14:
    v12 = (unsigned int)this[3].Ptr;
    LODWORD(v23) = CAppLayout::_GetItemCountOfType(&this[-5], 2LL);
    v13 = IsSurfaceHubWithWin32VtcEnabled() && (unsigned int)CAppLayout::_GetItemCountWithFlags(&this[-5], 4LL);
    v14 = 0LL;
    if ( Ptr )
    {
      do
      {
        if ( v3 < 0 )
          goto LABEL_48;
        v28 = 0LL;
        v15 = *((_QWORD *)this[8].Ptr + v14);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v15 + 56LL))(v15, 0LL, &v28);
        if ( (_QWORD)v28 == __PAIR64__(HIDWORD(this[3].Ptr), v12)
          && HIDWORD(v28) == HIDWORD(this[4].Ptr)
          && SDWORD2(v28) <= SLODWORD(this[4].Ptr) )
        {
          if ( !v13 )
            goto LABEL_27;
        }
        else if ( !v13 )
        {
          goto LABEL_38;
        }
        if ( (_DWORD)v28 == DWORD2(v28) )
          goto LABEL_38;
LABEL_27:
        v16 = *((_QWORD *)this[8].Ptr + v14);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) == 1 )
        {
          v29 = 0LL;
          v17 = *((_QWORD *)this[8].Ptr + v14);
          (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v17 + 56LL))(v17, 1LL, &v29);
          if ( (int)v29 < (int)v28
            || SDWORD1(v29) < SDWORD1(v28)
            || SDWORD2(v29) > SDWORD2(v28)
            || SHIDWORD(v29) > SHIDWORD(v28) )
          {
            goto LABEL_38;
          }
        }
        v18 = *((_QWORD *)this[8].Ptr + v14);
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
        if ( (_DWORD)v23 )
        {
          if ( (v19 == 1 || v19 == 4) && (v14 & 1) != 0 )
            goto LABEL_38;
        }
        if ( v19 != 2 )
        {
          if ( v19 == 4 )
          {
            v29 = 0LL;
            v20 = *((_QWORD *)this[8].Ptr + v14);
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v20 + 56LL))(v20, 0LL, &v29);
          }
          goto LABEL_41;
        }
        if ( (v14 & 1) == 0 )
LABEL_38:
          v3 = -2147319767;
LABEL_41:
        v12 = DWORD2(v28);
        ++v14;
      }
      while ( v14 < (unsigned __int64)Ptr );
    }
    if ( v3 >= 0 )
    {
      if ( !Ptr
        || (v28 = 0LL,
            v21 = *((_QWORD *)this[8].Ptr + (_QWORD)Ptr - 1),
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v21 + 56LL))(v21, 0LL, &v28),
            DWORD2(v28) == LODWORD(this[4].Ptr)) )
      {
        if ( (unsigned int)CAppLayout::_GetItemCountWithFlags(&this[-5], 2LL) > 1 )
          v3 = -2147319767;
      }
      else
      {
        v3 = -2147319767;
      }
    }
  }
LABEL_48:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
  return (unsigned int)v3;
}
