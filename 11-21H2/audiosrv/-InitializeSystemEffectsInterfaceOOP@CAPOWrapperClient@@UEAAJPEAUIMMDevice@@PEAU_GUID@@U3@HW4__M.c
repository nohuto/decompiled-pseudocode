/*
 * XREFs of ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180009850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
        CAPOWrapperClient *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  struct IAudioSystemEffects2 **v10; // rsi
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v18; // eax
  int v19; // [rsp+20h] [rbp-58h]
  int v20; // [rsp+20h] [rbp-58h]
  __int128 v21; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  LPVOID pv; // [rsp+88h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( *((_QWORD *)this + 9) )
    {
      v10 = a7;
      lpVtbl = a2->lpVtbl;
      pv = 0LL;
      v12 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))lpVtbl->GetId)(a2, &pv);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x71,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
          (const char *)(unsigned int)v12,
          v19);
      }
      else
      {
        v14 = (__int64 *)*((_QWORD *)this + 9);
        v15 = *v14;
        v21 = (__int128)*a4;
        v20 = a5;
        v16 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, struct _GUID *, __int128 *))(v15 + 32))(v14, pv, a3, &v21);
        v13 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x73,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
            (const char *)(unsigned int)v16,
            v20);
        }
        else if ( v10
               && (v18 = (**(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, struct IAudioSystemEffects2 **))this)(
                           this,
                           &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                           v10),
                   v13 = v18,
                   v18 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x77,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
            (const char *)(unsigned int)v18,
            v20);
        }
        else
        {
          v13 = 0;
        }
      }
      if ( pv )
        CoTaskMemFree(pv);
      return v13;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
        (const char *)0x80070057LL,
        v19);
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL,
      v19);
    return 2147942487LL;
  }
}
