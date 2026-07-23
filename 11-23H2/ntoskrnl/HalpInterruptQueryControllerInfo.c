/*
 * XREFs of HalpInterruptQueryControllerInfo @ 0x140863EA4
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A88510 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031FD6C (HalpInterruptModel.c)
 *     HalpInterruptIsRemappingRequired @ 0x14032005C (HalpInterruptIsRemappingRequired.c)
 */

__int64 __fastcall HalpInterruptQueryControllerInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rdx
  int v4; // r8d
  __int64 v5; // r9
  _DWORD *v6; // r10

  *a3 = 0;
  if ( a1 < 4 )
  {
    LODWORD(v5) = -1073741789;
  }
  else
  {
    *a2 = 0;
    v4 = HalpInterruptModel();
    if ( (unsigned int)(v4 - 2) <= 1
      || v4 == 1 && ((*v3 = 1, qword_140C624C8 != v5) || HalpInterruptIsRemappingRequired()) )
    {
      *v3 = 3;
    }
    *v6 = 4;
  }
  return (unsigned int)v5;
}
