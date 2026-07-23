/*
 * XREFs of sub_14025F4D4 @ 0x14025F4D4
 * Callers:
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 * Callees:
 *     sub_14025EC08 @ 0x14025EC08 (sub_14025EC08.c)
 *     sub_14026099C @ 0x14026099C (sub_14026099C.c)
 *     sub_1402829A8 @ 0x1402829A8 (sub_1402829A8.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406EBCCC @ 0x1406EBCCC (sub_1406EBCCC.c)
 *     sub_1406EC158 @ 0x1406EC158 (sub_1406EC158.c)
 *     sub_1406EC1C4 @ 0x1406EC1C4 (sub_1406EC1C4.c)
 *     sub_1406EC338 @ 0x1406EC338 (sub_1406EC338.c)
 *     sub_1406EC47C @ 0x1406EC47C (sub_1406EC47C.c)
 *     sub_1409D8CD4 @ 0x1409D8CD4 (sub_1409D8CD4.c)
 *     sub_1409D8CF8 @ 0x1409D8CF8 (sub_1409D8CF8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14025F4D4(char *Process)
{
  char *v1; // r13
  void **v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  int v24; // eax

  v1 = Process + 1664;
  v3 = 0LL;
  sub_1406EC338((PEPROCESS)Process);
  v4 = *(_QWORD *)(qword_140C51F48 + 8LL * *((unsigned __int16 *)v1 + 87));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1160));
  v6 = sub_1402829A8(v1);
  v8 = (__int64 *)v6;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v9 = -1073740682;
    }
    else if ( v6 == 2 )
    {
      v9 = -1073741558;
    }
    else
    {
      *(_QWORD *)(sub_140282AD0(v7) + 24) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1160));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = -1LL << ((unsigned __int8)v5 + 1);
            v13 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)v11;
            v20 = (v19 & *(_DWORD *)(v13 + 20)) == 0;
            v12 = (unsigned int)v19 & *(_DWORD *)(v13 + 20);
            *(_DWORD *)(v13 + 20) = v12;
            if ( v20 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      if ( *(_DWORD *)(v4 + 1176) )
      {
        sub_1406EBCCC(Process);
        sub_1406EC47C(0LL);
      }
      v14 = 0;
      if ( *((_QWORD *)Process + 286) && *(_QWORD *)(*v8 + 16) )
      {
        v3 = (void **)sub_14026099C(*v8, v11, v12, v13, 0LL);
        if ( v3 )
          v14 = (*(_BYTE *)(*v8 + 32) & 1) == 0;
        if ( (unsigned int)sub_1409D8CD4(Process) )
          v14 |= 4u;
      }
      sub_14025EC08(*v8, v14);
      if ( v3 )
        sub_1409D8CF8(*v3);
      v15 = v8[7];
      if ( v15 )
        sub_14025EC08(v15, 1);
      if ( v8[1] )
      {
        v8[5] = (__int64)v8;
        v8[4] = (__int64)sub_14097FF40;
        v8[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v8[6] = (__int64)Process;
        sub_1402EF060((ULONG_PTR)(v8 + 2));
      }
      else
      {
        sub_1406EC158(v4, v8);
      }
      LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1160));
      if ( sub_1402829A8(v1) == 1 )
        *(_QWORD *)(sub_140282AD0(v16) + 24) = 0LL;
      v9 = 0;
    }
  }
  else
  {
    v9 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1160));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = *((_QWORD *)v22 + 4375);
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v20 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v24;
        if ( v20 )
          sub_140418E4C(v22);
      }
    }
  }
  __writecr8((unsigned __int8)v5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  sub_1406EC1C4(v4);
  sub_1406EC338((PEPROCESS)Process);
  return v9;
}
