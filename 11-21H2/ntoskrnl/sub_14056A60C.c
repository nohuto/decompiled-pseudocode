/*
 * XREFs of sub_14056A60C @ 0x14056A60C
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057AA10 @ 0x14057AA10 (sub_14057AA10.c)
 */

__int64 __fastcall sub_14056A60C(int *a1, _BYTE *a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rax
  int v19; // r10d
  unsigned int v20; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER v21; // [rsp+28h] [rbp-8h] BYREF
  char v22; // [rsp+60h] [rbp+30h] BYREF
  char v23; // [rsp+68h] [rbp+38h] BYREF

  v20 = 0;
  v21.QuadPart = 0LL;
  v22 = 0;
  v23 = 0;
  memset(a2, 0, 0x88uLL);
  result = sub_14042A5E0(&v20, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ((v20 - 209) & 0xFFFFFFFD) != 0 )
    {
      *a1 = 5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      if ( v20 <= 0xFF
        && (_mm_lfence(), CurrentPrcb = KeGetCurrentPrcb(),
                          (v8 = (_QWORD *)*((_QWORD *)CurrentPrcb + v20 + 1664)) != 0LL) )
      {
        v9 = 0LL;
        v10 = (_QWORD *)*((_QWORD *)CurrentPrcb + v20 + 1664);
        do
        {
          v11 = v10[4];
          if ( v11 || (v11 = v10[3]) != 0 )
            *(_QWORD *)&a2[8 * v9] = v11;
          v12 = v10[1];
          v9 = (unsigned int)(v9 + 1);
          if ( !v12 )
            break;
          v10 = (_QWORD *)(v12 - 8);
          if ( v10 == v8 )
            break;
        }
        while ( (unsigned int)v9 < 3 );
      }
      else
      {
        *a1 = 2;
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = *((_QWORD *)v14 + 4375);
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C((__int64)v14);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v18 = KeQueryInterruptTimePrecise(&v21);
      if ( (unsigned int)sub_14057AA10(v18, &v22, &v23) )
      {
        v19 = 6;
        *a2 = v22;
        a2[2] = v23;
      }
      else
      {
        v19 = 1;
      }
      *a1 = v19;
    }
  }
  else
  {
    if ( (_DWORD)result != -1073741823 )
      return result;
    *a1 = 0;
  }
  return 0LL;
}
