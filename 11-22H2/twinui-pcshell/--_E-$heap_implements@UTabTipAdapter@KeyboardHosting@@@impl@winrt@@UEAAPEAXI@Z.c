/*
 * XREFs of ??_E?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@UEAAPEAXI@Z @ 0x18018509C
 * Callers:
 *     ??_E?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x1802A0DB0 (--_E-$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x1801850D8 (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vector deleting destructor'(
        KeyboardHosting::TabTipAdapter *a1,
        char a2)
{
  KeyboardHosting::TabTipAdapter::~TabTipAdapter(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x230uLL);
  return a1;
}
