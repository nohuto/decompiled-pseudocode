/*
 * XREFs of _GetProcFromComCtl32 @ 0x180391084
 * Callers:
 *     PremultiplyAlphaChannel @ 0x1802CEBDA (PremultiplyAlphaChannel.c)
 *     ?CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z @ 0x1802EBC98 (-CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z.c)
 *     DefSubclassProc @ 0x180390CA8 (DefSubclassProc.c)
 *     HIMAGELIST_QueryInterface @ 0x180390D88 (HIMAGELIST_QueryInterface.c)
 *     ImageList_Add @ 0x180390DFC (ImageList_Add.c)
 *     ImageList_Create @ 0x180390E68 (ImageList_Create.c)
 *     ImageList_Destroy @ 0x180390EE4 (ImageList_Destroy.c)
 *     ImageList_GetIcon @ 0x180390F40 (ImageList_GetIcon.c)
 *     ImageList_ReplaceIcon @ 0x180390FA0 (ImageList_ReplaceIcon.c)
 *     SetWindowSubclass @ 0x18039100C (SetWindowSubclass.c)
 * Callees:
 *     DelayLoadCC @ 0x180390D28 (DelayLoadCC.c)
 */

__int64 __fastcall GetProcFromComCtl32(__int64 *a1, const CHAR *a2)
{
  __int64 v3; // rbx
  HMODULE v4; // rcx
  __int64 result; // rax

  v3 = 0LL;
  v4 = g_hinstCC;
  if ( g_hinstCC || (result = DelayLoadCC(), (v4 = g_hinstCC) != 0LL) )
  {
    result = (__int64)GetProcAddress(v4, a2);
    v3 = result;
  }
  *a1 = v3;
  return result;
}
