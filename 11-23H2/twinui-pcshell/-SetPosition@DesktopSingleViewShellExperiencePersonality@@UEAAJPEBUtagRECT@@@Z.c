/*
 * XREFs of ?SetPosition@DesktopSingleViewShellExperiencePersonality@@UEAAJPEBUtagRECT@@@Z @ 0x1801B9150
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
