/*
 * XREFs of ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBGHHW4_AudioSessionState@@@Z @ 0x18003B5E8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x18001B2D0 (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800241D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualAudioSessionInfo::RuntimeClassInitialize(
        VirtualAudioSessionInfo *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        int a4,
        int a5,
        enum _AudioSessionState a6)
{
  __int64 v9; // rdi
  unsigned __int16 **v10; // rbx
  unsigned __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 9) = a5;
  *((_DWORD *)this + 10) = a6;
  v10 = (unsigned __int16 **)((char *)this + 24);
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = _AllocStringWorker<CTCoAllocPolicy>((SIZE_T)this, (__int64)a2, a3, v11, v15, v10);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\virtualaudioinfo.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
