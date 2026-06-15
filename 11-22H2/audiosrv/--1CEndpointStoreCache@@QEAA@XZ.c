/*
 * XREFs of ??1CEndpointStoreCache@@QEAA@XZ @ 0x180065FD0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_endpointStoreCache__ @ 0x18007E160 (_dynamic_atexit_destructor_for__g_endpointStoreCache__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CEndpointStoreCache::~CEndpointStoreCache(CEndpointStoreCache *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  volatile signed __int32 *v3; // r8
  signed __int32 v4; // edx

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      v3 = (volatile signed __int32 *)v1[1];
      if ( v3 )
      {
        do
          v4 = *((_DWORD *)v3 + 3);
        while ( v4 != 0x7FFFFFFF && v4 != _InterlockedCompareExchange(v3 + 3, v4 - 1, v4) );
        if ( v4 == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                              + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      operator delete(v1, 0x10uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
