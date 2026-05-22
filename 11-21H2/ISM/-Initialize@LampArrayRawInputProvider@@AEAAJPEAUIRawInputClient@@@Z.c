/*
 * XREFs of ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x180033174
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180033030 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180011100 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800D0934 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Initialize(LampArrayRawInputProvider *this, struct IRawInputClient *a2)
{
  HMODULE *v4; // rsi
  const char *v5; // r9
  int v7; // eax
  unsigned int v8; // ebx
  signed int LastError; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( IsEdition(0x1820uLL) )
  {
    v7 = ConsumerControlManager::CreateAndInitialize(a2, this, (struct ConsumerControlManager **)this + 31);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v7,
        v10);
      return v8;
    }
  }
  v4 = (HMODULE *)((char *)this + 96);
  if ( GetModuleHandleExW(4u, (LPCWSTR)LampArrayRawInputProvider::WorkerThreadProcThunk, (HMODULE *)this + 12) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    _InterlockedExchange64(
      (volatile __int64 *)this + 13,
      (__int64)CreateThread(0LL, 0LL, LampArrayRawInputProvider::WorkerThreadProcThunk, this, 0, 0LL));
    if ( *((_QWORD *)this + 13) )
      return 0LL;
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    FreeLibrary(*v4);
    *v4 = 0LL;
    LampArrayRawInputProvider::Release(this);
    return v8;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x3F,
           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
           v5);
}
