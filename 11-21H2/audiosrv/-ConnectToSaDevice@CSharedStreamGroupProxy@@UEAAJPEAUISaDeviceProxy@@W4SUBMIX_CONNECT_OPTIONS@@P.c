/*
 * XREFs of ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x18000A700
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180040600 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::ConnectToSaDevice(CBaseStreamGroupProxy *a1, __int64 *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  __int64 *v7; // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, __int64); // rdi
  unsigned int v16; // eax
  int v17; // eax
  int v19; // [rsp+20h] [rbp-68h]
  _QWORD v20[8]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 96));
  v7 = (__int64 *)*((_QWORD *)a1 + 11);
  if ( v7 )
  {
    if ( v7 == a2 )
    {
LABEL_10:
      v10 = 0;
      goto LABEL_11;
    }
    v10 = -2005139410;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x887C002ELL,
      v19);
  }
  else
  {
    v8 = *a2;
    v22 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 56))(a2, &v22);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3FE,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v9,
        v19);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 10) + 80LL))(
              *((_QWORD *)a1 + 10),
              v22,
              a3);
      v10 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x401,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v11,
          v19);
      }
      else
      {
        if ( *((__int64 **)a1 + 11) != a2 )
        {
          (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
          v12 = *((_QWORD *)a1 + 11);
          *((_QWORD *)a1 + 11) = a2;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = *(_QWORD *)a1;
        v20[0] = off_180176600;
        v20[7] = v20;
        (*(void (__fastcall **)(CBaseStreamGroupProxy *, _QWORD *))(v13 + 352))(a1, v20);
        (*(void (__fastcall **)(_QWORD, CBaseStreamGroupProxy *))(**((_QWORD **)a1 + 11) + 160LL))(
          *((_QWORD *)a1 + 11),
          a1);
        v14 = *((_QWORD *)a1 + 11);
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v14 + 72LL);
        v16 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a1 + 144LL))(a1);
        v17 = v15(v14, 0LL, v16, 0xFFFFFFFFLL);
        v10 = v17;
        if ( v17 >= 0 )
        {
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          goto LABEL_10;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x409,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v17,
          v19);
        CBaseStreamGroupProxy::DisconnectFromSaDevice(a1);
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
  }
LABEL_11:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v10;
}
