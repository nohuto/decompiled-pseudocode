/*
 * XREFs of ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x18001E1C8
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x18001B1D8 (-RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z.c)
 *     ??0CApplication@@QEAA@XZ @ 0x18001E68C (--0CApplication@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplication,CApplication,unsigned short const * &,unsigned __int64 &,unsigned long &>(
        volatile signed __int32 **a1,
        const unsigned __int16 **a2,
        __int64 *a3,
        int *a4)
{
  CApplication *v8; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // edi
  signed __int32 v12; // eax

  *a1 = 0LL;
  v8 = (CApplication *)operator new(0x2D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
    return 2147942414LL;
  v10 = (volatile signed __int32 *)CApplication::CApplication(v8);
  v11 = CApplication::RuntimeClassInitialize((CApplication *)v10, *a2, *a3, *a4);
  if ( v11 >= 0 )
  {
    if ( v10 )
    {
      do
        v12 = *((_DWORD *)v10 + 3);
      while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange(v10 + 3, v12 + 1, v12) );
    }
    *a1 = v10;
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v10);
    return 0;
  }
  else if ( v10 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v10);
  }
  return (unsigned int)v11;
}
