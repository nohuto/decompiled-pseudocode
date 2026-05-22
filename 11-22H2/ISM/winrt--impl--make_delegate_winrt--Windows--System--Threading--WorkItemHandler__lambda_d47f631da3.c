/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800F1E38
 * Callers:
 *     winrt::Windows::System::Threading::WorkItemHandler::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800F1A70 (winrt--Windows--System--Threading--WorkItemHandler--WorkItemHandler__lambda_d47f631da3751d72c8a8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___(
        _QWORD *a1,
        __int64 *a2)
{
  char *v4; // rdx
  __int64 v5; // r8
  _QWORD *result; // rax

  v4 = (char *)operator new(0x70uLL);
  v5 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v4 + 1) = v5;
  *((_DWORD *)v4 + 4) = *((_DWORD *)a2 + 2);
  *((_DWORD *)v4 + 5) = *((_DWORD *)a2 + 3);
  *(_OWORD *)(v4 + 24) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(v4 + 40) = *((_OWORD *)a2 + 2);
  *(_OWORD *)(v4 + 56) = *((_OWORD *)a2 + 3);
  *(_OWORD *)(v4 + 72) = *((_OWORD *)a2 + 4);
  *((_QWORD *)v4 + 11) = a2[10];
  *((_QWORD *)v4 + 12) = a2[11];
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 26) = 1;
  *(_QWORD *)v4 = off_18020A400;
  result = a1;
  *a1 = v4;
  return result;
}
