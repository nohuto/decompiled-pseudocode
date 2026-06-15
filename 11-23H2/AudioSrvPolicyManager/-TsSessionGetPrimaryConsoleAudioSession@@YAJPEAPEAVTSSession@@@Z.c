/*
 * XREFs of ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x180037C98
 * Callers:
 *     _lambda_e1820d83b8f95df3942edf6c97432ab5_::operator() @ 0x1800348DC (_lambda_e1820d83b8f95df3942edf6c97432ab5_--operator().c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180039098 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

__int64 __fastcall TsSessionGetPrimaryConsoleAudioSession(struct TSSession **a1)
{
  struct TSSession *v2; // rdx
  _QWORD *i; // rax
  _DWORD *v4; // rcx
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection(&stru_180061648);
  v2 = 0LL;
  v7 = &stru_180061648;
  for ( i = *(_QWORD **)qword_1800616E8; i != (_QWORD *)qword_1800616E8; i = (_QWORD *)*i )
  {
    v4 = (_DWORD *)i[3];
    if ( *v4 && v4[278] )
    {
      if ( i != (_QWORD *)qword_1800616E8 )
        v2 = (struct TSSession *)i[3];
      break;
    }
  }
  *a1 = v2;
  v5 = v2 == 0LL ? 0x80070490 : 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v7);
  return v5;
}
