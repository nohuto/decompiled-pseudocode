/*
 * XREFs of ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x14005632C
 * Callers:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1400256A8 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140026068 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::Empty(__int64 *a1)
{
  volatile signed __int32 *v2; // rdx
  __int64 v3; // rdi

  v2 = (volatile signed __int32 *)(*a1 - 24);
  v3 = *(_QWORD *)v2;
  if ( *((_DWORD *)v2 + 2) )
  {
    if ( *((int *)v2 + 4) >= 0 )
    {
      if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 8LL))(*(_QWORD *)v2);
      *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, 0);
    }
  }
}
