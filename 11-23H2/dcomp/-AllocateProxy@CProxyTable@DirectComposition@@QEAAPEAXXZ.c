/*
 * XREFs of ?AllocateProxy@CProxyTable@DirectComposition@@QEAAPEAXXZ @ 0x180075A18
 * Callers:
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall DirectComposition::CProxyTable::AllocateProxy(DirectComposition::CProxyTable *this)
{
  char *v1; // rdx
  unsigned __int64 v2; // rax

  v1 = (char *)*((_QWORD *)this + 3);
  if ( v1 )
  {
    *((_QWORD *)this + 3) = *((_QWORD *)v1 + 1);
  }
  else
  {
    v2 = *((unsigned int *)this + 3);
    if ( v2 >= DirectComposition::CProxyTable::s_maxProxyTableSize )
      return 0LL;
    v1 = (char *)this + 16 * v2 + 32;
    *((_DWORD *)this + 3) = v2 + 1;
  }
  ++*((_DWORD *)this + 2);
  return v1;
}
