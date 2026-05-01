/*
 * XREFs of sub_180011F28 @ 0x180011F28
 * Callers:
 *     sub_180011320 @ 0x180011320 (sub_180011320.c)
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011F28(int a1, __int16 a2, int a3)
{
  FARPROC RtlNotifyFeatureUsage; // rax
  HMODULE v4; // rax
  int v6; // [rsp+48h] [rbp+20h] BYREF
  __int16 v7; // [rsp+4Ch] [rbp+24h]
  __int16 v8; // [rsp+4Eh] [rbp+26h]

  v8 = 0;
  v6 = a1;
  v7 = a2;
  if ( a3 )
    v8 |= 1u;
  RtlNotifyFeatureUsage = (FARPROC)qword_1800328E8;
  if ( qword_1800328E8 )
    return ((__int64 (__fastcall *)(int *))RtlNotifyFeatureUsage)(&v6);
  v4 = sub_180011BC4();
  RtlNotifyFeatureUsage = GetProcAddress(v4, "RtlNotifyFeatureUsage");
  qword_1800328E8 = (__int64)RtlNotifyFeatureUsage;
  if ( RtlNotifyFeatureUsage )
    return ((__int64 (__fastcall *)(int *))RtlNotifyFeatureUsage)(&v6);
  else
    return 3221225785LL;
}
