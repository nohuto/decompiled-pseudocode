/*
 * XREFs of ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C00C20E0
 * Callers:
 *     ?Delete@CRecalcProp@@UEAAXXZ @ 0x1C00C0A80 (-Delete@CRecalcProp@@UEAAXXZ.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00C0B54 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00C26A4 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 * Callees:
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1C00C2110 (--1CRecalcProp@@AEAA@XZ.c)
 */

CRecalcProp *__fastcall CRecalcProp::`scalar deleting destructor'(CRecalcProp *this)
{
  CRecalcProp::~CRecalcProp(this);
  Win32FreePool(this);
  return this;
}
