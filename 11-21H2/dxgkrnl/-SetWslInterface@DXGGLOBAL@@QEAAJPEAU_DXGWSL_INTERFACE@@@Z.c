/*
 * XREFs of ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1C030CCDC
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01E0A20 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetWslInterface(DXGGLOBAL *this, struct _DXGWSL_INTERFACE *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax

  if ( *((_QWORD *)this + 4) )
    goto LABEL_4;
  v6 = (_QWORD *)operator new[](0x20uLL, 0x4B677844u, 256LL, a4);
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    *((_QWORD *)this + 4) = v6;
LABEL_4:
    g_WslSubsystem = *((_QWORD *)a2 + 2);
    qword_1C0130C48 = *((_QWORD *)a2 + 4);
    qword_1C0130C50 = *((_QWORD *)a2 + 5);
    qword_1C0130C58 = *((_QWORD *)a2 + 6);
    qword_1C0130C60 = *((_QWORD *)a2 + 7);
    qword_1C0130C68 = *((_QWORD *)a2 + 8);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 9);
    return 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  WdLogSingleEntry1(6LL, 2141LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocated WSL shared NT handle table",
    2141LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
