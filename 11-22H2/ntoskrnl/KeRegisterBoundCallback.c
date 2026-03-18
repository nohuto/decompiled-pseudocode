/*
 * XREFs of KeRegisterBoundCallback @ 0x14056CA90
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x14039FB68 (ExCompareExchangeCallBack.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DEFD0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExAllocateCallBack @ 0x140844F90 (ExAllocateCallBack.c)
 *     MmVerifyCallbackFunction @ 0x140A307D8 (MmVerifyCallbackFunction.c)
 */

__int64 __fastcall KeRegisterBoundCallback(__int64 a1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rsi

  v2 = 0LL;
  if ( (unsigned int)MmVerifyCallbackFunction() )
  {
    v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, 0LL);
    v4 = v3;
    if ( v3 )
    {
      if ( ExCompareExchangeCallBack(&KiBoundsCallback, v3, 0LL) )
        return a1;
      else
        SC_ENV::Free(v4);
    }
  }
  return v2;
}
