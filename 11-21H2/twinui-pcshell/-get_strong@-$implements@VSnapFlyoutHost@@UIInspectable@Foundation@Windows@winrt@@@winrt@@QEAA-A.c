/*
 * XREFs of ?get_strong@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1805B1FD0
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1801C0130 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowAsync$_ResumeCoro$1 @ 0x1801C0B90 (SnapFlyoutHost--ShowAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_strong(
        __int64 a1,
        _QWORD *a2)
{
  signed __int64 v2; // r8
  bool v3; // zf
  signed __int64 v4; // rax

  *a2 = 0LL;
  if ( a1 )
  {
    *a2 = a1;
    v2 = *(_QWORD *)(a1 + 8);
    while ( v2 >= 0 )
    {
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v2 + 1, v2);
      v3 = v2 == v4;
      v2 = v4;
      if ( v3 )
        return a2;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v2 + 24), 1u);
  }
  return a2;
}
