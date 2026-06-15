/*
 * XREFs of ?CopyVolumeChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14006FD84
 * Callers:
 *     ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14006FB14 (-CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CopyVolumeChangeNotification(struct APO_NOTIFICATION *a1, struct APO_NOTIFICATION *a2)
{
  unsigned int *v4; // rbx
  size_t v5; // rsi
  void *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
  v4 = (unsigned int *)*((_QWORD *)a2 + 2);
  v5 = 4LL * v4[6] + 32;
  v6 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)a1 + 2) = v6;
  if ( v6 )
  {
    memcpy_0(v6, v4, v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
