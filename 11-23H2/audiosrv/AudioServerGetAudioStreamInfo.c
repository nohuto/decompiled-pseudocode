/*
 * XREFs of AudioServerGetAudioStreamInfo @ 0x180120B30
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     ??1?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CC604 (--1-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX0@Z@wil@@@wi.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180120508 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall AudioServerGetAudioStreamInfo(char *a1, __int64 a2, _QWORD *a3, _QWORD *a4, char **a5, _QWORD *a6)
{
  __int128 v10; // xmm0
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdi
  char *v14; // rax
  char *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  unsigned __int16 *v18; // rsi
  void *v19; // rax
  void *v20; // rdi
  unsigned __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  void *v23; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-30h] BYREF
  char v25[16]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v24, a1);
  *a5 = 0LL;
  v10 = *(_OWORD *)(a1 + 248);
  v22 = 0LL;
  *(_OWORD *)a2 = v10;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 264);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 280);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 296);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 312);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 328);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 344);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 360);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 376);
  *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 392);
  *(_OWORD *)(a2 + 160) = *(_OWORD *)(a1 + 408);
  *(_OWORD *)(a2 + 176) = *(_OWORD *)(a1 + 424);
  *(_QWORD *)(a2 + 192) = *((_QWORD *)a1 + 55);
  *(_OWORD *)(a2 + 72) = 0LL;
  *(_OWORD *)(a2 + 88) = 0LL;
  *(_OWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 120) = 0LL;
  *a3 = *((_QWORD *)a1 + 67);
  *a4 = *((_QWORD *)a1 + 68);
  v11 = StringCchLengthW(*((const unsigned __int16 **)a1 + 23), 260LL, &v22);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1239,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11);
LABEL_10:
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v24);
    return v12;
  }
  v13 = v22;
  v14 = (char *)MIDL_user_allocate(2 * v22 + 2);
  v22 = (unsigned __int64)v14;
  v15 = v14;
  if ( !v14 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x8007000ELL);
LABEL_9:
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>((void **)&v22);
    goto LABEL_10;
  }
  v16 = StringCchCopyW(v14, v13 + 1, *((char **)a1 + 23));
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v16);
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>((void **)&v22);
    v12 = v17;
    goto LABEL_10;
  }
  v18 = (unsigned __int16 *)*((_QWORD *)a1 + 19);
  v19 = MIDL_user_allocate(v18[8] + 18LL);
  v23 = v19;
  v20 = v19;
  if ( !v19 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1242,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>(&v23);
    goto LABEL_9;
  }
  memcpy_0(v19, v18, v18[8] + 18LL);
  *a5 = v15;
  *a6 = v20;
  EtwEventActivityIdControl(4LL, v25);
  return 0LL;
}
