/*
 * XREFs of ??1?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ @ 0x100043F3
 * Callers:
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ @ 0x10004272 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ.c)
 * Callees:
 *     ??1ThreadLocalData@details_abi@wil@@QAE@XZ @ 0x100038BE (--1ThreadLocalData@details_abi@wil@@QAE@XZ.c)
 */

int *__thiscall wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::~ThreadLocalStorage<wil::details_abi::ThreadLocalData>(
        int *this)
{
  int *result; // eax
  int *v2; // edi
  int v3; // ebx
  void ***v4; // esi
  HANDLE ProcessHeap; // eax
  char *v6; // [esp+4h] [ebp-4h]

  result = this + 10;
  v2 = this;
  v6 = (char *)(this + 10);
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      do
      {
        v4 = (void ***)v3;
        v3 = *(_DWORD *)(v3 + 4);
        wil::details_abi::ThreadLocalData::~ThreadLocalData(v4 + 2);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
      }
      while ( v3 );
      result = (int *)v6;
    }
    *v2++ = 0;
  }
  while ( v2 != result );
  return result;
}
