/*
 * XREFs of ?Release@CDummyUnknown@@UEAAKXZ @ 0x180554A80
 * Callers:
 *     ?Release@CDummyUnknown@@W7EAAKXZ @ 0x18020D150 (-Release@CDummyUnknown@@W7EAAKXZ.c)
 *     ?Release@CDummyUnknown@@WBA@EAAKXZ @ 0x18020D170 (-Release@CDummyUnknown@@WBA@EAAKXZ.c)
 *     BindCtx_AddObjectParam @ 0x18054FCB8 (BindCtx_AddObjectParam.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDummyUnknown::Release(CDummyUnknown *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 6) - 1);
  *((_DWORD *)this + 6) = result;
  if ( (int)result <= 0 )
  {
    operator delete(this);
    return 0LL;
  }
  return result;
}
