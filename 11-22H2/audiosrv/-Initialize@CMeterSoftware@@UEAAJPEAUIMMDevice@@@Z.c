/*
 * XREFs of ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180047FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMeterSoftware::Initialize(CMeterSoftware *this, struct IMMDevice *a2)
{
  return CMeterControlBase::Initialize(this, a2);
}
