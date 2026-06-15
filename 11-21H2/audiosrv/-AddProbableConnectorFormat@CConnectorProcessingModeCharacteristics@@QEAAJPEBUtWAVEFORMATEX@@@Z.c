/*
 * XREFs of ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180162910
 * Callers:
 *     _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590 (_lambda_0271267fe4b1063fcc66a341b5120ffb_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014CB48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@?$vector@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@QEAAPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV23@$$QEAV23@@Z @ 0x180162740 (--$_Emplace_reallocate@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemF.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2)
{
  int v3; // eax
  const char *v4; // r9
  int v5; // edi
  void *v6; // rcx
  void *v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rdx
  LPVOID v10; // rax
  void *v11; // rcx
  struct tWAVEFORMATEX *v12; // [rsp+28h] [rbp-20h] BYREF
  char v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF

  pv = 0LL;
  v12 = 0LL;
  v13 = 1;
  v3 = CloneWaveFormat(a2, &v12);
  v5 = v3;
  if ( v13 )
  {
    v6 = pv;
    pv = v12;
    if ( v6 )
      CoTaskMemFree(v6);
  }
  if ( v5 >= 0 )
  {
    try
    {
      v9 = (_QWORD *)*((_QWORD *)this + 6);
      if ( v9 == *((_QWORD **)this + 7) )
      {
        std::vector<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::_Emplace_reallocate<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
          (__int64 *)this + 5,
          (__int64)v9,
          &pv);
      }
      else
      {
        v10 = pv;
        pv = 0LL;
        *v9 = v10;
        *((_QWORD *)this + 6) += 8LL;
      }
      v11 = pv;
      pv = 0LL;
      if ( v11 )
        CoTaskMemFree(v11);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x107,
                             (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                             v4);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v5);
    v7 = pv;
    pv = 0LL;
    if ( v7 )
      CoTaskMemFree(v7);
    return (unsigned int)v5;
  }
  return result;
}
