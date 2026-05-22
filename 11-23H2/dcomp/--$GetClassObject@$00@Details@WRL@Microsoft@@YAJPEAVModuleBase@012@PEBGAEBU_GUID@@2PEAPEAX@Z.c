/*
 * XREFs of ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x180103D9C
 * Callers:
 *     DllGetClassObject @ 0x180108850 (DllGetClassObject.c)
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x1800178C4 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetClassObject<1>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *Ptr; // r14
  const struct _GUID **v9; // rbx
  unsigned __int64 v10; // rax
  const struct _GUID *v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  Ptr = a5;
  *a5 = 0LL;
  v9 = (const struct _GUID **)((*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8);
  v10 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this);
  while ( 1 )
  {
    if ( (unsigned __int64)v9 >= v10 )
      return 2147746065LL;
    v11 = *v9;
    if ( *v9 )
    {
      v12 = *(_QWORD **)v11->Data4;
      v13 = *v12 - *a3;
      if ( *v12 == *a3 )
        v13 = v12[1] - a3[1];
      if ( !v13 )
        break;
    }
    ++v9;
  }
  LODWORD(v15) = 1;
  return Microsoft::WRL::Details::GetCacheEntry(this, (struct Microsoft::WRL::Details::ModuleBase *)&v15, a4, v11, Ptr);
}
