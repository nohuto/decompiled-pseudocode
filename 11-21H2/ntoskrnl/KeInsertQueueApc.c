/*
 * XREFs of KeInsertQueueApc @ 0x1402ED9E0
 * Callers:
 *     sub_1402566A0 @ 0x1402566A0 (sub_1402566A0.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_14037AF3C @ 0x14037AF3C (sub_14037AF3C.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     sub_14059CFBC @ 0x14059CFBC (sub_14059CFBC.c)
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 *     sub_1406330FC @ 0x1406330FC (sub_1406330FC.c)
 *     sub_1406362D0 @ 0x1406362D0 (sub_1406362D0.c)
 *     sub_1406A1F70 @ 0x1406A1F70 (sub_1406A1F70.c)
 *     sub_1406A4C58 @ 0x1406A4C58 (sub_1406A4C58.c)
 *     sub_140701B0C @ 0x140701B0C (sub_140701B0C.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     sub_14079D948 @ 0x14079D948 (sub_14079D948.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 *     sub_14092B264 @ 0x14092B264 (sub_14092B264.c)
 *     sub_140962BA0 @ 0x140962BA0 (sub_140962BA0.c)
 *     sub_1409AD99C @ 0x1409AD99C (sub_1409AD99C.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14024BD24 @ 0x14024BD24 (sub_14024BD24.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     sub_1402EE784 @ 0x1402EE784 (sub_1402EE784.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  BOOLEAN v7; // al
  char v8; // r10
  BOOLEAN v9; // r11
  bool v10; // cl
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v13; // rax
  bool v14; // zf
  char v15; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // bl
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  bool v29; // [rsp+A0h] [rbp+8h]

  v7 = EtwProviderEnabled(qword_140C15E00, 0, 0x3000uLL);
  v8 = *(_BYTE *)(a1 + 81);
  v9 = v7;
  v27 = *(_QWORD *)(a1 + 56);
  v29 = v8 != 0;
  v28 = *(_QWORD *)(a1 + 48);
  v10 = *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32) == sub_140962BA0 && !v8;
  v11 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  v13 = *(_QWORD *)(v11 + 544);
  if ( v8 )
    v14 = *((_QWORD *)CurrentThread + 68) == v13;
  else
    v14 = *((_QWORD *)CurrentThread + 23) == v13;
  if ( v9 && !v14 && (v8 || v10) )
  {
    v15 = 1;
    ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x5149654Bu);
  }
  else
  {
    v15 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v22 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  while ( 1 )
  {
    v18 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v24 = *(_DWORD *)(v18 + 24);
        *(_DWORD *)(v18 + 24) = v24 + 1;
        if ( v24 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      break;
    v23 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v23 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v25 = *(_DWORD *)(v23 + 24) - 1;
        *(_DWORD *)(v23 + 24) = v25;
        if ( !v25 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v26);
    while ( *(_QWORD *)(v11 + 64) );
  }
  if ( (*(_DWORD *)(v11 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v20 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    sub_1402EE784(a1);
    LOBYTE(v19) = CurrentIrql;
    sub_1402EE894(CurrentPrcb, a1, v19);
    v20 = 1;
  }
  sub_140224100(v11);
  sub_1402B0820((__int64)CurrentPrcb, 0, 1, a4, CurrentIrql);
  if ( v15 )
  {
    if ( v20 )
      sub_14024BD24(*((_BYTE *)KeGetCurrentThread() + 562), v11, v28, v27, a2, a3, v29);
    ObfDereferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  return v20;
}
