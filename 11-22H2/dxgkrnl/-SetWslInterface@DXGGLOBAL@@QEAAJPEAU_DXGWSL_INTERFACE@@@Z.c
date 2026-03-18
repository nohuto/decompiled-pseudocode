/*
 * XREFs of ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1C03159B4
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01E30C0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetWslInterface(DXGGLOBAL *this, struct _DXGWSL_INTERFACE *a2)
{
  _QWORD *v4; // rax

  if ( *((_QWORD *)this + 4) )
    goto LABEL_4;
  v4 = (_QWORD *)operator new[](0x20uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    *((_QWORD *)this + 4) = v4;
LABEL_4:
    g_WslSubsystem = *((_QWORD *)a2 + 2);
    qword_1C0140AC0 = *((_QWORD *)a2 + 4);
    qword_1C0140AC8 = *((_QWORD *)a2 + 5);
    qword_1C0140AD0 = *((_QWORD *)a2 + 6);
    qword_1C0140AD8 = *((_QWORD *)a2 + 7);
    qword_1C0140AE0 = *((_QWORD *)a2 + 8);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 9);
    return 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  WdLogSingleEntry1(6LL, 2187LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocated WSL shared NT handle table",
    2187LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
