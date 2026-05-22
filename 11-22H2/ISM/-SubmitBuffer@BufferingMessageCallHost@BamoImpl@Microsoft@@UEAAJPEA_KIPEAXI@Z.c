/*
 * XREFs of ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x1800B5F40
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@?$vector@PEAURemoteCallBuffer@BamoImpl@Microsoft@@V?$allocator@PEAURemoteCallBuffer@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAURemoteCallBuffer@BamoImpl@Microsoft@@QEAPEAU234@AEBQEAU234@@Z @ 0x1800B2D68 (--$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@-$vector@PEAURemoteCallBuffe.c)
 *     ??4?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B38C4 (--4-$vector@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x1800B60D4 (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     ?_Tidy@?$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V?$allocator@UItemIdParameterIndex@BamoImpl@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800B6548 (-_Tidy@-$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V-$allocator@UItemIdParameterIndex@Bam.c)
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
  _QWORD *v10; // rdi
  _QWORD *v11; // r15
  _QWORD *v12; // r14
  _BYTE *v13; // rdx
  const char *v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v17; // [rsp+50h] [rbp+8h] BYREF

  v7 = a2[1];
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    *a2,
    &v17);
  v9 = v17;
  if ( !v17 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE9,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v8);
  v10 = operator new(0x50uLL);
  v11 = v10 + 3;
  v10[3] = 0LL;
  v10[4] = 0LL;
  v10[5] = 0LL;
  v10[7] = 0LL;
  v10[8] = 0LL;
  v10[9] = 0LL;
  *v10 = a4;
  *((_DWORD *)v10 + 2) = a5;
  v10[2] = v7;
  *((_BYTE *)v10 + 48) = 0;
  v17 = (struct Microsoft::BamoImpl::BufferStream *)v10;
  v12 = (_QWORD *)((char *)this + 32);
  if ( v10 + 3 != (_QWORD *)((char *)this + 32) )
  {
    std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy(v11);
    *v11 = *v12;
    v10[4] = *((_QWORD *)this + 5);
    v10[5] = *((_QWORD *)this + 6);
    *v12 = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::operator=(
    v10 + 7,
    (_QWORD *)this + 8);
  *((_BYTE *)v10 + 48) = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = 0;
  v13 = (_BYTE *)*((_QWORD *)v9 + 1);
  if ( v13 == *((_BYTE **)v9 + 2) )
  {
    try
    {
      std::vector<Microsoft::BamoImpl::RemoteCallBuffer *>::_Emplace_reallocate<Microsoft::BamoImpl::RemoteCallBuffer * const &>(
        (const void **)v9,
        v13,
        &v17);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0xFD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
        v14);
    }
  }
  else
  {
    *(_QWORD *)v13 = v10;
    *((_QWORD *)v9 + 1) += 8LL;
  }
  return 0LL;
}
