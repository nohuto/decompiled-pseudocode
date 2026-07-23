/*
 * XREFs of sub_1405983C0 @ 0x1405983C0
 * Callers:
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405983C0(unsigned int *a1)
{
  unsigned int *v1; // rdi
  PVOID *v2; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // ebx
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  __int64 v12; // r8
  int v13; // eax

  v1 = a1;
  v2 = (PVOID *)(a1 + 528);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v4 = 0;
  do
  {
    if ( !*((_QWORD *)a1 + 2) || a1[13] )
    {
      a1 += 66;
    }
    else
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v5 = KeGetCurrentIrql();
          if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = *((_QWORD *)CurrentPrcb + 4375);
            v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
            *(_DWORD *)(v7 + 20) &= v8;
            if ( v9 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      KeWaitForMultipleObjects(8u, v2, WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(v1 + 544));
      a1 = v1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
    }
  }
  while ( a1 < (unsigned int *)v2 );
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = *((_QWORD *)v11 + 4375);
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v9 )
          sub_140418E4C((__int64)v11);
      }
    }
  }
  __writecr8(CurrentIrql);
  while ( (*v1 & 0x80000000) == 0 )
  {
    v1 += 66;
    if ( v1 >= (unsigned int *)v2 )
      return v4;
  }
  return *v1;
}
