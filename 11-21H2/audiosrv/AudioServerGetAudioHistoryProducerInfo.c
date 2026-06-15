/*
 * XREFs of AudioServerGetAudioHistoryProducerInfo @ 0x1800F13A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800ED894 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800F085C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall AudioServerGetAudioHistoryProducerInfo(
        char *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        void **a5,
        _DWORD *a6,
        _QWORD *a7)
{
  __int128 v11; // xmm0
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rbx
  char *v18; // rax
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int16 *v22; // rbx
  void *v23; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  void *v26; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v27[16]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v28[16]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v27, a1);
  *a5 = 0LL;
  v11 = *(_OWORD *)(a1 + 280);
  v26 = 0LL;
  *(_OWORD *)a2 = v11;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 296);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 312);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 328);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 344);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 360);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 376);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 392);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 408);
  *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 424);
  *(_OWORD *)(a2 + 72) = 0LL;
  *(_OWORD *)(a2 + 88) = 0LL;
  *(_OWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 120) = 0LL;
  if ( !*(_DWORD *)(a2 + 144) )
  {
    v12 = -2147024809;
    v13 = 4740LL;
LABEL_7:
    v16 = v12;
    goto LABEL_8;
  }
  v14 = *((_QWORD *)a1 + 68);
  v25 = 0LL;
  *a3 = v14;
  *a4 = *((_QWORD *)a1 + 69);
  v15 = StringCchLengthW(*((const unsigned __int16 **)a1 + 26), 260LL, &v25);
  v12 = v15;
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v13 = 4746LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v16);
    goto LABEL_15;
  }
  v17 = v25;
  v18 = (char *)MIDL_user_allocate(2 * v25 + 2);
  *a5 = v18;
  if ( !v18 )
  {
    v12 = -2147024882;
    v13 = 4748LL;
    goto LABEL_7;
  }
  v19 = StringCchCopyW(v18, v17 + 1, *((char **)a1 + 26));
  v12 = v19;
  if ( v19 >= 0 )
  {
    v22 = (unsigned __int16 *)*((_QWORD *)a1 + 22);
    v23 = MIDL_user_allocate(v22[8] + 18LL);
    *a7 = v23;
    if ( v23 )
    {
      memcpy_0(v23, v22, v22[8] + 18LL);
      v12 = 0;
      *a6 = *((_DWORD *)a1 + 142) == 3;
      goto LABEL_15;
    }
    v12 = -2147024882;
    v21 = 4759LL;
    v20 = 2147942414LL;
  }
  else
  {
    v20 = (unsigned int)v19;
    v21 = 4755LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v20);
  operator delete(*a5);
  *a5 = 0LL;
LABEL_15:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v26);
  EtwEventActivityIdControl(4LL, v28);
  return v12;
}
