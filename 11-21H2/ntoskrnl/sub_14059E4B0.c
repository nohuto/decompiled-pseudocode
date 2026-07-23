/*
 * XREFs of sub_14059E4B0 @ 0x14059E4B0
 * Callers:
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14096F788 @ 0x14096F788 (sub_14096F788.c)
 *     sub_140970668 @ 0x140970668 (sub_140970668.c)
 *     sub_1409706E4 @ 0x1409706E4 (sub_1409706E4.c)
 */

__int64 __fastcall sub_14059E4B0(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, int a5, int a6, int a7)
{
  __int64 v8; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  int v18; // esi
  __int64 result; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2[12];
  if ( !a7 && (dword_140D06880 & 0x1000) == 0 )
  {
    if ( a5 )
    {
      if ( (*(_DWORD *)(a3 + 8) & 0xFFF) == 0 )
      {
        v11 = ExAcquireSpinLockExclusive(&dword_140C4F100);
        v12 = **(_QWORD **)(a1 + 40);
        if ( !v12 || (*(_DWORD *)(v12 + 56) & 3) == 0 && (*(_BYTE *)(v12 + 62) & 0xC) != 4 )
          *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 4;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v15 = *((_QWORD *)CurrentPrcb + 4375);
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
              *(_DWORD *)(v15 + 20) &= v16;
              if ( v17 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
    }
    else
    {
      *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 4;
    }
  }
  if ( a6 )
    *(_QWORD *)(v8 + 48) |= 1uLL;
  if ( (*((_BYTE *)a2 + 62) & 0xC) == 4 )
  {
    a2[8] = a1;
    v18 = sub_1409706E4(a2);
    sub_140276A48(a2 + 8, 0LL);
    if ( v18 >= 0 )
    {
      sub_140970668((PVOID)a4);
      return (unsigned int)v18;
    }
    if ( v18 != -1073741800 )
      return (unsigned int)v18;
    *((_BYTE *)a2 + 62) &= 0xF3u;
  }
  if ( a6 )
  {
    v20 = *a2;
    v21 = 0LL;
    result = sub_14096F788(a1, (unsigned int)(*(_DWORD *)(v20 + 8) << 12), a4, &v21);
    if ( (int)result < 0 )
      return result;
    a4 = v21;
  }
  *(_QWORD *)(v8 + 48) |= a4;
  *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 8;
  return 0LL;
}
