/*
 * XREFs of ?Lock@CPresentationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800A7A8C
 * Callers:
 *     ??1CPresentationBuffer@@MEAA@XZ @ 0x1801AF034 (--1CPresentationBuffer@@MEAA@XZ.c)
 *     ?GetAvailableEvent@CPresentationBuffer@@UEAAJPEAPEAX@Z @ 0x1801AF290 (-GetAvailableEvent@CPresentationBuffer@@UEAAJPEAPEAX@Z.c)
 *     ?IsAvailable@CPresentationBuffer@@UEAAJPEAE@Z @ 0x1801AF590 (-IsAvailable@CPresentationBuffer@@UEAAJPEAE@Z.c)
 *     ??1CPresentationSurface@@MEAA@XZ @ 0x1801AFCA4 (--1CPresentationSurface@@MEAA@XZ.c)
 *     ?RestrictToOutput@CPresentationSurface@@UEAAJPEAUIUnknown@@@Z @ 0x1801B0410 (-RestrictToOutput@CPresentationSurface@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetAlphaMode@CPresentationSurface@@UEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1801B0530 (-SetAlphaMode@CPresentationSurface@@UEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetBuffer@CPresentationSurface@@UEAAJPEAUIPresentationBuffer@@@Z @ 0x1801B0580 (-SetBuffer@CPresentationSurface@@UEAAJPEAUIPresentationBuffer@@@Z.c)
 *     ?SetColorSpace@CPresentationSurface@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B05D0 (-SetColorSpace@CPresentationSurface@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisableReadback@CPresentationSurface@@UEAAJE@Z @ 0x1801B0630 (-SetDisableReadback@CPresentationSurface@@UEAAJE@Z.c)
 *     ?SetLetterboxingMargins@CPresentationSurface@@UEAAJMMMM@Z @ 0x1801B06A0 (-SetLetterboxingMargins@CPresentationSurface@@UEAAJMMMM@Z.c)
 *     ?SetSourceRect@CPresentationSurface@@UEAAJPEBUtagRECT@@@Z @ 0x1801B0770 (-SetSourceRect@CPresentationSurface@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?SetTag@CPresentationSurface@@UEAAX_K@Z @ 0x1801B07D0 (-SetTag@CPresentationSurface@@UEAAX_K@Z.c)
 *     ?SetTransform@CPresentationSurface@@UEAAJPEAUPresentationTransform@@@Z @ 0x1801B0810 (-SetTransform@CPresentationSurface@@UEAAJPEAUPresentationTransform@@@Z.c)
 * Callees:
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800E5564 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

__int64 __fastcall CPresentationManager::Lock(__int64 a1, __int64 a2)
{
  wil::critical_section::lock(a1 + 24, a2);
  return a2;
}
