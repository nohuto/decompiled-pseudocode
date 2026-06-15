/*
 * XREFs of ??$MakeAndInitialize@VCProcess@@V1@PEAXAEAKAEAKPEAGPEAGAEA_KPEAG_NPEAGAEA_NAEA_NAEAHAEAHAEAHAEAHAEAHAEAHAEA_NAEAHAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCProcess@@$$QEAPEAXAEAK2$$QEAPEAG3AEA_K3$$QEA_N3AEA_N6AEAH77777677@Z @ 0x18001E2A0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18001B350 (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ??0CProcess@@QEAA@XZ @ 0x18001E904 (--0CProcess@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CProcess,CProcess,void *,unsigned long &,unsigned long &,unsigned short *,unsigned short *,unsigned __int64 &,unsigned short *,bool,unsigned short *,bool &,bool &,int &,int &,int &,int &,int &,int &,bool &,int &,int &>(
        volatile signed __int32 **a1,
        void **a2,
        int *a3,
        int *a4,
        const unsigned __int16 **a5,
        const unsigned __int16 **a6,
        unsigned __int64 *a7,
        const unsigned __int16 **a8,
        unsigned __int8 *a9,
        const unsigned __int16 **a10,
        unsigned __int8 *a11,
        unsigned __int8 *a12,
        int *a13,
        int *a14,
        int *a15,
        int *a16,
        int *a17,
        int *a18,
        bool *a19,
        int *a20,
        int *a21)
{
  CProcess *v21; // rax
  int v23; // edi
  signed __int32 v24; // eax
  volatile signed __int32 *v25; // [rsp+D0h] [rbp-58h]

  *a1 = 0LL;
  v21 = (CProcess *)operator new(0x318uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v21 )
    return 2147942414LL;
  v25 = (volatile signed __int32 *)CProcess::CProcess(v21);
  v23 = CProcess::RuntimeClassInitialize(
          (CProcess *)v25,
          *a2,
          *a3,
          *a4,
          *a5,
          *a6,
          *a7,
          *a8,
          *a9,
          *a10,
          *a11,
          *a12,
          *a13,
          *a14,
          *a15,
          *a16,
          *a17,
          *a18,
          *a19,
          *a20,
          *a21);
  if ( v23 >= 0 )
  {
    if ( v25 )
    {
      do
        v24 = *((_DWORD *)v25 + 5);
      while ( v24 != 0x7FFFFFFF && v24 != _InterlockedCompareExchange(v25 + 5, v24 + 1, v24) );
    }
    *a1 = v25;
    if ( v25 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v25);
    return 0;
  }
  else if ( v25 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v25);
  }
  return (unsigned int)v23;
}
