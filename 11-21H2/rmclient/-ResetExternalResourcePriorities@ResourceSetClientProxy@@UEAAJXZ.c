/*
 * XREFs of ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180020540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180018778 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::ResetExternalResourcePriorities(ResourceSetClientProxy *this)
{
  unsigned int v2; // r8d
  int *v3; // r10
  char *v4; // r9
  int v5; // eax
  char v7[1136]; // [rsp+20h] [rbp-488h] BYREF

  `vector constructor iterator'(
    v7,
    24LL,
    47LL,
    (void (__fastcall *)(char *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  memset_0(v7, 0, 0x468uLL);
  v2 = 3;
  v3 = (int *)((char *)this + 204);
  v4 = v7;
  do
  {
    v5 = *v3++;
    *(_DWORD *)v4 = v2++;
    *((_DWORD *)v4 + 4) = v5;
    v4 += 24;
  }
  while ( v2 < 0x32 );
  return (*(__int64 (__fastcall **)(ResourceSetClientProxy *, __int64, char *, char *))(*(_QWORD *)this + 112LL))(
           this,
           47LL,
           v7,
           v4);
}
