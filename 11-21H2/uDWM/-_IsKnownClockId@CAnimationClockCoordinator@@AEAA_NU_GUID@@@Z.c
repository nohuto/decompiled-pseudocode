/*
 * XREFs of ?_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z @ 0x1800A5124
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800A4AE4 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

char __fastcall CAnimationClockCoordinator::_IsKnownClockId(CAnimationClockCoordinator *this, struct _GUID *a2)
{
  unsigned int v2; // r10d
  char v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v9; // [rsp+0h] [rbp-28h]

  v2 = *((_DWORD *)this + 20);
  v3 = 0;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 7);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 8LL * v4);
      v9 = *(_OWORD *)(v6 + 120);
      v7 = v9 - *(_QWORD *)&a2->Data1;
      if ( (_QWORD)v9 == *(_QWORD *)&a2->Data1 )
        v7 = *((_QWORD *)&v9 + 1) - *(_QWORD *)a2->Data4;
      if ( !v7 )
        break;
      if ( ++v4 >= v2 )
        return v3;
    }
    return *(_DWORD *)(v6 + 80) != 7;
  }
  return v3;
}
