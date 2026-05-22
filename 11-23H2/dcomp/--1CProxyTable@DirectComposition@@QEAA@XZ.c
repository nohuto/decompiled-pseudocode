/*
 * XREFs of ??1CProxyTable@DirectComposition@@QEAA@XZ @ 0x180085554
 * Callers:
 *     ??_GCProxyTable@DirectComposition@@QEAAPEAXI@Z @ 0x18008551C (--_GCProxyTable@DirectComposition@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CProxyTable::~CProxyTable(DirectComposition::CProxyTable *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 4) < 0x100u )
  {
    v1 = *((unsigned int *)this + 4);
    if ( (DirectComposition::CProxyTable *)DirectComposition::CProxyTable::s_proxyTableList[v1] == this )
      DirectComposition::CProxyTable::s_proxyTableList[v1] = 0LL;
  }
  `vector destructor iterator'(
    (char *)this + 32,
    0x10uLL,
    1uLL,
    (void (*)(void *))DirectComposition::CProxySizer::~CProxySizer);
}
