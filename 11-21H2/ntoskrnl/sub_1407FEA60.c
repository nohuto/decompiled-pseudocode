/*
 * XREFs of sub_1407FEA60 @ 0x1407FEA60
 * Callers:
 *     sub_14095A67C @ 0x14095A67C (sub_14095A67C.c)
 *     sub_140A6BCF0 @ 0x140A6BCF0 (sub_140A6BCF0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 *     sub_14038B744 @ 0x14038B744 (sub_14038B744.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1407FE9A0 @ 0x1407FE9A0 (sub_1407FE9A0.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407FEA60(int a1, int a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  __int64 v6; // rbx
  char v10; // r12
  __int64 Pool2; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v22[4]; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+4Ch] [rbp-14h]
  __int128 v25; // [rsp+50h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  Timeout.QuadPart = -1500000000LL;
  v10 = *((_BYTE *)CurrentThread + 562);
  if ( v10 )
  {
    if ( a1 == 7 )
      return 3221225485LL;
    if ( !SeSinglePrivilegeCheck(stru_140D3CAB8, *((_BYTE *)CurrentThread + 562)) )
      return 3221225569LL;
  }
  if ( a2 > 7 || a1 > 7 || (a3 & 0x10000000) != 0 || a1 == 2 && a2 >= 5 || (a3 & 0xCFFFFC0) != 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 4) > 2 && PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  v22[2] = 0;
  v22[0] = a1;
  v22[1] = a3;
  v24 = 128;
  v25 = 0LL;
  if ( !v10 && a1 == 6 && (a3 & 0x3000000) != 0 )
  {
    v23 = 15;
  }
  else
  {
    v23 = 4;
    sub_1407FE9A0(a1, a2);
  }
  if ( !a4 )
  {
    Pool2 = ExAllocatePool2(64LL, 56LL, 1466122576LL);
    v6 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 48) = &v23;
    KeInitializeEvent((PRKEVENT)Pool2, NotificationEvent, 0);
    v24 |= 0x20u;
    *(_QWORD *)&v25 = v6;
  }
  if ( (unsigned int)(a1 - 4) <= 2 && (BYTE8(xmmword_140C54798) & 8) == 0 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C24600);
    BYTE8(xmmword_140C54798) |= 8u;
    LOBYTE(xmmword_140C548E0) = dword_140C227D4;
    sub_1403697C8(8);
    sub_1402935D0((ULONG_PTR)&qword_140C24600);
  }
  sub_140A48330(a1);
  sub_1407FEC6C((unsigned int)&v23, 0, (unsigned int)v22, a2, 1);
  sub_140A47CF8(v14, v13);
  sub_14038B744(a1);
  if ( v6 )
  {
    v15 = v6 + 32;
    if ( !*(_QWORD *)(v6 + 32) )
      goto LABEL_23;
    v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, &Timeout);
    if ( v5 == 258 && (byte_140C227C1 & 3) != 0 )
      v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, 0LL);
    sub_140A48330(v16);
    v18 = *(_QWORD *)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || (v19 = *(_QWORD **)(v6 + 40), *v19 != v15) )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    sub_140A47CF8(v18, v17);
    if ( v5 >= 0 )
    {
LABEL_23:
      v5 = *(_DWORD *)(v6 + 24);
      if ( v5 >= 0 )
        v5 = 0;
    }
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return (unsigned int)v5;
}
