/*
 * XREFs of ??1ViewMenuChordedKeyHandler@@MEAA@XZ @ 0x18017AF70
 * Callers:
 *     ??_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z @ 0x18017B010 (--_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ViewMenuChordedKeyHandler::~ViewMenuChordedKeyHandler(ViewMenuChordedKeyHandler *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &ViewMenuChordedKeyHandler::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 80);
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 8) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
