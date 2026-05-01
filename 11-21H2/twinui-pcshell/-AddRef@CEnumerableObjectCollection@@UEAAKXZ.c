/*
 * XREFs of ?AddRef@CEnumerableObjectCollection@@UEAAKXZ @ 0x180181E50
 * Callers:
 *     ?AddRef@CEnumerableObjectCollection@@W7EAAKXZ @ 0x1801EB7B0 (-AddRef@CEnumerableObjectCollection@@W7EAAKXZ.c)
 *     ?AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x1801EB7D0 (-AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 *     sub_18020FF70 @ 0x18020FF70 (sub_18020FF70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::AddRef(CEnumerableObjectCollection *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
