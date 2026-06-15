/*
 * XREFs of ?Release@CRtwqAsyncCallback@@UEAAKXZ @ 0x14006C700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CRtwqAsyncCallback::Release(CRtwqAsyncCallback *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v1 )
    operator delete(this);
  return v1;
}
