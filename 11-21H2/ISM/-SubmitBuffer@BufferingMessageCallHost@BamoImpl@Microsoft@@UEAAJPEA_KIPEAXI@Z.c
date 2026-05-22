/*
 * XREFs of ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x18008C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@?$vector@PEAURemoteCallBuffer@BamoImpl@Microsoft@@V?$allocator@PEAURemoteCallBuffer@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAURemoteCallBuffer@BamoImpl@Microsoft@@QEAPEAU234@AEBQEAU234@@Z @ 0x1800894D8 (--$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@-$vector@PEAURemoteCallBuffe.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x18008C5A4 (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     ?_Tidy@?$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V?$allocator@UItemIdParameterIndex@BamoImpl@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18008CDF8 (-_Tidy@-$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V-$allocator@UItemIdParameterIndex@Bam.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18008CE4C (-_Tidy@-$vector@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        __int64 a3,
        void *a4,
        unsigned int a5)
{
  unsigned __int64 v7; // r13
  const char *v8; // r9
  struct Microsoft::BamoImpl::BufferStream *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rdi
  _QWORD *v13; // r14
  _QWORD *v14; // r12
  _QWORD *v15; // rdi
  _BYTE *v16; // rdx
  const char *v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v20; // [rsp+50h] [rbp+8h] BYREF

  v7 = a2[1];
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    *a2,
    &v20);
  v9 = v20;
  if ( !v20 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      238LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v8);
  v10 = operator new(0x50uLL);
  v11 = v10;
  v12 = v10 + 3;
  v10[3] = 0LL;
  v10[4] = 0LL;
  v10[5] = 0LL;
  v13 = v10 + 7;
  v10[7] = 0LL;
  v10[8] = 0LL;
  v10[9] = 0LL;
  *v10 = a4;
  *((_DWORD *)v10 + 2) = a5;
  v10[2] = v7;
  *((_BYTE *)v10 + 48) = 0;
  v20 = (struct Microsoft::BamoImpl::BufferStream *)v10;
  v14 = (_QWORD *)((char *)this + 32);
  if ( v10 + 3 != (_QWORD *)((char *)this + 32) )
  {
    std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy(v10 + 3);
    *v12 = *v14;
    v12[1] = *((_QWORD *)this + 5);
    v12[2] = *((_QWORD *)this + 6);
    *v14 = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v15 = (_QWORD *)((char *)this + 64);
  if ( v13 != (_QWORD *)((char *)this + 64) )
  {
    std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy(v13);
    *v13 = *v15;
    v13[1] = *((_QWORD *)this + 9);
    v13[2] = *((_QWORD *)this + 10);
    *v15 = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_BYTE *)v11 + 48) = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = 0;
  v16 = (_BYTE *)*((_QWORD *)v9 + 1);
  if ( v16 == *((_BYTE **)v9 + 2) )
  {
    try
    {
      std::vector<Microsoft::BamoImpl::RemoteCallBuffer *>::_Emplace_reallocate<Microsoft::BamoImpl::RemoteCallBuffer * const &>(
        (const void **)v9,
        v16,
        &v20);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x102,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
        v17);
    }
  }
  else
  {
    *(_QWORD *)v16 = v11;
    *((_QWORD *)v9 + 1) += 8LL;
  }
  return 0LL;
}
