/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x14001F73C
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F450 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F9D0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x14001F710 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140062F18 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamInstance::CreateStreamInstance(
        _QWORD *a1,
        DWORD a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  void *v8; // rbx
  HRESULT v12; // eax
  int v13; // ebx
  HANDLE v14; // rax
  const char *v15; // r9
  char *v16; // rax
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  HANDLE v23; // rax
  int v24; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v26; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v12 = CoImpersonateClient();
    v13 = v12;
    if ( v12 < 0 )
    {
      v21 = (unsigned int)v12;
      v22 = 49LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v21,
        v24);
      v6 = v13;
      goto LABEL_12;
    }
    v14 = OpenProcess(0x3000u, 0, a2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v26,
      v14);
    v8 = v26;
    if ( (((unsigned __int64)v26 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v23 = OpenProcess(0x2400u, 0, a2);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v26,
        v23);
      v8 = v26;
    }
    if ( (((unsigned __int64)v8 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x40,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        v15);
    CoRevertToSelf();
  }
  v16 = (char *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( !v16 )
  {
    v13 = -2147024882;
    v22 = 69LL;
    v21 = 2147942414LL;
    goto LABEL_15;
  }
  *(_QWORD *)v16 = 0LL;
  *((_QWORD *)v16 + 1) = 0LL;
  *((_WORD *)v16 + 8) = 0;
  *((_DWORD *)v16 + 5) = a3;
  *((_QWORD *)v16 + 3) = 0LL;
  *((_QWORD *)v16 + 4) = 0LL;
  *((_QWORD *)v16 + 5) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v16 + 48), 0, 0);
  v18 = a5;
  *((_QWORD *)v17 + 11) = 0LL;
  *(_QWORD *)v17 = v18;
  v19 = a6;
  *((_QWORD *)v17 + 1) = a4;
  *((_QWORD *)v17 + 12) = v19;
  if ( v17 + 40 != (char *)&v26 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v17 + 40,
      v8);
    v26 = 0LL;
  }
  *a1 = v17;
LABEL_12:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v26);
  return v6;
}
