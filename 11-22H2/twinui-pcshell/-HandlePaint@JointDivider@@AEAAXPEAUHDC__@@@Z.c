/*
 * XREFs of ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x1805DA850
 * Callers:
 *     ?v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805DAED0 (-v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180397CBC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x1805DA9C8 (-PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1805E7D14 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall JointDivider::HandlePaint(JointDivider *this, HDC hdc)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT Points; // [rsp+38h] [rbp-28h] BYREF
  struct tagPOINT v8; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0LL;
  v4 = *((_QWORD *)this + 8);
  v5 = *(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 104LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  if ( v5(v4, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v6) >= 0 )
  {
    `vector constructor iterator'((char *)&Points, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
    (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *))(*(_QWORD *)v6 + 56LL))(v6, 0LL, &Points);
    (*(void (__fastcall **)(__int64, __int64, struct tagPOINT *))(*(_QWORD *)v6 + 56LL))(v6, 1LL, &v8);
    MapWindowPoints(0LL, *((HWND *)this + 6), &Points, 2u);
    MapWindowPoints(0LL, *((HWND *)this + 6), &v8, 2u);
    JointDivider_Paint(
      hdc,
      (HDC)&Points,
      (const struct Geometry::CRect *)&v8,
      *((enum DEVICE_SCALE_FACTOR *)this + 20),
      *((HFONT *)this + 9));
    JointDivider::PaintFocusIndicator(this, hdc, (const struct Geometry::CRect *)&v8);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
}
