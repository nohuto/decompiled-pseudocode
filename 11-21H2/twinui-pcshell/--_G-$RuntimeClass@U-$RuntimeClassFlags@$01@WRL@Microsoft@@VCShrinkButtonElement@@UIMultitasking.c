/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804B8040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CShrinkButtonElement@@QEAA@XZ @ 0x180233BCE (--1CShrinkButtonElement@@QEAA@XZ.c)
 */

CShrinkButtonElement *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::`scalar deleting destructor'(
        CShrinkButtonElement *a1,
        char a2)
{
  *((_DWORD *)a1 + 73) = -1073741823;
  CShrinkButtonElement::~CShrinkButtonElement(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
