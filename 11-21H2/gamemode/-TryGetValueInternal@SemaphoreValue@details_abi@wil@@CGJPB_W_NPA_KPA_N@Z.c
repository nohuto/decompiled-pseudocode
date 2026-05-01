/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 * Callees:
 *     ?StringCchCatW@@YGJPA_WIPB_W@Z @ 0x100021E9 (-StringCchCatW@@YGJPA_WIPB_W@Z.c)
 *     StringCopyWorkerW @ 0x10002293 (StringCopyWorkerW.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YGJPAXIPBD@Z @ 0x100033D4 (-Return_GetLastError@in1diag3@details@wil@@YGJPAXIPBD@Z.c)
 *     ?CloseHandle@details@wil@@YGXPAX@Z @ 0x10003471 (-CloseHandle@details@wil@@YGXPAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CGJPAXPAJ@Z @ 0x100035BC (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CGJPAXPAJ@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     __EH_epilog3_GS @ 0x100073B3 (__EH_epilog3_GS.c)
 *     __EH_prolog3_GS @ 0x10007401 (__EH_prolog3_GS.c)
 */

int __userpurge wil::details_abi::SemaphoreValue::TryGetValueInternal@<eax>(
        wchar_t *a1@<ecx>,
        wchar_t *a2,
        bool a3,
        unsigned __int64 *a4,
        bool *a5)
{
  int LastError; // edi
  wil::details *v6; // eax
  wil::details *v7; // esi
  wil::details::in1diag3 *v8; // ecx
  void *ValueFromSemaphore; // eax
  int v10; // ebx
  size_t v12; // [esp+0h] [ebp-23Ch]
  size_t *v13; // [esp+4h] [ebp-238h]
  const wchar_t *v14; // [esp+8h] [ebp-234h]
  unsigned int v15; // [esp+8h] [ebp-234h]
  void *v16; // [esp+8h] [ebp-234h]
  size_t v17; // [esp+Ch] [ebp-230h]
  const wchar_t *v18; // [esp+Ch] [ebp-230h]
  const char *v19; // [esp+Ch] [ebp-230h]
  const char *v20; // [esp+10h] [ebp-22Ch]
  int v21; // [esp+1Ch] [ebp-220h] BYREF
  bool v22; // [esp+23h] [ebp-219h]
  WCHAR Name[266]; // [esp+24h] [ebp-218h] BYREF
  int v24; // [esp+238h] [ebp-4h]
  int retaddr; // [esp+240h] [ebp+4h]

  LastError = 0;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  StringCopyWorkerW(a1, v12, v13, v14, v17);
  StringCchCatW(Name, (wchar_t *)L"_p0", v15, v18);
  v6 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v7 = v6;
  v22 = v6 != 0;
  if ( v6 )
  {
    v21 = 0;
    ValueFromSemaphore = (void *)wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v6, &v21);
    v10 = (int)ValueFromSemaphore;
    if ( (int)ValueFromSemaphore >= 0 )
    {
      *(_QWORD *)a2 = v21;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (wil::details::in1diag3 *)"wil",
        ValueFromSemaphore,
        (unsigned int)v16,
        v19,
        (int)v20);
      LastError = v10;
    }
  }
  else if ( GetLastError() != 2 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, v8, v16, (unsigned int)v19, v20);
  }
  if ( v22 )
  {
    v24 = 8;
    wil::details::CloseHandle(v7, v16);
  }
  return LastError;
}
