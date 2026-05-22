/*
 * XREFs of ?CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z @ 0x18003FF34
 * Callers:
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??_GCProxyTable@DirectComposition@@QEAAPEAXI@Z @ 0x18008551C (--_GCProxyTable@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??0CProxySizer@DirectComposition@@QEAA@XZ @ 0x18008D4AC (--0CProxySizer@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CProxyTable::CreateProxyTable(
        struct DirectComposition::CDevice *a1,
        struct DirectComposition::CProxyTable **a2)
{
  char *v4; // rax
  unsigned int v5; // edi
  char *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // ecx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = &DirectComposition::CProxyTable::s_csProxyTableCreation;
  EnterCriticalSection(&DirectComposition::CProxyTable::s_csProxyTableCreation);
  v4 = (char *)VirtualAlloc(0LL, DirectComposition::CProxyTable::s_pageSize, 0x3000u, 4u);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    DirectComposition::CProxySizer::CProxySizer((DirectComposition::CProxySizer *)(v4 + 32));
    *((_DWORD *)v6 + 4) = -1;
    v7 = DirectComposition::CProxyTable::s_proxyTableList;
    *(_QWORD *)v6 = a1;
    *((_QWORD *)v6 + 1) = 0LL;
    v8 = 0;
    *((_QWORD *)v6 + 3) = 0LL;
    while ( *v7 )
    {
      ++v8;
      ++v7;
      if ( v8 >= 0x100 )
        goto LABEL_7;
    }
    *((_DWORD *)v6 + 4) = v8;
    DirectComposition::CProxyTable::s_proxyTableList[v8] = v6;
LABEL_7:
    if ( v8 == 256 )
    {
      v5 = -2147024882;
      DirectComposition::CProxyTable::`scalar deleting destructor'((DirectComposition::CProxyTable *)v6, 0x100u);
    }
    else
    {
      *a2 = (struct DirectComposition::CProxyTable *)v6;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v5;
}
