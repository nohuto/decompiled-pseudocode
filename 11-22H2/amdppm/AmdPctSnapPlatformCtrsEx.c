/*
 * XREFs of AmdPctSnapPlatformCtrsEx @ 0x1C0002E8C
 * Callers:
 *     AmdResetCountersOnD0 @ 0x1C00030D0 (AmdResetCountersOnD0.c)
 *     AmdPctSnapPlatformCtrs @ 0x1C0020980 (AmdPctSnapPlatformCtrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     AmdPctEnumPlatfromCtr @ 0x1C0002DB0 (AmdPctEnumPlatfromCtr.c)
 *     AmdPctPlatformCounterState @ 0x1C0002E30 (AmdPctPlatformCounterState.c)
 *     ReadGenAddr @ 0x1C0003C2C (ReadGenAddr.c)
 *     ReadGenAddrHidden @ 0x1C0003CE0 (ReadGenAddrHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AmdPctSnapPlatformCtrsEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  char v5; // r12
  unsigned __int16 v6; // r13
  unsigned int i; // esi
  unsigned __int64 v8; // r15
  __int64 v9; // r10
  __int64 v10; // r14
  __int64 GenAddrHidden; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  wchar_t *v14; // rax
  char v16; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  v3 = a2;
  v19 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( a1[20] )
  {
    v5 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    KeProcessorGroupAffinity(&Affinity, a1[14]);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v5 = 1;
  }
  v6 = 0;
  for ( i = AmdPctEnumPlatfromCtr((__int64)a1, 0, 0x800000000000LL); i < a1[315]; ++i )
  {
    v8 = 48LL * i;
    v10 = AmdPctPlatformCounterState((__int64)a1, i);
    if ( *(_BYTE *)v10 && (v3 & *(_QWORD *)(v8 + v9 + 8)) != 0 )
    {
      ++v6;
      if ( v16 )
        GenAddrHidden = ReadGenAddrHidden(a1[21], v8 + v9 + 16);
      else
        GenAddrHidden = ReadGenAddr(v8 + v9 + 16);
      v12 = GenAddrHidden;
      *(_QWORD *)(v10 + 8) = KeQueryInterruptTimePrecise(&v19);
      v13 = v12;
      if ( !a3 )
        v13 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 16) = v13;
      *(_QWORD *)(v10 + 24) = v12;
      v14 = (&AmdPctPlatformCounterCfg)[v8 / 8 + 2];
      if ( v14 )
        ((void (__fastcall *)(unsigned int *, _QWORD, __int64))v14)(a1, i, v12);
      else
        *(_QWORD *)(v10 + 32) = v12;
      v3 = a2;
    }
  }
  if ( v5 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v6;
}
