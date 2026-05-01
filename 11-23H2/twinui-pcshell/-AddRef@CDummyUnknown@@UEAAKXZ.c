/*
 * XREFs of ?AddRef@CDummyUnknown@@UEAAKXZ @ 0x1801C40D0
 * Callers:
 *     ?AddRef@CDummyUnknown@@W7EAAKXZ @ 0x1802A8FC0 (-AddRef@CDummyUnknown@@W7EAAKXZ.c)
 *     ?AddRef@CDummyUnknown@@WBA@EAAKXZ @ 0x1802A8FE0 (-AddRef@CDummyUnknown@@WBA@EAAKXZ.c)
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
