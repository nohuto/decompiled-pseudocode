/*
 * XREFs of _lambda_152589ecad8ae636cc0bdcee60e887b4_::operator() @ 0x1800BE2F4
 * Callers:
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800BEC90 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x1800B17E0 (-SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z.c)
 */

void __fastcall lambda_152589ecad8ae636cc0bdcee60e887b4_::operator()(_QWORD **a1)
{
  _BYTE *v1; // rdx

  v1 = *a1;
  LOBYTE(v1) = *((_BYTE *)*a1 + 9712);
  MPCManager::SendHomeGestureReadyChanged(
    MPCManager::s_instance,
    (_BOOL8)v1,
    *(_DWORD *)(*a1)[6],
    *(_DWORD *)((*a1)[6] + 4LL),
    *(_QWORD *)(*a1[1] + 16LL),
    *(_DWORD *)(*a1[1] + 1060LL),
    *(_DWORD *)(*a1[1] + 1088LL));
}
