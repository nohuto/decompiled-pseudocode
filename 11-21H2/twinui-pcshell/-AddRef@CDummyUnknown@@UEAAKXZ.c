/*
 * XREFs of ?AddRef@CDummyUnknown@@UEAAKXZ @ 0x180186070
 * Callers:
 *     ?AddRef@CDummyUnknown@@W7EAAKXZ @ 0x18020CEB0 (-AddRef@CDummyUnknown@@W7EAAKXZ.c)
 *     ?AddRef@CDummyUnknown@@WBA@EAAKXZ @ 0x18020CED0 (-AddRef@CDummyUnknown@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyUnknown::AddRef(CDummyUnknown *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 6) + 1);
  *((_DWORD *)this + 6) = result;
  return result;
}
