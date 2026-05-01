/*
 * XREFs of ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x180796580
 * Callers:
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x180796B6C (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1807972EC (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180797370 (-_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::VerifyLayout(RTL_SRWLOCK *this)
{
  int v2; // ebx
  PVOID Ptr; // r15
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  char *v6; // rbx
  __int64 *v7; // rdi
  unsigned __int64 v8; // r12
  __int64 (__fastcall ****v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v10; // rdi
  unsigned int v11; // r14d
  bool v12; // r12
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-38h]
  __int128 v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+50h] [rbp-20h] BYREF

  AcquireSRWLockShared(this + 2);
  v2 = 0;
  Ptr = this[9].Ptr;
  if ( !Ptr )
    goto LABEL_14;
  v4 = 1LL;
  v5 = 0LL;
  v24 = 0LL;
  do
  {
    v25 = v4;
    if ( v2 < 0 )
      goto LABEL_48;
    v22 = 0LL;
    v6 = (char *)this[8].Ptr;
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v22, &v27);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
    v2 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v6[v5])(
           *(_QWORD *)&v6[v5],
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           v7);
    if ( v2 >= 0 )
    {
      v8 = v4;
      if ( v4 < (unsigned __int64)Ptr )
      {
        do
        {
          if ( v2 < 0 )
            break;
          v23 = 0LL;
          v9 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[8].Ptr;
          v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v26);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v10);
          v2 = (**v9[v8])(v9[v8], &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v10);
          if ( v2 >= 0 && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 96LL))(v22, v23) )
            v2 = -2147319767;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
          ++v8;
        }
        while ( v8 < (unsigned __int64)Ptr );
        v5 = v24;
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
    v5 += 8LL;
    v24 = v5;
    ++v4;
  }
  while ( v25 < (unsigned __int64)Ptr );
  if ( v2 >= 0 )
  {
LABEL_14:
    v11 = (unsigned int)this[3].Ptr;
    LODWORD(v22) = CAppLayout::_GetItemCountOfType(&this[-5], 2LL);
    v12 = IsSurfaceHubWithWin32VtcEnabled() && (unsigned int)CAppLayout::_GetItemCountWithFlags(&this[-5], 4LL);
    v13 = 0LL;
    if ( Ptr )
    {
      do
      {
        if ( v2 < 0 )
          goto LABEL_48;
        v26 = 0LL;
        v14 = *((_QWORD *)this[8].Ptr + v13);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v14 + 56LL))(v14, 0LL, &v26);
        if ( (_QWORD)v26 == __PAIR64__(HIDWORD(this[3].Ptr), v11)
          && HIDWORD(v26) == HIDWORD(this[4].Ptr)
          && SDWORD2(v26) <= SLODWORD(this[4].Ptr) )
        {
          if ( !v12 )
            goto LABEL_27;
        }
        else if ( !v12 )
        {
          goto LABEL_38;
        }
        if ( (_DWORD)v26 == DWORD2(v26) )
          goto LABEL_38;
LABEL_27:
        v15 = *((_QWORD *)this[8].Ptr + v13);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) == 1 )
        {
          v27 = 0LL;
          v16 = *((_QWORD *)this[8].Ptr + v13);
          (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 56LL))(v16, 1LL, &v27);
          if ( (int)v27 < (int)v26
            || SDWORD1(v27) < SDWORD1(v26)
            || SDWORD2(v27) > SDWORD2(v26)
            || SHIDWORD(v27) > SHIDWORD(v26) )
          {
            goto LABEL_38;
          }
        }
        v17 = *((_QWORD *)this[8].Ptr + v13);
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
        if ( (_DWORD)v22 )
        {
          if ( (v18 == 1 || v18 == 4) && (v13 & 1) != 0 )
            goto LABEL_38;
        }
        if ( v18 != 2 )
        {
          if ( v18 == 4 )
          {
            v27 = 0LL;
            v19 = *((_QWORD *)this[8].Ptr + v13);
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v19 + 56LL))(v19, 0LL, &v27);
          }
          goto LABEL_41;
        }
        if ( (v13 & 1) == 0 )
LABEL_38:
          v2 = -2147319767;
LABEL_41:
        v11 = DWORD2(v26);
        ++v13;
      }
      while ( v13 < (unsigned __int64)Ptr );
    }
    if ( v2 >= 0 )
    {
      if ( !Ptr
        || (v26 = 0LL,
            v20 = *((_QWORD *)this[8].Ptr + (_QWORD)Ptr - 1),
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v20 + 56LL))(v20, 0LL, &v26),
            DWORD2(v26) == LODWORD(this[4].Ptr)) )
      {
        if ( (unsigned int)CAppLayout::_GetItemCountWithFlags(&this[-5], 2LL) > 1 )
          v2 = -2147319767;
      }
      else
      {
        v2 = -2147319767;
      }
    }
  }
LABEL_48:
  if ( this != (RTL_SRWLOCK *)-16LL )
    ReleaseSRWLockShared(this + 2);
  return (unsigned int)v2;
}
