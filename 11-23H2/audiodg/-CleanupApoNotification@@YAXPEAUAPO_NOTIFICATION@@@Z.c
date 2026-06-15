/*
 * XREFs of ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x14006F7DC
 * Callers:
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___::__Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___ @ 0x14002D4C0 (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___--__Temp.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___::_Destroy @ 0x14002D900 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___--_Destro.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_fb374d45151f083911fef4d31606bded___::_Destroy @ 0x140038470 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_fb374d45151f083911fef4d31606bded___--_Destro.c)
 *     _lambda_d3d8473ab69012044bcca3ea676e23db_::operator() @ 0x14003859C (_lambda_d3d8473ab69012044bcca3ea676e23db_--operator().c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___::__Temporary_owner_del_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___ @ 0x14006B998 (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___--__Temp.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CleanupApoNotification(struct APO_NOTIFICATION *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void **v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = *(_DWORD *)a1 - 1;
  if ( !v2 )
  {
    v13 = *((_QWORD *)a1 + 1);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v10 = (void *)*((_QWORD *)a1 + 2);
    if ( v10 )
      goto LABEL_24;
    return;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v12 = *((_QWORD *)a1 + 1);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v6 = *((_QWORD *)a1 + 2);
    goto LABEL_7;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v11 = *((_QWORD *)a1 + 1);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v6 = *((_QWORD *)a1 + 5);
LABEL_7:
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 != 2 )
      return;
    v6 = *((_QWORD *)a1 + 1);
    goto LABEL_7;
  }
  v7 = *((_QWORD *)a1 + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (void **)*((_QWORD *)a1 + 2);
  if ( v8 )
  {
    v9 = *v8;
    if ( v9 )
      operator delete(v9);
    v10 = (void *)*((_QWORD *)a1 + 2);
LABEL_24:
    operator delete(v10);
  }
}
