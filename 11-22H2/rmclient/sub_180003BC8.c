/*
 * XREFs of sub_180003BC8 @ 0x180003BC8
 * Callers:
 *     ??0UMSFreeThreadProxy@details@Concurrency@@QEAA@PEAUIThreadProxyFactory@12@PEAXI@Z @ 0x180003B68 (--0UMSFreeThreadProxy@details@Concurrency@@QEAA@PEAUIThreadProxyFactory@12@PEAXI@Z.c)
 * Callees:
 *     sub_180004410 @ 0x180004410 (sub_180004410.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180003BC8(__int64 a1)
{
  __int64 v2; // rcx

  sub_180004410(a1 + 8);
  *(_QWORD *)(a1 + 120) = 0LL;
  v2 = qword_1800328E0;
  *(_QWORD *)a1 = off_1800203F0;
  *(_QWORD *)(a1 + 8) = off_180020470;
  *(_QWORD *)(a1 + 40) = off_1800204B8;
  *(_QWORD *)(a1 + 48) = off_180020430;
  *(_QWORD *)(a1 + 56) = off_180020380;
  *(_QWORD *)(a1 + 64) = off_1800203B8;
  *(_DWORD *)(a1 + 108) = 1;
  *(_DWORD *)(a1 + 128) = 4;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
