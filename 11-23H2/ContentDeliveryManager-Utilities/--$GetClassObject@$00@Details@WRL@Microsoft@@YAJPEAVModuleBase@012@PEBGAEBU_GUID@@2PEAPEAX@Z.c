/*
 * XREFs of ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x180047188
 * Callers:
 *     DllGetClassObject @ 0x18004BDA0 (DllGetClassObject.c)
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18004951C (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetClassObject<1>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  PVOID Ptr; // r14
  const struct _GUID **v9; // rbx
  unsigned __int64 v10; // rax
  const struct _GUID *v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  struct IUnknown **v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  Ptr = a5;
  *a5 = 0LL;
  v9 = (const struct _GUID **)((*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8);
  v10 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this);
  while ( (unsigned __int64)v9 < v10 )
  {
    v11 = *v9;
    if ( *v9 )
    {
      v12 = *(_QWORD **)v11->Data4;
      v13 = *v12 - *a3;
      if ( *v12 == *a3 )
        v13 = v12[1] - a3[1];
      if ( !v13 )
      {
        LODWORD(v16) = 1;
        return Microsoft::WRL::Details::GetCacheEntry(
                 this,
                 (struct Microsoft::WRL::Details::ModuleBase *)&v16,
                 a4,
                 v11,
                 Ptr,
                 v15);
      }
    }
    ++v9;
  }
  return 2147746065LL;
}
