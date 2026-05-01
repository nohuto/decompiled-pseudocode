/*
 * XREFs of ?ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z @ 0x1805DE96C
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1805DE4F0 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AppResizeData::ComputeMiddleMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  int v3; // r9d
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // r8d
  _DWORD v8[10]; // [rsp+20h] [rbp-38h] BYREF

  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v8);
  v3 = v8[0];
  v4 = v8[3];
  v5 = v8[2] - v8[0];
  *((_DWORD *)a2 + 1) = v8[1];
  *((_DWORD *)a2 + 3) = v4;
  v6 = 100 * v8[4] / 100;
  v7 = (unsigned int)(v5 - v6) >> 1;
  *(_DWORD *)a2 = v7 + v3;
  *((_DWORD *)a2 + 2) = v6 + v7 + v3;
}
