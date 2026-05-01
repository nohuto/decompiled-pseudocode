/*
 * XREFs of ?Release@?$produce_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSettingTester@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x180515B60
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester,void>::Release(
        unsigned __int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  unsigned int v3; // edi
  signed __int64 v4; // rtt

  v1 = (volatile signed __int64 *)((a1 - 32) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = *((_QWORD *)v1 + 1);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64(v1 + 1, v2 - 1, v2);
    if ( v4 == v2 )
      goto LABEL_6;
  }
  v3 = winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v2));
LABEL_6:
  if ( !v3 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v3;
}
