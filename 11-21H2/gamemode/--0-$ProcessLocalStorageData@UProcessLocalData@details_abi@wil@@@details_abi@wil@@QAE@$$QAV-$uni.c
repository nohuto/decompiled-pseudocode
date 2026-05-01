/*
 * XREFs of ??0?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QAVSemaphoreValue@12@@Z @ 0x100044B1
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     _memset @ 0x10007471 (_memset.c)
 */

_DWORD *__thiscall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        _DWORD *this,
        _DWORD *a2,
        _DWORD *a3)
{
  _WORD *v4; // edi
  int v5; // eax

  *this = 1;
  v4 = this + 4;
  this[1] = *a2;
  *a2 = 0;
  this[2] = *a3;
  v5 = a3[1];
  *a3 = 0;
  this[3] = v5;
  a3[1] = 0;
  memset(this + 4, 0, 0x30u);
  *v4 = 48;
  this[5] = 1;
  memset(this + 6, 0, 0x28u);
  return this;
}
