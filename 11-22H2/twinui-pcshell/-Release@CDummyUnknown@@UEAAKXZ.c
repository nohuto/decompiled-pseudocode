/*
 * XREFs of ?Release@CDummyUnknown@@UEAAKXZ @ 0x180610C10
 * Callers:
 *     ?Release@CDummyUnknown@@W7EAAKXZ @ 0x1802A91E0 (-Release@CDummyUnknown@@W7EAAKXZ.c)
 *     ?Release@CDummyUnknown@@WBA@EAAKXZ @ 0x1802A9200 (-Release@CDummyUnknown@@WBA@EAAKXZ.c)
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18060A0C4 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     BindCtx_RegisterFolderEnumMode @ 0x18079A834 (BindCtx_RegisterFolderEnumMode.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
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
