/*
 * XREFs of sub_1402AE1B0 @ 0x1402AE1B0
 * Callers:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     IoQueueThreadIrp @ 0x140389E20 (IoQueueThreadIrp.c)
 *     sub_140705F30 @ 0x140705F30 (sub_140705F30.c)
 *     sub_14070FC40 @ 0x14070FC40 (sub_14070FC40.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_140748D6C @ 0x140748D6C (sub_140748D6C.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x1409363B0 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     sub_14093FC6C @ 0x14093FC6C (sub_14093FC6C.c)
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 */

__int64 __fastcall sub_1402AE1B0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 152);
  v2 = (_QWORD *)(a1 + 32);
  v3 = (__int64 *)(v1 + 1280);
  v4 = (volatile signed __int32 *)(v1 + 1496);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A310(v4);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v14 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v14 + 1;
        if ( v14 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v4, 0LL) )
    {
      v13 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v15 = *(_DWORD *)(v13 + 24) - 1;
          *(_DWORD *)(v13 + 24) = v15;
          if ( !v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      sub_140211E70(v4);
    }
  }
  v8 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v2 = v8;
  v2[1] = v3;
  *(_QWORD *)(v8 + 8) = v2;
  *v3 = (__int64)v2;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14056E8CC(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  v9 = KeGetCurrentPrcb();
  v10 = *((_QWORD *)v9 + 4375);
  if ( v10 )
  {
    if ( *((_BYTE *)v9 + 32) <= 1u )
    {
      v16 = *(_DWORD *)(v10 + 24) - 1;
      *(_DWORD *)(v10 + 24) = v16;
      if ( !v16 )
        sub_140418E4C(v9);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(v18);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
