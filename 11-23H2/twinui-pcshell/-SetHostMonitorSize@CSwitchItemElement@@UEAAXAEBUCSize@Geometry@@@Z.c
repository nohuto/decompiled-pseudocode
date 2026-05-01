/*
 * XREFs of ?SetHostMonitorSize@CSwitchItemElement@@UEAAXAEBUCSize@Geometry@@@Z @ 0x1801C2DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwitchItemElement::SetHostMonitorSize(CSwitchItemElement *this, const struct Geometry::CSize *a2)
{
  *((_QWORD *)this + 8) = *(_QWORD *)a2;
}
