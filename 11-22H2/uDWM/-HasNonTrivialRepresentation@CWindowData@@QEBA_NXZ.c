/*
 * XREFs of ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x18001D994
 * Callers:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180006CEC (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001EA48 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x180015BFC (-IsSplashScreen@CWindowData@@QEBA_NXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18001DA50 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::HasNonTrivialRepresentation(CWindowData *this)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // si
  int v6; // ebx
  int SystemMetrics; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx

  if ( *((_QWORD *)this + 60) )
    return 1;
  v2 = *((_DWORD *)this + 33) - 8;
  if ( !v2 || (v3 = v2 - 1) == 0 || (unsigned int)(v3 - 1) < 2 || CWindowData::IsShellManaged(this) )
    return (*((_BYTE *)this + 676) & 0x10) == 0 || CWindowData::IsSplashScreen(this);
  if ( !*((_QWORD *)this + 55) )
    return 0;
  v4 = 1;
  if ( (*((_BYTE *)this + 672) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 3) )
      return 0;
  }
  if ( (*((_BYTE *)this + 673) & 0x30) == 0 && (*((_DWORD *)this + 30) & 0x200000) == 0 )
    return 0;
  if ( (*((_DWORD *)this + 29) & 0x20000000) != 0 )
  {
    v6 = *((_DWORD *)this + 56) - *((_DWORD *)this + 54);
    SystemMetrics = GetSystemMetrics(57);
    v8 = 0;
    if ( v6 >= 0 )
      v8 = v6;
    if ( v8 <= SystemMetrics )
    {
      v9 = *((_DWORD *)this + 57) - *((_DWORD *)this + 55);
      v10 = GetSystemMetrics(58);
      v11 = 0;
      if ( v9 >= 0 )
        v11 = v9;
      if ( v11 <= v10 )
        return 0;
    }
  }
  return v4;
}
