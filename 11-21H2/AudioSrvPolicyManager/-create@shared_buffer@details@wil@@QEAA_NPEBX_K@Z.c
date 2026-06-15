/*
 * XREFs of ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1800078FC
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180006C4C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180007A20 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     memcpy_s @ 0x180007AFC (memcpy_s.c)
 */

bool __fastcall wil::details::shared_buffer::create(volatile signed __int32 **this, const void *a2, rsize_t a3)
{
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v9; // rax
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rsi
  volatile signed __int32 *v12; // rbx
  HANDLE v13; // rax

  if ( !a3 )
  {
    v6 = *this;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      {
        v7 = *this;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, (LPVOID)v7);
      }
      *this = 0LL;
      this[1] = 0LL;
    }
LABEL_13:
    LOBYTE(v10) = 1;
    return (char)v10;
  }
  v9 = GetProcessHeap();
  v10 = (volatile signed __int32 *)HeapAlloc(v9, 0, a3 + 4);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0;
    if ( a2 )
      memcpy_s((void *const)(v10 + 1), a3, a2, a3);
    if ( *this && _InterlockedExchangeAdd(*this, 0xFFFFFFFF) == 1 )
    {
      v12 = *this;
      v13 = GetProcessHeap();
      HeapFree(v13, 0, (LPVOID)v12);
    }
    *this = v11;
    this[1] = (volatile signed __int32 *)a3;
    _InterlockedIncrement(v11);
    goto LABEL_13;
  }
  return (char)v10;
}
