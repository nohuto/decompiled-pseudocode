/*
 * XREFs of ?GetTitleIdFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z @ 0x1803DEF80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1803DECB8 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 */

__int64 __fastcall IsGameManager::GetTitleIdFromProcessId(IsGameManager *this, __int64 a2, HSTRING *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 2);
  v8 = xmmword_180834B18;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v5 + 32LL))(v5, a2, &v8);
  if ( (int)result >= 0 )
  {
    v7 = v8;
    return IsGameManager::GetStringFromGameConfigStore((__int64)this, &v7, 0xFu, a3);
  }
  return result;
}
