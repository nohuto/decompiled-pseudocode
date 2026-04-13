/*
 * XREFs of ??_G?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEAAPEAXI@Z @ 0x1800E8590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::`scalar deleting destructor'(
        void **a1,
        char a2)
{
  *a1 = &std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::`vftable';
  operator delete[](a1[2]);
  operator delete[](a1[3]);
  operator delete[](a1[4]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
