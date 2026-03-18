/*
 * XREFs of ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x18007F718
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180005404 (--$_Emplace_reallocate@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDevice@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDevice@@@2@@Z @ 0x1800059A8 (-erase@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDevice@@$0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800DD2C8 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CD3DDevice::ProcessPendingUnpin(CD3DDevice *this, char a2)
{
  unsigned int v2; // esi
  _QWORD *v3; // r12
  __int64 v4; // rbx
  __int64 *v5; // r15
  __int64 *v7; // rdi
  __int64 v9; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0;
  v3 = (_QWORD *)((char *)this + 1200);
  v4 = *((_QWORD *)this + 150);
  v5 = 0LL;
  v14 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  while ( v4 != *((_QWORD *)this + 151) )
  {
    if ( !*(_DWORD *)(v4 + 28) || a2 )
    {
      if ( v7 == v5 )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
          (__int64 *)&v14,
          (__int64)v7,
          (__int64 *)v4);
        v5 = v15;
        v7 = (__int64 *)*((_QWORD *)&v14 + 1);
      }
      else
      {
        v13 = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
        *v7++ = v13;
        *((_QWORD *)&v14 + 1) = v7;
      }
      v16 = v4;
      v4 = *detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
              v3,
              &v17,
              &v16);
    }
    else
    {
      v4 += 32LL;
    }
  }
  v9 = v14;
  if ( (__int64 *)v14 != v7 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
      McTemplateU0q_EventWriteTransfer(this, &Pinning_D3DUnpinStart, (__int64)((__int64)v7 - v14) >> 3);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 68) + 32LL))(
            *((_QWORD *)this + 68),
            v9,
            (unsigned int)(((__int64)v7 - v9) >> 3));
    v2 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x3D8u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
      McTemplateU0q_EventWriteTransfer(v12, &Pinning_D3DUnpinStop, v2);
    if ( v2 )
      v2 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 0);
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(&v14);
  return v2;
}
