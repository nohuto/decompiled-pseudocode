/*
 * XREFs of sub_140577D00 @ 0x140577D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020E67C @ 0x14020E67C (sub_14020E67C.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056AEA8 @ 0x14056AEA8 (sub_14056AEA8.c)
 *     sub_1405A6AE4 @ 0x1405A6AE4 (sub_1405A6AE4.c)
 */

__int64 sub_140577D00()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v1; // r12
  __int64 v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // r9
  __int64 v10; // r14
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  char v19; // [rsp+70h] [rbp+18h] BYREF
  char v20; // [rsp+78h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (_DWORD *)qword_140D06AE0;
  v19 = 0;
  v20 = 0;
  v2 = 16LL * *((unsigned int *)CurrentPrcb + 9) + qword_140D06AE0 + 360;
  _InterlockedExchange64((volatile __int64 *)v2, -1LL);
  *(_DWORD *)(v2 + 8) -= dword_140C2AD64;
  result = *(unsigned int *)(v2 + 8);
  if ( (int)result <= 0 )
  {
    v4 = &v1[4 * *(unsigned int *)(v2 + 12) + 90];
    if ( (volatile signed __int32 *)v2 != v4 && !_interlockedbittestandreset64(v4, *((unsigned int *)CurrentPrcb + 9)) )
    {
      v5 = 0LL;
      v6 = qword_140D088C0[*(unsigned int *)(v2 + 12)];
      v7 = *(_QWORD *)(v6 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      if ( sub_14056AEA8(v6, &v19) )
      {
        v10 = *(_QWORD *)(v6 + 8);
        if ( sub_14020E67C(v10, &v20) )
        {
          v5 = *(_QWORD *)(v10 + 184);
          if ( (_UNKNOWN *)v5 != &unk_140D32B00 )
            v5 &= -(__int64)(ObReferenceObjectSafeWithTag(*(_QWORD *)(v10 + 184)) != 0);
          sub_140224100(v10);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
        v11 = KeGetCurrentPrcb();
        v12 = *((_QWORD *)v11 + 4375);
        if ( v12 )
        {
          if ( *((_BYTE *)v11 + 32) <= 1u )
          {
            v13 = *(_DWORD *)(v12 + 24) - 1;
            *(_DWORD *)(v12 + 24) = v13;
            if ( !v13 )
              sub_140418E4C((__int64)v11);
          }
        }
      }
      if ( v7 == *(_QWORD *)(v6 + 8) )
        sub_1405A6AE4(v6);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = *((_QWORD *)v15 + 4375);
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v18 )
              sub_140418E4C((__int64)v15);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v5 )
      {
        if ( (_UNKNOWN *)v5 != &unk_140D32B00 )
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v5, 0x61727245u);
      }
    }
    *(_DWORD *)(v2 + 8) = *v1;
    result = (*(_DWORD *)(v2 + 12) + 1) / (unsigned int)dword_140D06884;
    *(_DWORD *)(v2 + 12) = (*(_DWORD *)(v2 + 12) + 1) % (unsigned int)dword_140D06884;
  }
  return result;
}
