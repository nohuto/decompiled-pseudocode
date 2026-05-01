/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800EBB6C
 * Callers:
 *     ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x1800EAC60 (-GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800EACF4 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800EB700 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        const unsigned __int16 *a2,
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  __int64 i; // r12
  __int64 v10; // rcx
  __int64 v11; // rbx
  bool v12; // di
  int v14; // [rsp+60h] [rbp+8h] BYREF
  const unsigned __int16 *v15; // [rsp+68h] [rbp+10h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v15 = a2;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *((_QWORD *)this + 6);
  v8 = 0LL;
  if ( v7 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v10 = 0LL;
      v16 = 0LL;
      v11 = **(_QWORD **)(i + *((_QWORD *)this + 5));
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(**(_QWORD **)(i + *((_QWORD *)this + 5)));
        v10 = v16;
      }
      if ( v10 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v12 = (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
              v11,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              &v16) >= 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v12
        && (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v16 + 88LL))(v16, v15, &v14) >= 0
        && v14 )
      {
        break;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      if ( ++v8 >= v7 )
        return *a3 == 0LL ? 0x80070490 : 0;
    }
    *a3 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v8);
    if ( a4 )
      *a4 = v8;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  }
  return *a3 == 0LL ? 0x80070490 : 0;
}
