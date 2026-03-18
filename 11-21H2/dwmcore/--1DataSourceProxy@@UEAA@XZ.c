/*
 * XREFs of ??1DataSourceProxy@@UEAA@XZ @ 0x1801BC2CC
 * Callers:
 *     ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x1801BC420 (--_GDataSourceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@std@@@?$_List_node@PEAVCBaseExpression@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@PEAU01@@Z @ 0x1801BC0CC (--$_Free_non_head@V-$allocator@U-$_List_node@PEAVCBaseExpression@@PEAX@std@@@std@@@-$_List_node@.c)
 */

void __fastcall DataSourceProxy::~DataSourceProxy(DataSourceProxy *this)
{
  char *v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  v2 = (char *)*((_QWORD *)this + 25);
  v3 = (char *)*((_QWORD *)this + 26);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_QWORD *)v2;
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 16LL);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 64) = 0LL;
        *(_QWORD *)(v5 + 72) = 0LL;
        *(_BYTE *)(v5 + 80) &= ~1u;
        v4 = *(_QWORD *)v2;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = (char *)*((_QWORD *)this + 25);
  }
  *((_QWORD *)this + 26) = v2;
  *((_QWORD *)this + 24) = 0LL;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 27) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 20);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 16);
  std::_Deallocate<16,0>(
    *((void **)this + 11),
    (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
    v6,
    *((_QWORD ***)this + 9));
  std::_Deallocate<16,0>(*((void **)this + 9), 0x18uLL);
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
}
