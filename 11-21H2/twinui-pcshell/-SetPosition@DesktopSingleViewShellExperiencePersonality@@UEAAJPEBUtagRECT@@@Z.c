/*
 * XREFs of ?SetPosition@DesktopSingleViewShellExperiencePersonality@@UEAAJPEBUtagRECT@@@Z @ 0x180177860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::SetPosition(
        DesktopSingleViewShellExperiencePersonality *this,
        const struct tagRECT *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(**((_QWORD **)this + 2) + 32LL))(
           *((_QWORD *)this + 2),
           a2);
}
