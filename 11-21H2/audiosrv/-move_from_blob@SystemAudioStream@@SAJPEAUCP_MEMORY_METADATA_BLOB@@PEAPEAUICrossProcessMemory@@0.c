/*
 * XREFs of ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@PEAPEAUICrossProcessMemory@@0@Z @ 0x1800F0B04
 * Callers:
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F0C08 (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCrossProcessClientMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x1800ECCBC (--$MakeAndInitialize@VCCrossProcessClientMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft.c)
 */

__int64 __fastcall SystemAudioStream::move_from_blob(
        struct CP_MEMORY_METADATA_BLOB *a1,
        struct ICrossProcessMemory **a2,
        struct CP_MEMORY_METADATA_BLOB *a3)
{
  int v5; // edi
  __int64 v6; // rdx
  __int64 v8; // rcx
  struct CP_MEMORY_METADATA_BLOB *v9; // rax
  __int128 v10; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a1 == 1 )
  {
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessClientMemory,ICrossProcessMemory,>(a2);
    if ( v5 < 0 )
    {
      v6 = 113LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct CP_MEMORY_METADATA_BLOB *))(*(_QWORD *)*a2 + 24LL))(*a2, a1);
    if ( v5 < 0 )
    {
      v6 = 114LL;
      goto LABEL_4;
    }
  }
  else
  {
    v8 = 2LL;
    v9 = a1;
    do
    {
      *(_OWORD *)a3 = *(_OWORD *)v9;
      *((_OWORD *)a3 + 1) = *((_OWORD *)v9 + 1);
      *((_OWORD *)a3 + 2) = *((_OWORD *)v9 + 2);
      *((_OWORD *)a3 + 3) = *((_OWORD *)v9 + 3);
      *((_OWORD *)a3 + 4) = *((_OWORD *)v9 + 4);
      *((_OWORD *)a3 + 5) = *((_OWORD *)v9 + 5);
      *((_OWORD *)a3 + 6) = *((_OWORD *)v9 + 6);
      a3 = (struct CP_MEMORY_METADATA_BLOB *)((char *)a3 + 128);
      v10 = *((_OWORD *)v9 + 7);
      v9 = (struct CP_MEMORY_METADATA_BLOB *)((char *)v9 + 128);
      *((_OWORD *)a3 - 1) = v10;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)a3 = *(_OWORD *)v9;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v9 + 1);
    *((_QWORD *)a3 + 4) = *((_QWORD *)v9 + 4);
  }
  *(_DWORD *)a1 = 0;
  return 0LL;
}
