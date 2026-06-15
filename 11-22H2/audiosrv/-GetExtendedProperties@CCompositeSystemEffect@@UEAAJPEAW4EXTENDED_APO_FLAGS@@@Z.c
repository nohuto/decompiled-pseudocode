/*
 * XREFs of ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800655E0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::GetExtendedProperties(
        CCompositeSystemEffect *this,
        enum EXTENDED_APO_FLAGS *a2)
{
  int (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 0;
  v8 = 0LL;
  v3 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                           (__int64)this + 80,
                                                           0);
  v4 = *v3;
  v5 = ***v3;
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease(&v8);
  if ( v5(v4, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, &v8) < 0
    || (v6 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v8 + 24LL))(v8, a2), v6 >= 0) )
  {
    v6 = 0;
  }
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease(&v8);
  return (unsigned int)v6;
}
