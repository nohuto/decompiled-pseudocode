/*
 * XREFs of sub_14069C820 @ 0x14069C820
 * Callers:
 *     sub_14069C1E0 @ 0x14069C1E0 (sub_14069C1E0.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_14069CAE8 @ 0x14069CAE8 (sub_14069CAE8.c)
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_14069D2C0 @ 0x14069D2C0 (sub_14069D2C0.c)
 *     sub_14072A6B0 @ 0x14072A6B0 (sub_14072A6B0.c)
 */

__int64 __fastcall sub_14069C820(__int16 a1, signed __int64 **a2)
{
  __int64 v3; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rsi
  __int64 ProcessServerSilo; // rbx
  __int64 ThreadServerSilo; // r12
  signed __int64 *v9; // r8
  signed __int64 v10; // rdx
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v14; // rax
  void *v15; // rbx
  bool v16; // bp
  _QWORD v17[9]; // [rsp+40h] [rbp-48h] BYREF
  char v18; // [rsp+98h] [rbp+10h] BYREF
  char v19; // [rsp+A0h] [rbp+18h] BYREF
  char v20; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *((_QWORD *)CurrentThread + 68);
  ProcessServerSilo = PsGetProcessServerSilo(v6);
  ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
  v16 = ProcessServerSilo != ThreadServerSilo;
  if ( (*((_DWORD *)CurrentThread + 344) & 8) != 0 && (a1 & 0x800) == 0 )
  {
    if ( ProcessServerSilo != ThreadServerSilo )
      goto LABEL_14;
    v14 = (_QWORD *)sub_14072A6B0(CurrentThread, 1LL, 1953261124LL, &v19, &v18, &v20, 0LL);
    v15 = v14;
    if ( !v14 )
      goto LABEL_3;
    if ( v14[3] == 999LL )
    {
      v16 = 1;
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      goto LABEL_14;
    }
    v17[0] = 0LL;
    if ( (int)sub_14069CC40(v14, v17) >= 0 )
      v3 = v17[0];
    ObfDereferenceObjectWithTag(v15, 0x746C6644u);
    if ( v3 )
      return v3;
  }
  if ( !v16 )
  {
LABEL_3:
    v9 = (signed __int64 *)(v6 + 1416);
    goto LABEL_4;
  }
LABEL_14:
  v9 = (signed __int64 *)sub_140204738(ThreadServerSilo);
LABEL_4:
  *a2 = v9;
  _m_prefetchw(v9);
  v10 = *v9;
  if ( (*v9 & 0xF) == 0 )
    goto LABEL_21;
  do
  {
    v11 = _InterlockedCompareExchange64(v9, v10 - 1, v10);
    if ( v10 == v11 )
      break;
    v10 = v11;
  }
  while ( (v11 & 0xF) != 0 );
  if ( (v10 & 0xF) != 0 )
    v12 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  else
LABEL_21:
    v12 = sub_14069D2C0(v9);
  if ( v12 || v16 )
    return v12;
  *a2 = 0LL;
  return sub_14069CAE8();
}
