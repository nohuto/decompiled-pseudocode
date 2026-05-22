/*
 * XREFs of ?QueryInterface@CSynchronousSuperWetInkProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F27C0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInkProxy::QueryInterface(
        DirectComposition::CSynchronousSuperWetInkProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( !a3 )
    return 2147942487LL;
  result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
  if ( (int)result >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  return result;
}
