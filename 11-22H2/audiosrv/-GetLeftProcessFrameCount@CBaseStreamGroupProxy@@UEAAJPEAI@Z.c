/*
 * XREFs of ?GetLeftProcessFrameCount@CBaseStreamGroupProxy@@UEAAJPEAI@Z @ 0x180107FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetLeftProcessFrameCount(CBaseStreamGroupProxy *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 10) + 72LL))(
           *((_QWORD *)this + 10),
           a2);
}
