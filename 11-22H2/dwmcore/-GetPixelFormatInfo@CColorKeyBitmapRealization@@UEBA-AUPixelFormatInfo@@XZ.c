/*
 * XREFs of ?GetPixelFormatInfo@CColorKeyBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180135990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = (void (__fastcall ***)(_QWORD))(*(_QWORD *)(a1 - 32)
                                     + 8LL
                                     + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 - 32) + 8LL) + 8LL));
  (**v3)(v3);
  return a2;
}
