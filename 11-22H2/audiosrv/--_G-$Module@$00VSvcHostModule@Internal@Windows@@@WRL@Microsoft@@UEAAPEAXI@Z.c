/*
 * XREFs of ??_G?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800EF230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800EED10 (--1-$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::`scalar deleting destructor'(
        Microsoft::WRL::Details *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v4; // bl

  v4 = a2;
  Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::~Module<1,Windows::Internal::SvcHostModule>(
    a1,
    a2,
    a3,
    a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1);
  return a1;
}
