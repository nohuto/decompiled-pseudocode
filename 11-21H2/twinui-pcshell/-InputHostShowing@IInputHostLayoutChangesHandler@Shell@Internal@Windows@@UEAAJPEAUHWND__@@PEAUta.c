/*
 * XREFs of ?InputHostShowing@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18038EE20
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$function@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@wistd@@QEBAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18038E758 (--R-$function@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@wistd@@QEBAJPEAUHWND__@@PE.c)
 */

__int64 __fastcall Windows::Internal::Shell::IInputHostLayoutChangesHandler::InputHostShowing(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  if ( *(_QWORD *)(a1 + 144) )
    return wistd::function<long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::operator()(
             a1 + 32,
             a2,
             a3,
             a4,
             a5,
             a6);
  else
    return 0LL;
}
