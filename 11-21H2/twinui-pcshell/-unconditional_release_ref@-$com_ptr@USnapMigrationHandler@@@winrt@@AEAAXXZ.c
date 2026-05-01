/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@USnapMigrationHandler@@@winrt@@AEAAXXZ @ 0x1805A8DC0
 * Callers:
 *     ??$?RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@12345@@_lambda_688536045750b024e9c980c09e4232a8_@@QEBAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@Z @ 0x1805A80DC (--$-RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindo.c)
 *     ??1?$com_ptr@USnapMigrationHandler@@@winrt@@QEAA@XZ @ 0x1805A842C (--1-$com_ptr@USnapMigrationHandler@@@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18015C94C (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int64 __fastcall winrt::com_ptr<SnapMigrationHandler>::unconditional_release_ref(
        volatile signed __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int64 *v4; // rbx
  signed __int64 result; // rax
  int v6; // ecx
  signed __int64 v7; // rtt

  v4 = *a1;
  *a1 = 0LL;
  result = *((_QWORD *)v4 + 1);
  while ( result >= 0 )
  {
    v6 = result - 1;
    v7 = result;
    result = _InterlockedCompareExchange64(v4 + 1, result - 1, result);
    if ( v7 == result )
      goto LABEL_6;
  }
  result = winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * result), a2, a3, a4);
  v6 = result;
LABEL_6:
  if ( !v6 )
  {
    result = _InterlockedExchange64(v4 + 1, 1LL);
    if ( v4 )
      return (*(__int64 (__fastcall **)(volatile signed __int64 *, __int64))(*v4 + 8))(v4, 1LL);
  }
  return result;
}
