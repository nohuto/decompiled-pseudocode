/*
 * XREFs of ?QueryInterface@CTranslateTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3760
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CTranslateTransformProxy@DirectComposition@@IEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800F3A8C (-QueryInterfaceHelper@CTranslateTransformProxy@DirectComposition@@IEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CTranslateTransformProxy::QueryInterface(
        DirectComposition::CTranslateTransformProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( !a3 )
    return 2147942487LL;
  result = DirectComposition::CTranslateTransformProxy::QueryInterfaceHelper(this, a2, a3, this);
  if ( (int)result >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  return result;
}
