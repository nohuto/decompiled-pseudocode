/*
 * XREFs of ?GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z @ 0x180156DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCompositeSystemEffect::GetFormatCount(CCompositeSystemEffect *this, unsigned int *a2)
{
  int v3; // edx
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *((_DWORD *)this + 20);
  if ( v3 )
  {
    v7 = 0LL;
    v4 = (_QWORD *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                     (__int64)this + 72,
                     v3 - 1);
    (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4)(*v4, &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097, &v7);
    if ( v7 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, a2);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
      return v5;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
  }
  return 0LL;
}
