/*
 * XREFs of sub_140721910 @ 0x140721910
 * Callers:
 *     sub_140721878 @ 0x140721878 (sub_140721878.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14053F16C @ 0x14053F16C (sub_14053F16C.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     sub_14071EDD4 @ 0x14071EDD4 (sub_14071EDD4.c)
 *     sub_140721B0C @ 0x140721B0C (sub_140721B0C.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 */

__int64 __fastcall sub_140721910(__int64 a1, __int64 a2, __int64 a3, int a4, __int128 *a5)
{
  __int64 v6; // rdx
  volatile signed __int64 *v10; // r14
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 i; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  bool v26; // zf
  __int128 v27; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(unsigned __int16 *)(a1 + 2);
  *((_QWORD *)&v27 + 1) = &v27;
  *(_QWORD *)&v27 = &v27;
  v10 = (volatile signed __int64 *)(a2 + 1680);
  v11 = sub_140721CE0(a1, v6);
  ExAcquirePushLockExclusiveEx(a2 + 1680, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  for ( i = *(_QWORD *)(a2 + 1592); i; i = *(_QWORD *)i )
  {
    v15 = *(_QWORD *)(i + 32);
    if ( (*(_DWORD *)(v15 + 8) & 0x7FE00000u) > (*(_DWORD *)(v11 + 8) & 0x7FE00000u) )
      break;
    if ( (a4 & *(_DWORD *)(i + 48) & 0x3FFFFFFF) != 0 && ((*(_DWORD *)(i + 48) & 0x40000000) != 0 || v15 == v11) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(i + 40) + 56LL);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v16) && (!v16 || (unsigned int)sub_14053F16C(v16)) )
      {
        v17 = *(_QWORD *)(i + 32);
        v18 = v11;
        v19 = (*(_DWORD *)(v17 + 8) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(v11 + 8) >> 21) & 0x3FFu) > v19 )
        {
          do
            v18 = *(_QWORD *)(v18 + 72);
          while ( ((*(_DWORD *)(v18 + 8) >> 21) & 0x3FFu) > v19 );
        }
        if ( v18 == v17 && sub_14071EDD4(i, a1, a3) )
          sub_14071C288(i, v20, v21, 0x10Cu, 0, &v27, a5);
      }
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v24 = *((_QWORD *)CurrentPrcb + 4375);
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v26 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  sub_1402AFC00((ULONG_PTR)v10);
  return sub_140721B0C(&v27);
}
