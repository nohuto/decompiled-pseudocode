/*
 * XREFs of ?Process3DInput@MPCMouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801F5800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::Process3DInput(MPCMouseProcessor *this, struct InputInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 457) + 48LL))(
           *((_QWORD *)this + 457),
           a2);
}
