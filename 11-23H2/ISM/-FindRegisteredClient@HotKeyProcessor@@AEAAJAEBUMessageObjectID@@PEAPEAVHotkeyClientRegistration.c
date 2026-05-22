/*
 * XREFs of ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801F1480
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x180064C04 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979___ @ 0x1801F04A8 (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ea_1801F04A8.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801F1618 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801F1ED0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801F24D0 (-RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801F2D50 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 *     ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801F3020 (-UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_b8c8c5ee32330bcac3385f4c759279f3___ @ 0x1801F0418 (std--find_if_std--_List_const_iterator_std--_List_val_std--_List_simple_types_Microsoft--WRL--Co.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801F13B8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall HotKeyProcessor::FindRegisteredClient(
        HotKeyProcessor *this,
        const struct MessageObjectID *a2,
        struct HotkeyClientRegistration **a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // r8
  __int128 v7; // xmm0
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  struct HotkeyClientRegistration **v11; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    v6 = (_QWORD *)*((_QWORD *)this + 3);
    v7 = *(_OWORD *)a2;
    v8 = (_QWORD *)*v6;
    v13 = v7;
    v9 = std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_b8c8c5ee32330bcac3385f4c759279f3___(
           &v15,
           v8,
           v6,
           (__int64)&v13);
    v10 = *v9;
    if ( *v9 != *((_QWORD *)this + 3) )
    {
      v11 = (struct HotkeyClientRegistration **)(v10 + 16);
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)(v10 + 16));
      *a3 = *v11;
    }
  }
  else
  {
    v3 = -2147024809;
    FailFastWithHR(-2147024809, retaddr, 0x40BuLL);
  }
  return v3;
}
