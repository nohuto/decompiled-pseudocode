/*
 * XREFs of ??_E?$RuntimeClass@VViewHostItemEventArgsBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803CD2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1803CCD64 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBa.c)
 */

__int64 *__fastcall Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
