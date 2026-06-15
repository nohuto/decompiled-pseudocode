/*
 * XREFs of ?GetHeadRotation@CHMDManager@@QEAAJPEAM000@Z @ 0x18010EA54
 * Callers:
 *     s_GetHeadRotation @ 0x18010F070 (s_GetHeadRotation.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CHMDManager::GetHeadRotation(__int64 **this, float *a2, float *a3, float *a4, float *a5)
{
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v24 = 0LL;
  GetSystemTimePreciseAsFileTime(&v24);
  if ( (v24 & 0x8000000000000000uLL) != 0LL )
  {
    v12 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)0x8000000BLL);
    return v12;
  }
  v21 = 0LL;
  v9 = *this;
  v10 = **this;
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64 *))(v10 + 48))(
          v9,
          (unsigned int)v24 | (HIDWORD(v24) << 32),
          &v21);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v23 = 0LL;
    v13 = this[2];
    v14 = *v13;
    v23 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v14 + 88))(v13, v21, &v23);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_13:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
      goto LABEL_14;
    }
    v22 = 0LL;
    v16 = this[1];
    v17 = *v16;
    v22 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v17 + 88))(v16, v21, v23, &v22);
    v12 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v22 + 56LL))(v22, v25);
      v12 = v18;
      if ( v18 >= 0 )
      {
        *a2 = *(float *)v25;
        *a3 = *(float *)&v25[1];
        *a4 = *(float *)&v25[2];
        *a5 = *(float *)&v25[3];
        v12 = 0;
        goto LABEL_12;
      }
      v19 = 73LL;
    }
    else
    {
      v19 = 70LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)(unsigned int)v18);
LABEL_12:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
  return v12;
}
