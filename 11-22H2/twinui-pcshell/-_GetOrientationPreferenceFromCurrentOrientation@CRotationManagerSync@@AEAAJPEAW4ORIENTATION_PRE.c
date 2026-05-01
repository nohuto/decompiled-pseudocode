/*
 * XREFs of ?_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1803AA224
 * Callers:
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1803A9E70 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRotationManagerSync::_GetOrientationPreferenceFromCurrentOrientation(
        CRotationManagerSync *this,
        enum ORIENTATION_PREFERENCE *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, GUID *, GUID *, __int64 *); // rbx
  int v5; // ebx
  enum ORIENTATION_PREFERENCE v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  *a2 = ORIENTATION_PREFERENCE_NONE;
  v8 = 0LL;
  v3 = *((_QWORD *)this + 17);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  v5 = v4(v3, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v8);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, enum ORIENTATION_PREFERENCE *))(*(_QWORD *)v8 + 80LL))(v8, &v7);
    if ( v5 >= 0 )
      *a2 = v7;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  return (unsigned int)v5;
}
