/*
 * XREFs of ?QueryInterface@CMatrixTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3020
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CMatrixTransformProxy@DirectComposition@@IEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800F387C (-QueryInterfaceHelper@CMatrixTransformProxy@DirectComposition@@IEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransformProxy::QueryInterface(
        DirectComposition::CMatrixTransformProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( !a3 )
    return 2147942487LL;
  result = DirectComposition::CMatrixTransformProxy::QueryInterfaceHelper(this, a2, a3, this);
  if ( (int)result >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  return result;
}
