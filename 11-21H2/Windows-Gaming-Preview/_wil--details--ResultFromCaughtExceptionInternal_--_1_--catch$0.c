/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x18004C070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180001C0C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  wil *v5; // rcx
  _DWORD *v6; // rbx

  **(_BYTE **)(a2 + 168) = 1;
  v5 = *(wil **)(a2 + 152);
  v6 = *(_DWORD **)(a2 + 32);
  if ( v5 )
    wil::GetFailureLogString(v5, *(unsigned __int16 **)(a2 + 160), (__int64)(v6 + 6), a4);
  *(_DWORD *)(a2 + 72) = v6[8];
  *(_DWORD *)(a2 + 76) = v6[9];
  *(_BYTE *)(a2 + 80) = (v6[7] & 8) != 0;
  return 0LL;
}
