/*
 * XREFs of ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18017E6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x18017E6D4 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Microsoft::WRL::Details::DefaultModule<1>::`scalar deleting destructor'(void *a1, char a2)
{
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, 8uLL);
  return a1;
}
