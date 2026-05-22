/*
 * XREFs of ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x1801B67EC
 * Callers:
 *     ?AttachInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801B5DE4 (-AttachInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenInterface@@@Z @ 0x1801B2988 (--0-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenInterface@@@Z.c)
 *     ??0HapticsDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1801B8784 (--0HapticsDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?AttachInterface@HapticsDevice@@QEAAXV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801B8E54 (-AttachInterface@HapticsDevice@@QEAAXV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall PenDevice::UpdateBamoProperties(PenDevice *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbx
  HapticsDevice *v6; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *BamoServerConnection; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  HapticsDevice *v12; // [rsp+68h] [rbp+20h]

  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = (__int64 *)*((_QWORD *)this + 11);
  while ( v2 != v3 )
  {
    wil::com_ptr_t<PenInterface,wil::err_exception_policy>::com_ptr_t<PenInterface,wil::err_exception_policy>(&v10, *v2);
    v4 = v10;
    v5 = *(_QWORD *)(v10 + 136);
    v11 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v11);
    if ( v5 )
    {
      v6 = (HapticsDevice *)*((_QWORD *)this + 13);
      if ( !v6 )
      {
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v12 = (HapticsDevice *)operator new(0x60uLL);
        v6 = HapticsDevice::HapticsDevice(v12, BamoServerConnection);
        v8 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 13) = v6;
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
          v6 = (HapticsDevice *)*((_QWORD *)this + 13);
        }
      }
      v9 = *(_QWORD *)(v4 + 136);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      HapticsDevice::AttachInterface(v6);
      (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, *((_QWORD *)this + 13));
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v10);
    ++v2;
  }
}
