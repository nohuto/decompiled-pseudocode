/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140013870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14000DE14 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CreateAudioMediaType_Unsafe @ 0x14002A2C0 (CreateAudioMediaType_Unsafe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX **v5; // rsi
  __int64 v7; // rdx
  int AudioMediaType_Unsafe; // eax
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  const struct tWAVEFORMATEX *v19; // rax
  int v20; // eax
  unsigned int v21; // edi
  int v22; // [rsp+20h] [rbp-20h]
  __int64 v23[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF

  v5 = a5;
  v7 = 0LL;
  v23[0] = 0LL;
  *a5 = 0LL;
  if ( !a3 )
  {
LABEL_5:
    v12 = 0LL;
    v25 = 0LL;
    if ( a4 )
    {
      v13 = CreateAudioMediaType_Unsafe(a4, (unsigned int)*(unsigned __int16 *)(a4 + 16) + 18, &v25);
      v11 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x134,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (const char *)(unsigned int)v13,
          v22);
LABEL_16:
        ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v25);
        goto LABEL_17;
      }
      v7 = v23[0];
      v12 = v25;
    }
    a5 = 0LL;
    v14 = a1 + 8;
    v15 = *(_QWORD *)(a1 + 8);
    if ( a2 )
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct tWAVEFORMATEX ***))(v15 + 64))(
              v14,
              v7,
              v12,
              &a5);
    else
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct tWAVEFORMATEX ***))(v15 + 56))(
              v14,
              v7,
              v12,
              &a5);
    v11 = v16;
    if ( v16 >= 0 )
    {
      if ( !a5 )
        goto LABEL_15;
      v19 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct tWAVEFORMATEX **))&(*a5)[2].nSamplesPerSec)(a5);
      if ( v19 )
      {
        v20 = CloneWaveFormat(v19, v5);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x148,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)(unsigned int)v20,
            v22);
          ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)&a5);
          ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v25);
          v11 = v21;
          goto LABEL_17;
        }
        goto LABEL_15;
      }
      v11 = -2004287480;
      v17 = 326LL;
    }
    else
    {
      v17 = 321LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)v11,
      v22);
LABEL_15:
    ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)&a5);
    goto LABEL_16;
  }
  AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(a3, (unsigned int)*(unsigned __int16 *)(a3 + 16) + 18, v23);
  v11 = AudioMediaType_Unsafe;
  if ( AudioMediaType_Unsafe >= 0 )
  {
    v7 = v23[0];
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12A,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)(unsigned int)AudioMediaType_Unsafe,
    v22);
LABEL_17:
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(v23);
  return v11;
}
