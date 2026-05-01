/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGlyphButton@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804CB9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804AC574 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CMultitaskingViewElementBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement,IGlyphButton>::`vector deleting destructor'(
        CMultitaskingViewElementBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
