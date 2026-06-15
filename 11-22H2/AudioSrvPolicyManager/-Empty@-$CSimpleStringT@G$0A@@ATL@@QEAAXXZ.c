/*
 * XREFs of ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18003DB2C
 * Callers:
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x18000E690 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18003FD28 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18003FBC0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003FCF0 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::Empty(_QWORD *a1)
{
  ATL::CStringData *v2; // rcx
  __int64 v3; // rdi

  v2 = (ATL::CStringData *)(*a1 - 24LL);
  v3 = *(_QWORD *)v2;
  if ( *((_DWORD *)v2 + 2) )
  {
    if ( *((int *)v2 + 4) >= 0 )
    {
      ATL::CStringData::Release(v2);
      *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, 0LL);
    }
  }
}
