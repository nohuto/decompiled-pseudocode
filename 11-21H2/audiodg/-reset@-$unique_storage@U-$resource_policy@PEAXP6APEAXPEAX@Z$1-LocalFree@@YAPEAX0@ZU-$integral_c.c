/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140002168
 * Callers:
 *     ?RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z @ 0x1400020F0 (-RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z.c)
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x140002364 (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rsi
  DWORD LastError; // ebx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    LocalFree(v4);
    SetLastError(LastError);
  }
  *a1 = a2;
}
