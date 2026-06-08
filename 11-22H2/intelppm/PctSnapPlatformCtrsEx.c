/*
 * XREFs of PctSnapPlatformCtrsEx @ 0x1C0003AD4
 * Callers:
 *     PctResetCountersOnD0 @ 0x1C0003AB0 (PctResetCountersOnD0.c)
 *     PctSnapPlatformCtrs @ 0x1C0025940 (PctSnapPlatformCtrs.c)
 * Callees:
 *     PctPlatformCounterState @ 0x1C0001EE0 (PctPlatformCounterState.c)
 *     ReadGenAddr @ 0x1C0002000 (ReadGenAddr.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     ReadGenAddrHidden @ 0x1C0008970 (ReadGenAddrHidden.c)
 */

__int64 __fastcall PctSnapPlatformCtrsEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  unsigned __int8 *v6; // rdi
  unsigned __int16 v7; // r15
  unsigned int i; // esi
  __int64 v9; // rbp
  char v10; // r10
  unsigned __int64 GenAddrHidden; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(__int64, _QWORD, unsigned __int64); // rax
  char v16; // [rsp+20h] [rbp-68h]
  char v17; // [rsp+21h] [rbp-67h]
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  v20 = 0LL;
  v4 = *(_QWORD *)(a1 + 1080) + 48LL;
  v5 = a2;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (unsigned int)KeIsEmptyAffinityEx(v4) )
  {
    v17 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    KeFirstGroupAffinityEx(&Affinity, *(_QWORD *)(a1 + 1080) + 48LL);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v17 = 1;
  }
  v6 = (unsigned __int8 *)&unk_1C0010010;
  v7 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v9 = PctPlatformCounterState(a1, i);
    if ( *(_BYTE *)v9 != v10 && (v5 & *((_QWORD *)v6 - 1)) != 0 )
    {
      ++v7;
      if ( v16 )
        GenAddrHidden = ReadGenAddrHidden(*(unsigned int *)(a1 + 84), v6);
      else
        GenAddrHidden = ReadGenAddr(v6);
      v12 = GenAddrHidden;
      *(_QWORD *)(v9 + 8) = KeQueryInterruptTimePrecise(&v20);
      v13 = v12;
      if ( !a3 )
        v13 = *(_QWORD *)(v9 + 24);
      *(_QWORD *)(v9 + 16) = v13;
      *(_QWORD *)(v9 + 24) = v12;
      v14 = (void (__fastcall *)(__int64, _QWORD, unsigned __int64))*((_QWORD *)v6 + 2);
      if ( v14 )
        v14(a1, i, v12);
      else
        *(_QWORD *)(v9 + 32) = v12;
      v5 = a2;
    }
    v6 += 48;
  }
  if ( v17 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v7;
}
