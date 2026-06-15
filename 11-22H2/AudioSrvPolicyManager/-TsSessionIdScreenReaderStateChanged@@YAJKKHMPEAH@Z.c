/*
 * XREFs of ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180039784
 * Callers:
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18002DC18 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x1800091E0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E250 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18002CAD4 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z @ 0x18003331C (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z.c)
 *     memmove_0 @ 0x180048B28 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdScreenReaderStateChanged(__int64 a1, int a2, int a3, float a4, struct TSSession *a5)
{
  DWORD v7; // ebx
  int v8; // edi
  struct TSSession *v9; // r12
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  __int64 result; // rax
  struct TSSession *v14; // rsi
  float v15; // xmm8_4
  int *v16; // rbx
  char *v17; // rax
  char *i; // rcx
  float v19; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v20[4]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v22; // [rsp+88h] [rbp+10h] BYREF

  v22 = a2;
  v7 = a1;
  CApplicationManager::Lock(a1, v20);
  v8 = 0;
  v9 = a5;
  *(_DWORD *)a5 = 0;
  try
  {
    v10 = TsSessionFromSessionId(v7, 1, &a5);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v14 = a5;
      v15 = *((float *)a5 + 252);
      v16 = (int *)((char *)a5 + 984);
      v17 = (char *)*((_QWORD *)a5 + 124);
      for ( i = (char *)*((_QWORD *)a5 + 123); i != v17 && *(_DWORD *)i != a2; i += 4 )
        ;
      if ( a3 )
      {
        if ( i == v17 )
        {
          if ( v17 == *((char **)a5 + 125) )
          {
            std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(
              (const void **)a5 + 123,
              *((_BYTE **)a5 + 124),
              &v22);
          }
          else
          {
            *(_DWORD *)v17 = a2;
            *((_QWORD *)v16 + 1) += 4LL;
          }
        }
        v19 = ConvertDbToEngineVolume(-24.0);
        *((float *)v14 + 252) = fmaxf(v19, fminf(ConvertDbToEngineVolume(0.0), a4));
      }
      else
      {
        if ( i != v17 )
        {
          memmove_0(i, i + 4, v17 - (i + 4));
          *((_QWORD *)v16 + 1) -= 4LL;
          v17 = (char *)*((_QWORD *)v16 + 1);
        }
        if ( (unsigned __int64)&v17[-*(_QWORD *)v16] < 4 )
          *((_DWORD *)v14 + 252) = 1065353216;
      }
      if ( v15 != *((float *)v14 + 252) )
        v8 = 1;
      *(_DWORD *)v9 = v8;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v20);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A6,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v10);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v20);
      result = v11;
    }
  }
  catch ( ... )
  {
    LODWORD(a5) = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x7C7,
                    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                    v12);
    return (unsigned int)a5;
  }
  return result;
}
