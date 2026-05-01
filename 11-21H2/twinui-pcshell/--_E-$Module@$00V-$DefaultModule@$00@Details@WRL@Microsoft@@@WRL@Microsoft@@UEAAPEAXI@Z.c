/*
 * XREFs of ??_E?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802D6D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x18017E6D4 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vector deleting destructor'(
        Microsoft::WRL::Details *a1,
        RTL_SRWLOCK *a2,
        const unsigned __int16 *a3)
{
  char v3; // bl

  v3 = (char)a2;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(
    a1,
    a2,
    a3);
  if ( (v3 & 1) != 0 )
    operator delete(a1);
  return a1;
}
