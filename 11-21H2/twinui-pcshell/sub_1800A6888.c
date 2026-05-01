/*
 * XREFs of sub_1800A6888 @ 0x1800A6888
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1800A6888(CControlCenterExperienceManager *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  char v4; // of
  __int64 v5; // rbx
  __int64 v6; // rdi
  double v7; // st7

  if ( !v4 )
    JUMPOUT(0x1800A68FCLL);
  *(_WORD *)(v5 + 2 * v6 - 122) = (__int16)v7;
  return CControlCenterExperienceManager::OnMessage(a1, a2, a3, a4);
}
