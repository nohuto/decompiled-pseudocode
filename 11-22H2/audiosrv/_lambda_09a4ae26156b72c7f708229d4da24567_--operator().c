/*
 * XREFs of _lambda_09a4ae26156b72c7f708229d4da24567_::operator() @ 0x18014A848
 * Callers:
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002CEDC (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x180069874 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall lambda_09a4ae26156b72c7f708229d4da24567_::operator()(__int64 a1, __int64 a2, DWORD a3, WORD a4)
{
  bool v5; // bl
  IAudioMediaType *ppIAudioMediaType; // [rsp+30h] [rbp-50h] BYREF
  IAudioMediaType *v8; // [rsp+38h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  WAVEFORMATEX v10; // [rsp+48h] [rbp-38h] BYREF
  WAVEFORMATEX pAudioFormat; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0;
  v8 = 0LL;
  ppIAudioMediaType = 0LL;
  pAudioFormat.wFormatTag = 3;
  pAudioFormat.nChannels = a4;
  pAudioFormat.nSamplesPerSec = a3;
  pAudioFormat.nAvgBytesPerSec = 4 * a3 * a4;
  pAudioFormat.nBlockAlign = 4 * a4;
  *(_DWORD *)&pAudioFormat.wBitsPerSample = 32;
  *(_DWORD *)&v10.wFormatTag = 131075;
  v10.nSamplesPerSec = a3;
  v10.nAvgBytesPerSec = 8 * a3;
  *(_DWORD *)&v10.nBlockAlign = 2097160;
  v10.cbSize = 0;
  CreateAudioMediaType(&pAudioFormat, 0x12u, &ppIAudioMediaType);
  CreateAudioMediaType(&v10, v10.cbSize + 18, &v8);
  if ( ppIAudioMediaType && v8 )
  {
    v9 = 0LL;
    v5 = (*(unsigned int (__fastcall **)(__int64, IAudioMediaType *, IAudioMediaType *, __int64 *))(*(_QWORD *)a2 + 56LL))(
           a2,
           v8,
           ppIAudioMediaType,
           &v9) == 0;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
  return v5;
}
