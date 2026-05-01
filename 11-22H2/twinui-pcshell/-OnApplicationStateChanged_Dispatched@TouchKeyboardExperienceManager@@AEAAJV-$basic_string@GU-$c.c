/*
 * XREFs of ?OnApplicationStateChanged_Dispatched@TouchKeyboardExperienceManager@@AEAAJV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4PLM_STATE_CHANGE@@@Z @ 0x18020A9BC
 * Callers:
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x1805142E0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4efd027938208ec783bf057b80dc7741___ @ 0x1802056D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_4efd027938208ec783bf057b80dc7741___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged_Dispatched(__int64 a1, __int64 a2, int a3)
{
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _QWORD v11[4]; // [rsp+28h] [rbp-50h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+4Ch] [rbp-2Ch]
  __int64 v14; // [rsp+50h] [rbp-28h]

  v6 = *(_BYTE *)(a1 + 1012);
  std::wstring::wstring(v11, a2);
  v12 = a3;
  v13 = v6;
  v14 = a1;
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_4efd027938208ec783bf057b80dc7741___(
         v8,
         v7,
         *(_DWORD *)(a1 + 972),
         (__int64)v11);
  std::wstring::_Tidy_deallocate((__int64)v11);
  std::wstring::_Tidy_deallocate(a2);
  return v9;
}
