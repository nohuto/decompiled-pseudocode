/*
 * XREFs of ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x180041F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18004201C (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::GetExtendedProperties(
        CCompositeSystemEffect *this,
        enum EXTENDED_APO_FLAGS *a2)
{
  unsigned int v3; // esi
  int (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)a2 = 0;
  v9 = 0LL;
  v4 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                           (char *)this + 56,
                                                           0LL);
  v5 = *v4;
  v6 = ***v4;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v9);
  if ( v6(v5, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, &v9) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v9 + 24LL))(v9, a2);
    if ( v8 < 0 )
      v3 = v8;
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v9);
  return v3;
}
