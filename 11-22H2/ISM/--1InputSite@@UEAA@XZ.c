/*
 * XREFs of ??1InputSite@@UEAA@XZ @ 0x18003FE8C
 * Callers:
 *     ??_EInputSite@@UEAAPEAXI@Z @ 0x1800557C0 (--_EInputSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAXXZ @ 0x180055670 (-_Tidy@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@AEAAXXZ.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@QEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18014CCDC (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSite::~InputSite(InputSite *this)
{
  __int64 v2; // rdi
  InputSite **i; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &InputSite::`vftable';
  v2 = *((_QWORD *)this + 64);
  for ( i = *(InputSite ***)(v2 + 56); i != *(InputSite ***)(v2 + 64) && *i != this; ++i )
    ;
  memmove_0(i, i + 1, *(_QWORD *)(v2 + 64) - (_QWORD)(i + 1));
  *(_QWORD *)(v2 + 64) -= 8LL;
  v7 = *((_QWORD *)this + 64);
  if ( v7 )
  {
    *((_QWORD *)this + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v8 = *((_QWORD *)this + 61);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(v8, *((_QWORD *)this + 62));
    std::_Deallocate<16,0>(
      *((void **)this + 61),
      (*((_QWORD *)this + 63) - *((_QWORD *)this + 61)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
  }
  if ( *((_BYTE *)this + 480) )
  {
    if ( *((char *)this + 56) != -1LL )
    {
      if ( *((_BYTE *)this + 56) )
      {
        v9 = *((_QWORD *)this + 6);
        if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          NtCloseCompositionInputSink(v9, v4, v5, v6);
      }
    }
  }
  std::vector<InputSiteId>::_Tidy((char *)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
