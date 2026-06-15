/*
 * XREFs of ?move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180015560
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013460 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemAudioStream::move_to(SystemAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2)
{
  __int64 v4; // rcx
  char *v5; // rdx
  __int64 v6; // rsi
  char *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  char *v11; // rdx
  char *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  char *v16; // rdx
  char *v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  char *v21; // rdx
  int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rax
  int v26; // eax
  unsigned int v27; // ebp
  int v28; // eax
  unsigned int v29; // ebp
  int v30; // eax
  unsigned int v31; // ebp
  char *v32; // rax
  __int128 v33; // xmm0
  int v34; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 82);
  v5 = (char *)a2 + 640;
  v6 = 2LL;
  if ( v4 )
  {
    v26 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, v5);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v26,
        v34);
      return v27;
    }
  }
  else
  {
    v7 = (char *)this + 664;
    v8 = 2LL;
    do
    {
      v5 += 128;
      v9 = *(_OWORD *)v7;
      v7 += 128;
      *((_OWORD *)v5 - 8) = v9;
      *((_OWORD *)v5 - 7) = *((_OWORD *)v7 - 7);
      *((_OWORD *)v5 - 6) = *((_OWORD *)v7 - 6);
      *((_OWORD *)v5 - 5) = *((_OWORD *)v7 - 5);
      *((_OWORD *)v5 - 4) = *((_OWORD *)v7 - 4);
      *((_OWORD *)v5 - 3) = *((_OWORD *)v7 - 3);
      *((_OWORD *)v5 - 2) = *((_OWORD *)v7 - 2);
      *((_OWORD *)v5 - 1) = *((_OWORD *)v7 - 1);
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v5 = *(_OWORD *)v7;
    *((_OWORD *)v5 + 1) = *((_OWORD *)v7 + 1);
    *((_QWORD *)v5 + 4) = *((_QWORD *)v7 + 4);
  }
  v10 = *((_QWORD *)this + 44);
  v11 = (char *)a2 + 344;
  if ( v10 )
  {
    v28 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 32LL))(v10, v11);
    v29 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v28,
        v34);
      return v29;
    }
  }
  else
  {
    v12 = (char *)this + 360;
    v13 = 2LL;
    do
    {
      v11 += 128;
      v14 = *(_OWORD *)v12;
      v12 += 128;
      *((_OWORD *)v11 - 8) = v14;
      *((_OWORD *)v11 - 7) = *((_OWORD *)v12 - 7);
      *((_OWORD *)v11 - 6) = *((_OWORD *)v12 - 6);
      *((_OWORD *)v11 - 5) = *((_OWORD *)v12 - 5);
      *((_OWORD *)v11 - 4) = *((_OWORD *)v12 - 4);
      *((_OWORD *)v11 - 3) = *((_OWORD *)v12 - 3);
      *((_OWORD *)v11 - 2) = *((_OWORD *)v12 - 2);
      *((_OWORD *)v11 - 1) = *((_OWORD *)v12 - 1);
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *((_OWORD *)v11 + 1) = *((_OWORD *)v12 + 1);
    *((_QWORD *)v11 + 4) = *((_QWORD *)v12 + 4);
  }
  v15 = *((_QWORD *)this + 6);
  v16 = (char *)a2 + 48;
  if ( v15 )
  {
    v30 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 32LL))(v15, v16);
    v31 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v30,
        v34);
      return v31;
    }
  }
  else
  {
    v17 = (char *)this + 56;
    v18 = 2LL;
    do
    {
      v16 += 128;
      v19 = *(_OWORD *)v17;
      v17 += 128;
      *((_OWORD *)v16 - 8) = v19;
      *((_OWORD *)v16 - 7) = *((_OWORD *)v17 - 7);
      *((_OWORD *)v16 - 6) = *((_OWORD *)v17 - 6);
      *((_OWORD *)v16 - 5) = *((_OWORD *)v17 - 5);
      *((_OWORD *)v16 - 4) = *((_OWORD *)v17 - 4);
      *((_OWORD *)v16 - 3) = *((_OWORD *)v17 - 3);
      *((_OWORD *)v16 - 2) = *((_OWORD *)v17 - 2);
      *((_OWORD *)v16 - 1) = *((_OWORD *)v17 - 1);
      --v18;
    }
    while ( v18 );
    *(_OWORD *)v16 = *(_OWORD *)v17;
    *((_OWORD *)v16 + 1) = *((_OWORD *)v17 + 1);
    *((_QWORD *)v16 + 4) = *((_QWORD *)v17 + 4);
  }
  v20 = *((_QWORD *)this + 121);
  v21 = (char *)a2 + 944;
  if ( !v20 )
  {
    v32 = (char *)this + 976;
    do
    {
      v21 += 128;
      v33 = *(_OWORD *)v32;
      v32 += 128;
      *((_OWORD *)v21 - 8) = v33;
      *((_OWORD *)v21 - 7) = *((_OWORD *)v32 - 7);
      *((_OWORD *)v21 - 6) = *((_OWORD *)v32 - 6);
      *((_OWORD *)v21 - 5) = *((_OWORD *)v32 - 5);
      *((_OWORD *)v21 - 4) = *((_OWORD *)v32 - 4);
      *((_OWORD *)v21 - 3) = *((_OWORD *)v32 - 3);
      *((_OWORD *)v21 - 2) = *((_OWORD *)v32 - 2);
      *((_OWORD *)v21 - 1) = *((_OWORD *)v32 - 1);
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v21 = *(_OWORD *)v32;
    *((_OWORD *)v21 + 1) = *((_OWORD *)v32 + 1);
    *((_QWORD *)v21 + 4) = *((_QWORD *)v32 + 4);
    goto LABEL_15;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 40LL))(v20, v21);
  v23 = v22;
  if ( v22 >= 0 )
  {
LABEL_15:
    *(_OWORD *)a2 = *(_OWORD *)this;
    *((_DWORD *)a2 + 4) = *((_DWORD *)this + 4);
    v24 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)a2 + 3) = v24;
    *((_QWORD *)a2 + 4) = *((_QWORD *)this + 4);
    *((_DWORD *)a2 + 234) = *((_DWORD *)this + 240);
    *((_DWORD *)a2 + 310) = *((_DWORD *)this + 318);
    *((_DWORD *)a2 + 311) = *((_DWORD *)this + 319);
    *((_DWORD *)a2 + 312) = *((_DWORD *)this + 320);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB5,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v22,
    v34);
  return v23;
}
