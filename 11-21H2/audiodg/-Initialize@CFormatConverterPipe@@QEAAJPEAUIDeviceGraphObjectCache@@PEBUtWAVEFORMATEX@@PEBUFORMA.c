/*
 * XREFs of ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140062844
 * Callers:
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140062534 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 * Callees:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009D48 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x14000A068 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140025F08 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140059894 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFormatConverterPipe::Initialize(
        CFormatConverterPipe *this,
        struct IDeviceGraphObjectCache *a2,
        const struct tWAVEFORMATEX *a3,
        const WAVEFORMATEX **a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  CPipeInstance *v11; // rsi
  void *v12; // rcx
  LPVOID v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  CPipeInstance *v18; // [rsp+28h] [rbp-28h] BYREF
  LPVOID *p_pv; // [rsp+30h] [rbp-20h]
  struct tWAVEFORMATEX *v20; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CFormatConverterPipe::Reset(this);
  v18 = 0LL;
  v8 = CPipeInstance::CreateFormatConverterPipeInstance(a2, a4, &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 255LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v11 = v18;
  v8 = CPipeInstance::Initialize(v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 256LL;
    goto LABEL_7;
  }
  v8 = CPipeInstance::ConnectAPOs(v11, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 257LL;
    goto LABEL_7;
  }
  pv = 0LL;
  p_pv = &pv;
  v20 = 0LL;
  v21 = 1;
  v9 = CloneWaveFormat(a3, &v20);
  if ( v21 )
  {
    v12 = *p_pv;
    *p_pv = v20;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    *(_QWORD *)this = v11;
    v13 = pv;
    pv = 0LL;
    v14 = (void *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = v13;
    if ( v14 )
      CoTaskMemFree(v14);
    *((_QWORD *)this + 2) = a4[3];
    *((_BYTE *)this + 24) = 0;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
  }
  v15 = pv;
  pv = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
LABEL_18:
  ATL::CAutoPtr<CPipeInstance>::Free(&v18);
  return (unsigned int)v9;
}
