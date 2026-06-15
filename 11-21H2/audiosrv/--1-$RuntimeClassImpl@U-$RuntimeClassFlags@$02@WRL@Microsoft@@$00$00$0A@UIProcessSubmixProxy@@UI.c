/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800157E0
 * Callers:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x1800159E0 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIProcessSubmixProxy@@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800F7D90 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIProcessSubmixProxy@@UIInspectable@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>(
        __int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx

  result = *(_QWORD *)(a1 + 40) >> 63;
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    v2 = (volatile signed __int32 *)(2LL * *(_QWORD *)(a1 + 40));
    v3 = 0x7FFFFFFFLL;
    do
      v4 = *((unsigned int *)v2 + 3);
    while ( (_DWORD)v4 != 0x7FFFFFFF && (_DWORD)v4 != _InterlockedCompareExchange(v2 + 3, v4 - 1, v4) );
    result = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 == 1 )
    {
      if ( v2 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, __int64, volatile signed __int32 *, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
                 Microsoft::WRL::Details::ModuleBase::module_,
                 v4,
                 v2,
                 v3);
    }
  }
  return result;
}
