/*
 * XREFs of _GetProcFromComCtl32 @ 0x1802DB000
 * Callers:
 *     PremultiplyAlphaChannel @ 0x18022A250 (PremultiplyAlphaChannel.c)
 *     ?CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z @ 0x18023A04E (-CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z.c)
 *     DefSubclassProc @ 0x1802DAC30 (DefSubclassProc.c)
 *     HIMAGELIST_QueryInterface @ 0x1802DAD10 (HIMAGELIST_QueryInterface.c)
 *     ImageList_Add @ 0x1802DAD84 (ImageList_Add.c)
 *     ImageList_Create @ 0x1802DADF0 (ImageList_Create.c)
 *     ImageList_Destroy @ 0x1802DAE6C (ImageList_Destroy.c)
 *     ImageList_GetIcon @ 0x1802DAEC8 (ImageList_GetIcon.c)
 *     ImageList_ReplaceIcon @ 0x1802DAF28 (ImageList_ReplaceIcon.c)
 *     SetWindowSubclass @ 0x1802DAF94 (SetWindowSubclass.c)
 * Callees:
 *     DelayLoadCC @ 0x1802DACB0 (DelayLoadCC.c)
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
