/*
 * XREFs of ??1ThreadLocalData@details_abi@wil@@QAE@XZ @ 0x100038BE
 * Callers:
 *     ??1?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ @ 0x100043F3 (--1-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ.c)
 * Callees:
 *     <none>
 */

void __thiscall wil::details_abi::ThreadLocalData::~ThreadLocalData(void ***this)
{
  wil::details_abi::ThreadLocalData *v1; // edi
  void **v2; // esi
  void **v3; // ebx
  void **v4; // edi
  void *v5; // esi
  HANDLE ProcessHeap; // eax
  HANDLE v7; // eax

  v1 = (wil::details_abi::ThreadLocalData *)this;
  v2 = this[4];
  if ( v2 != &v2[11 * *((unsigned __int16 *)this + 10)] )
  {
    v3 = v2 + 9;
    v4 = &v2[11 * *((unsigned __int16 *)this + 10)];
    do
    {
      v5 = *v3;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
      *v3 = 0;
      v3 += 11;
      *(v3 - 10) = 0;
    }
    while ( v3 - 9 != v4 );
    v1 = (wil::details_abi::ThreadLocalData *)this;
    v2 = this[4];
  }
  v7 = GetProcessHeap();
  HeapFree(v7, 0, v2);
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
}
