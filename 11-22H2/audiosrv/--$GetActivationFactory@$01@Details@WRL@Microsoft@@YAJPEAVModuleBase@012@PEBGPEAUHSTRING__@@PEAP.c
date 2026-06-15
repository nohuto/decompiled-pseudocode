/*
 * XREFs of ??$GetActivationFactory@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800EE908
 * Callers:
 *     ??$ActivationFactoryCallback@$01@Details@WRL@Microsoft@@YAJPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800EE8F0 (--$ActivationFactoryCallback@$01@Details@WRL@Microsoft@@YAJPEAUHSTRING__@@PEAPEAUIActivationFact.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x1800EFAB8 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<2>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        HSTRING a3,
        const struct Microsoft::WRL::Details::CreatorMap *a4)
{
  PCWSTR StringRawBuffer; // r15
  const struct _GUID **v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  __int64 v12; // rax
  unsigned int *v13; // r8
  int v14; // edx
  unsigned int v15; // ebx
  struct IUnknown **v17; // [rsp+28h] [rbp-70h]
  BOOL hasEmbedNull; // [rsp+30h] [rbp-68h] BYREF
  int v19; // [rsp+34h] [rbp-64h] BYREF
  _OWORD v20[2]; // [rsp+38h] [rbp-60h] BYREF
  int v21; // [rsp+58h] [rbp-40h]
  wchar_t v22; // [rsp+5Ch] [rbp-3Ch]

  *(_QWORD *)a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v20[0] = *(_OWORD *)L"activatibleClassId";
    v20[1] = *(_OWORD *)L"bleClassId";
    v21 = *(_DWORD *)L"Id";
    v22 = aActivatiblecla[18];
    v15 = -2147024809;
    RoOriginateErrorW(2147942487LL, 18LL, v20);
    return v15;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v8 = (const struct _GUID **)((*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this) + 8);
  v9 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  if ( (unsigned __int64)v8 >= v9 )
  {
LABEL_11:
    v15 = -2147221231;
    RoOriginateError(2147746065LL, a3);
    return v15;
  }
  while ( 1 )
  {
    if ( *v8 )
    {
      v10 = (*(__int64 (**)(void))(*v8)->Data4)();
      v11 = (unsigned __int16 *)StringRawBuffer;
      v12 = v10 - (_QWORD)StringRawBuffer;
      do
      {
        v13 = (unsigned int *)*(unsigned __int16 *)((char *)v11 + v12);
        v14 = *v11 - (_DWORD)v13;
        if ( v14 )
          break;
        ++v11;
      }
      while ( (_DWORD)v13 );
      if ( !v14 )
        break;
    }
    if ( (unsigned __int64)++v8 >= v9 )
      goto LABEL_11;
  }
  v19 = 2;
  return Microsoft::WRL::Details::GetCacheEntry(
           this,
           (struct Microsoft::WRL::Details::ModuleBase *)&v19,
           v13,
           *v8,
           a4,
           v17);
}
