/*
 * XREFs of ?GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x180156CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCompositeSystemEffect::GetFormat(
        CCompositeSystemEffect *this,
        unsigned int a2,
        struct IAudioMediaType **a3)
{
  int v5; // edx
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = *((_DWORD *)this + 20);
  if ( v5 )
  {
    v9 = 0LL;
    v6 = (_QWORD *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                     (__int64)this + 72,
                     v5 - 1);
    (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v6)(*v6, &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097, &v9);
    if ( v9 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioMediaType **))(*(_QWORD *)v9 + 32LL))(v9, a2, a3);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
      return v7;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
  }
  return 0LL;
}
