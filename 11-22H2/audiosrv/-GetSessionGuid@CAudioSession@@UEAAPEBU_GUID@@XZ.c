/*
 * XREFs of ?GetSessionGuid@CAudioSession@@UEAAPEBU_GUID@@XZ @ 0x18004CE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _GUID *__fastcall CAudioSession::GetSessionGuid(CAudioSession *this)
{
  return (const struct _GUID *)((char *)this + 600);
}
