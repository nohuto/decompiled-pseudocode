/*
 * XREFs of ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x18018A63C
 * Callers:
 *     ?AttachInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180189C64 (-AttachInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180091710 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 *     ??0?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenInterface@@@Z @ 0x180185AB8 (--0-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenInterface@@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAAEAV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@AEBV23@@Z @ 0x18018BFF4 (--$_Emplace_back_with_unused_capacity@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wi.c)
 *     ??$emplace@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C298 (--$emplace@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$com_p.c)
 *     ??0HapticsDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018C5FC (--0HapticsDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?UpdateBamoProperties@HapticsDevice@@QEAAXXZ @ 0x18018F1BC (-UpdateBamoProperties@HapticsDevice@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall PenDevice::UpdateBamoProperties(PenDevice *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  HapticsDevice *v6; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *BamoServerConnection; // rbx
  __int64 v8; // rcx
  _BYTE *v9; // rcx
  bool v10; // zf
  __int64 *v11; // rcx
  __int64 v12; // rdx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE *v14; // [rsp+70h] [rbp+38h] BYREF
  __int64 v15; // [rsp+78h] [rbp+40h] BYREF
  __int64 *v16; // [rsp+80h] [rbp+48h] BYREF
  HapticsDevice *v17; // [rsp+88h] [rbp+50h]

  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = (__int64 *)*((_QWORD *)this + 11);
  while ( v2 != v3 )
  {
    wil::com_ptr_t<PenInterface,wil::err_exception_policy>::com_ptr_t<PenInterface,wil::err_exception_policy>(&v15, *v2);
    v4 = v15;
    v5 = *(_QWORD *)(v15 + 136);
    v16 = (__int64 *)v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v16);
    if ( v5 )
    {
      v6 = (HapticsDevice *)*((_QWORD *)this + 13);
      if ( !v6 )
      {
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v17 = (HapticsDevice *)operator new(0x60uLL);
        v6 = HapticsDevice::HapticsDevice(v17, BamoServerConnection);
        v8 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 13) = v6;
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
          v6 = (HapticsDevice *)*((_QWORD *)this + 13);
        }
      }
      v9 = *(_BYTE **)(v4 + 136);
      v14 = v9;
      if ( v9 )
      {
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 8LL))(v9);
        v9 = v14;
      }
      v16 = (__int64 *)&v14;
      v10 = v9[264] == 0;
      v11 = (__int64 *)((char *)v6 + 72);
      if ( v10 )
      {
        std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::emplace<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
          v11,
          v13,
          *((_QWORD *)v6 + 9),
          &v14);
      }
      else
      {
        v12 = *((_QWORD *)v6 + 10);
        if ( v12 == *((_QWORD *)v6 + 11) )
          std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
            v11,
            v12,
            (__int64 *)&v14);
        else
          std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::_Emplace_back_with_unused_capacity<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
            v11,
            &v14);
      }
      HapticsDevice::UpdateBamoProperties(v6);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v14);
      (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, *((_QWORD *)this + 13));
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v15);
    ++v2;
  }
}
