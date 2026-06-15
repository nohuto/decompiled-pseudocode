/*
 * XREFs of ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@PEAPEAUICrossProcessMemory@@0@Z @ 0x1800429F8
 * Callers:
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@QEAA@XZ @ 0x180042B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microso.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemAudioStream::move_from_blob(
        struct CP_MEMORY_METADATA_BLOB *a1,
        struct ICrossProcessMemory **a2,
        struct CP_MEMORY_METADATA_BLOB *a3)
{
  void *v5; // rax
  void *v6; // rsi
  int v7; // edi
  __int64 v9; // rdx
  struct CP_MEMORY_METADATA_BLOB *v10; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a1 != 1 )
  {
    v10 = a1;
    v11 = 2LL;
    do
    {
      *(_OWORD *)a3 = *(_OWORD *)v10;
      *((_OWORD *)a3 + 1) = *((_OWORD *)v10 + 1);
      *((_OWORD *)a3 + 2) = *((_OWORD *)v10 + 2);
      *((_OWORD *)a3 + 3) = *((_OWORD *)v10 + 3);
      *((_OWORD *)a3 + 4) = *((_OWORD *)v10 + 4);
      *((_OWORD *)a3 + 5) = *((_OWORD *)v10 + 5);
      *((_OWORD *)a3 + 6) = *((_OWORD *)v10 + 6);
      a3 = (struct CP_MEMORY_METADATA_BLOB *)((char *)a3 + 128);
      *((_OWORD *)a3 - 1) = *((_OWORD *)v10 + 7);
      v10 = (struct CP_MEMORY_METADATA_BLOB *)((char *)v10 + 128);
      --v11;
    }
    while ( v11 );
    *(_OWORD *)a3 = *(_OWORD *)v10;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v10 + 1);
    *((_QWORD *)a3 + 4) = *((_QWORD *)v10 + 4);
    goto LABEL_5;
  }
  *a2 = 0LL;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    goto LABEL_7;
  }
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>(v5);
  *(_QWORD *)v6 = &CCrossProcessClientMemory::`vftable';
  v7 = ((__int64 (__fastcall *)(void *, GUID *, struct ICrossProcessMemory **))CCrossProcessClientMemory::`vftable')(
         v6,
         &GUID_910f47db_d25f_4cf9_995e_f86c161b3eef,
         a2);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 < 0 )
  {
LABEL_7:
    v9 = 114LL;
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct CP_MEMORY_METADATA_BLOB *))(*(_QWORD *)*a2 + 24LL))(*a2, a1);
  if ( v7 >= 0 )
  {
LABEL_5:
    *(_DWORD *)a1 = 0;
    return 0LL;
  }
  v9 = 115LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
