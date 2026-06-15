/*
 * XREFs of ??1CBtAudioResourceManagerCache@@QEAA@XZ @ 0x18005E268
 * Callers:
 *     _dynamic_atexit_destructor_for__g_BtAudioResourceManagerCache__ @ 0x180072A90 (_dynamic_atexit_destructor_for__g_BtAudioResourceManagerCache__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CBtAudioResourceManagerCache::~CBtAudioResourceManagerCache(CBtAudioResourceManagerCache *this)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v1 + 1);
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
