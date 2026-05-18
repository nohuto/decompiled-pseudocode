/*
 * XREFs of sub_1800F5A40 @ 0x1800F5A40
 * Callers:
 *     sub_18011BAF0 @ 0x18011BAF0 (sub_18011BAF0.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void sub_1800F5A40()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD, __int64); // rax
  void *v2; // rbx

  while ( 1 )
  {
    v2 = lpMem;
    if ( !lpMem )
      break;
    v0 = *((_QWORD *)lpMem + 1);
    lpMem = *(LPVOID *)lpMem;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    if ( v1 )
      (**v1)(v1, 1LL);
    sub_18000B998(v2);
  }
}
