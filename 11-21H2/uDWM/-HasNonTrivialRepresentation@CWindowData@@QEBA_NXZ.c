/*
 * XREFs of ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800222C8
 * Callers:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18002089C (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002130C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x1800124A8 (-IsSplashScreen@CWindowData@@QEBA_NXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180022F34 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::HasNonTrivialRepresentation(CWindowData *this)
{
  int v2; // eax
  char v3; // si
  int v4; // ebx
  int SystemMetrics; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // ecx

  if ( *((_QWORD *)this + 60) )
    return 1;
  v2 = *((_DWORD *)this + 33);
  if ( v2 >= 8 && v2 <= 11 || CWindowData::IsShellManaged(this) )
    return (*((_BYTE *)this + 668) & 0x10) == 0 || CWindowData::IsSplashScreen(this);
  if ( !*((_QWORD *)this + 55) )
    return 0;
  v3 = 1;
  if ( (*((_BYTE *)this + 664) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 3) )
      return 0;
  }
  if ( (*((_BYTE *)this + 665) & 0x30) == 0 && (*((_DWORD *)this + 30) & 0x200000) == 0 )
    return 0;
  if ( (*((_DWORD *)this + 29) & 0x20000000) != 0 )
  {
    v4 = *((_DWORD *)this + 56) - *((_DWORD *)this + 54);
    SystemMetrics = GetSystemMetrics(57);
    v6 = 0;
    if ( v4 >= 0 )
      v6 = v4;
    if ( v6 <= SystemMetrics )
    {
      v7 = *((_DWORD *)this + 57) - *((_DWORD *)this + 55);
      v8 = GetSystemMetrics(58);
      v9 = 0;
      if ( v7 >= 0 )
        v9 = v7;
      if ( v9 <= v8 )
        return 0;
    }
  }
  return v3;
}
