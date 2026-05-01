/*
 * XREFs of ??0?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x180086F48
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180086364 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800B4B2C (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-60h]
  __int128 v4; // [rsp+30h] [rbp-50h]
  _OWORD v5[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v3 = 0xC10002A853D4LL;
  *((_QWORD *)&v4 + 1) = 0LL;
  LOWORD(v4) = 1;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)&v3 + 1) = "PinManagerPinTest";
  v5[1] = v4;
  v5[0] = v3;
  v5[2] = 0uLL;
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v5);
  *(_DWORD *)(a1 + 264) = 0;
  *(_WORD *)(a1 + 268) = 0;
  memset_0((void *)(a1 + 270), 0, 0x206uLL);
  *(_WORD *)(a1 + 788) = 0;
  memset_0((void *)(a1 + 790), 0, 0x206uLL);
  *(_DWORD *)(a1 + 1316) = -1;
  *(_DWORD *)(a1 + 1308) = 0;
  *(_BYTE *)(a1 + 1312) = 0;
  *(_DWORD *)(a1 + 1320) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 1328) = 1;
  return result;
}
