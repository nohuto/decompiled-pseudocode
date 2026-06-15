/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18001E710
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180022680 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800140AC (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180015B90 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_80aa732c9f0abca8142808a505c7029f__0_ @ 0x18001AD5C (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_80aa732c9f0abca8142808a5.c)
 *     ?TsSessionIdSetUserDuckingPreference@@YAXKM@Z @ 0x180038C74 (-TsSessionIdSetUserDuckingPreference@@YAXKM@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        float a4)
{
  __int64 *v5; // rax
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // [rsp+28h] [rbp-90h] BYREF
  std::_Ref_count_base *v11; // [rsp+30h] [rbp-88h]
  unsigned int v12; // [rsp+38h] [rbp-80h] BYREF
  __int64 v13; // [rsp+40h] [rbp-78h] BYREF
  float v14; // [rsp+50h] [rbp-68h]
  _BYTE v15[72]; // [rsp+58h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  const unsigned __int16 *v17; // [rsp+D0h] [rbp+18h] BYREF

  v17 = a3;
  try
  {
    TsSessionIdSetUserDuckingPreference(a2, a4);
    std::make_shared<std::wstring,unsigned short const * &>(&v10, (__int64 *)&v17);
    v12 = a2;
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v13, &v10);
    v14 = a4;
    v5 = (__int64 *)std::function_void___cdecl_void__::function_void___cdecl_void____lambda_80aa732c9f0abca8142808a505c7029f__0_(
                      (__int64)v15,
                      (__int64)&v12);
    v6 = QueueGenericWorkItem(v5);
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D1,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v6);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1D5,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                           v7);
  }
  return result;
}
