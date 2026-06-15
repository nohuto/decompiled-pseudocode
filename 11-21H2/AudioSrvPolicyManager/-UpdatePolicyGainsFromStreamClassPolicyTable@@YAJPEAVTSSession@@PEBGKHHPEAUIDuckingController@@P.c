/*
 * XREFs of ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180030BB0
 * Callers:
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002FA9C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x180029C38 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x180037B9C (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 */

__int64 __fastcall UpdatePolicyGainsFromStreamClassPolicyTable(
        struct TSSession *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct IDuckingController *a6,
        int *a7)
{
  int *v7; // r15
  struct IDuckingController *v8; // r12
  _QWORD *v9; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *i; // rbx
  _QWORD *v15; // rcx
  int v16; // edx
  int updated; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  BOOL v20; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v25; // [rsp+A0h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v25 = a3;
  v7 = a7;
  v8 = a6;
  v9 = &unk_18004A3B0;
  if ( !a4 )
    v9 = &unk_1800491B0;
  v11 = 0LL;
  v12 = 0LL;
  while ( 1 )
  {
    LODWORD(v26) = 0;
    v13 = a3;
    if ( v9[24 * a3 + v12] )
      break;
LABEL_25:
    v11 = (unsigned int)(v11 + 1);
    v12 = (unsigned int)v11;
    if ( (unsigned int)v11 >= 0x18 )
      return 0LL;
  }
  for ( i = (_QWORD *)*((_QWORD *)a1 + 133); ; i = (_QWORD *)*i )
  {
    if ( !i )
      goto LABEL_24;
    v15 = (_QWORD *)i[1];
    if ( v15[3] >= 8uLL )
      v15 = (_QWORD *)*v15;
    if ( !(unsigned int)_o__wcsicmp(v15, v9[24 * v13 + v11]) )
      break;
  }
  v16 = *(_DWORD *)(*(_QWORD *)(i[1] + 32LL) + 24LL);
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                  (LPCRITICAL_SECTION)((char *)a1 + 136),
                  (char *)(unsigned int)v11,
                  a5,
                  (__int64)v8,
                  (__int64)&v26);
      v18 = updated;
      if ( updated < 0 )
      {
        v19 = 147LL;
        goto LABEL_28;
      }
    }
    else if ( v16 == 2 )
    {
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                  (LPCRITICAL_SECTION)a1 + 14,
                  (char *)(unsigned int)v11,
                  a5,
                  (__int64)v8,
                  (__int64)&v26);
      v18 = updated;
      if ( updated < 0 )
      {
        v19 = 157LL;
        goto LABEL_28;
      }
    }
LABEL_19:
    v20 = *v7 || (_DWORD)v26;
    *v7 = v20;
LABEL_24:
    a3 = v25;
    goto LABEL_25;
  }
  CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
    (struct TSSession *)((char *)a1 + 72),
    a2,
    (struct CStreamClassPolicyGains **)&lpCriticalSection);
  updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
              lpCriticalSection,
              (char *)(unsigned int)v11,
              a5,
              (__int64)v8,
              (__int64)&v26);
  v18 = updated;
  if ( updated >= 0 )
    goto LABEL_19;
  v19 = 137LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
    (const char *)(unsigned int)updated);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x669,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v18);
  return v18;
}
