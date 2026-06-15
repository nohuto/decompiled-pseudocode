/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003DB94
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003F954 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180042EDC (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180017782 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180017838 (memset_0.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18003FBC0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800400FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     memcpy_0 @ 0x180048B1C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned int a2)
{
  char *v2; // rbp
  int v5; // esi
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  void *v10; // rbx
  size_t v11; // r8

  v2 = (char *)*a1;
  v5 = *((_DWORD *)*a1 - 4);
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 - 3)
                                                                                            + 32LL))(*((_QWORD *)*a1 - 3));
  v7 = (**v6)(v6, a2, 2LL);
  v9 = v7;
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v10 = (void *)(v7 + 24);
  if ( v5 < (int)a2 )
    a2 = v5;
  v11 = 2LL * (int)(a2 + 1);
  if ( v11 )
  {
    if ( v7 != -24 )
    {
      if ( v2 )
      {
        memcpy_0(v10, v2, v11);
        goto LABEL_11;
      }
      memset_0(v10, 0, v11);
    }
    *(_DWORD *)_o__errno(v8) = 22;
    invalid_parameter_noinfo();
  }
LABEL_11:
  *(_DWORD *)(v9 + 8) = v5;
  ATL::CStringData::Release((ATL::CStringData *)(v2 - 24));
  *a1 = v10;
}
