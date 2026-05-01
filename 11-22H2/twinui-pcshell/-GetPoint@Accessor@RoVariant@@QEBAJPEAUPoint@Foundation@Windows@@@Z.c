/*
 * XREFs of ?GetPoint@Accessor@RoVariant@@QEBAJPEAUPoint@Foundation@Windows@@@Z @ 0x1804484B4
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180447B3C (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoVariant::Accessor::GetPoint(RoVariant::Accessor *this, struct Windows::Foundation::Point *a2)
{
  __int64 result; // rax
  int v4; // ecx

  if ( !a2 )
    return 2147500035LL;
  *(_QWORD *)a2 = 0LL;
  v4 = *((_DWORD *)this + 2);
  if ( v4 == 7 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 184LL))(*(_QWORD *)this);
  result = 2147650720LL;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
