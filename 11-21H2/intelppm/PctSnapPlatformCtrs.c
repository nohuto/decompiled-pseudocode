/*
 * XREFs of PctSnapPlatformCtrs @ 0x1C0024AA0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00013E0 (ReadGenAddr.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     ReadGenAddrHidden @ 0x1C0007250 (ReadGenAddrHidden.c)
 *     PctPlatformCounterState @ 0x1C0024EC0 (PctPlatformCounterState.c)
 */

__int64 __fastcall PctSnapPlatformCtrs(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r15
  unsigned __int16 v5; // bp
  unsigned int v6; // esi
  __int128 *v7; // rbx
  __int64 v8; // r14
  unsigned __int64 GenAddrHidden; // rax
  unsigned __int64 v10; // r15
  void (__fastcall *v11)(__int64, _QWORD, unsigned __int64); // rax
  char v13; // [rsp+20h] [rbp-68h]
  char v14; // [rsp+21h] [rbp-67h]
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 1080) + 48LL;
  v16 = 0LL;
  v4 = a2;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (unsigned int)KeIsEmptyAffinityEx(v3) )
  {
    v14 = 0;
    v13 = 1;
  }
  else
  {
    v13 = 0;
    KeFirstGroupAffinityEx(&Affinity, *(_QWORD *)(a1 + 1080) + 48LL);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v14 = 1;
  }
  v5 = 0;
  v6 = 0;
  v7 = &xmmword_1C000F010;
  do
  {
    v8 = PctPlatformCounterState(a1, v6);
    if ( *(_BYTE *)v8 && (v4 & *((_QWORD *)v7 - 1)) != 0 )
    {
      ++v5;
      if ( v13 )
        GenAddrHidden = ReadGenAddrHidden(*(unsigned int *)(a1 + 84), (unsigned __int8 *)v7);
      else
        GenAddrHidden = ReadGenAddr((unsigned __int8 *)v7);
      v10 = GenAddrHidden;
      *(_QWORD *)(v8 + 8) = KeQueryInterruptTimePrecise(&v16);
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 24);
      *(_QWORD *)(v8 + 24) = v10;
      v11 = (void (__fastcall *)(__int64, _QWORD, unsigned __int64))*((_QWORD *)v7 + 2);
      if ( v11 )
        v11(a1, v6, v10);
      else
        *(_QWORD *)(v8 + 32) = v10;
      v4 = a2;
    }
    ++v6;
    v7 = (__int128 *)((char *)v7 + 40);
  }
  while ( v6 < 5 );
  if ( v14 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v5;
}
