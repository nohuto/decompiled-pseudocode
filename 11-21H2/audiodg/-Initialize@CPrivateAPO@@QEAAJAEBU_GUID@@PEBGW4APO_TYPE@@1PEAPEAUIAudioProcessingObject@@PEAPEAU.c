/*
 * XREFs of ?Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioProcessingObjectRT@@PEAPEAUIAudioProcessingObjectConfiguration@@PEAPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14000D8B0
 * Callers:
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x1400108C0 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 * Callees:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140011C40 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPrivateAPO::Initialize(
        __int64 a1,
        const IID *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  LPVOID *v10; // rdi
  HRESULT Instance; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v20; // eax
  int ppv; // [rsp+20h] [rbp-48h]
  int ppva; // [rsp+20h] [rbp-48h]
  int ppvb; // [rsp+20h] [rbp-48h]
  int ppvc; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-28h] BYREF
  __int64 v26; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v27[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = (LPVOID *)(a1 + 16);
  if ( a4 )
  {
    ppv = a1;
    v20 = CSystemEffectWrapper::Create(a2);
    v12 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
        (const char *)(unsigned int)v20,
        a1);
      return v12;
    }
  }
  else
  {
    Instance = CoCreateInstance(a2, 0LL, 1u, &GUID_00000000_0000_0000_c000_000000000046, v10);
    v12 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
        (const char *)(unsigned int)Instance,
        ppv);
      return v12;
    }
  }
  v27[0] = 0LL;
  v13 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, _QWORD *))*v10)(
          *v10,
          &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
          v27);
  v12 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v13,
      ppv);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)v12,
      ppva);
  }
  else
  {
    v26 = 0LL;
    v14 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))*v10)(
            *v10,
            &GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c,
            &v26);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
        (const char *)(unsigned int)v14,
        ppv);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
        (const char *)v12,
        ppvb);
    }
    else
    {
      v25 = 0LL;
      v15 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))*v10)(
              *v10,
              &GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8,
              &v25);
      v12 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E8,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
          (const char *)(unsigned int)v15,
          ppv);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
          (const char *)v12,
          ppvc);
      }
      else
      {
        *(_BYTE *)(a1 + 8) = 1;
        v16 = v27[0];
        v27[0] = 0LL;
        *a6 = v16;
        v17 = v26;
        v26 = 0LL;
        *a7 = v17;
        v18 = v25;
        v25 = 0LL;
        *a8 = v18;
        (**(void (__fastcall ***)(LPVOID, GUID *, __int64))*v10)(*v10, &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4, a9);
        v12 = 0;
      }
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v27[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
  return v12;
}
