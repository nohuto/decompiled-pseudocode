/*
 * XREFs of sub_14038BFAC @ 0x14038BFAC
 * Callers:
 *     sub_14038BF94 @ 0x14038BF94 (sub_14038BF94.c)
 *     sub_14056CB60 @ 0x14056CB60 (sub_14056CB60.c)
 * Callees:
 *     sub_14022F864 @ 0x14022F864 (sub_14022F864.c)
 *     sub_14022FA04 @ 0x14022FA04 (sub_14022FA04.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 *     sub_14056CFD8 @ 0x14056CFD8 (sub_14056CFD8.c)
 */

__int64 __fastcall sub_14038BFAC(__int64 a1, __int64 a2)
{
  char v2; // di
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // esi
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER v19; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0LL;
  v19.QuadPart = 0LL;
  v4 = dword_140D31000;
  result = (unsigned int)dword_140C2B1C0;
  if ( *((_DWORD *)CurrentPrcb + 9) == (_DWORD)dword_140C2B1C0 )
  {
    v2 = 1;
  }
  else if ( !byte_140D068E5 )
  {
    goto LABEL_6;
  }
  sub_14042A5E0(a1, a2);
  LOBYTE(v7) = 1;
  if ( !byte_140D06889 )
    LOBYTE(v7) = v2;
  result = sub_14042A5E0(v7, v6);
  *((_BYTE *)CurrentPrcb + 37128) = 1;
  if ( !v2 )
  {
LABEL_6:
    if ( !byte_140D06889 )
      return result;
    goto LABEL_10;
  }
  ++dword_140C2B144;
  *((_BYTE *)CurrentPrcb + 33) = 1;
LABEL_10:
  if ( byte_140D06889 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    sub_14056CF48((_DWORD)CurrentPrcb, -DesiredTime, DesiredTime, 3, 1, 0);
    if ( v2 || !dword_140D05038 )
    {
      LOBYTE(v11) = v2;
      sub_14056CFD8(CurrentPrcb, v11);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = *((_QWORD *)v13 + 4375);
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(v13);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  v8 = KeQueryInterruptTimePrecise(&v19);
  result = sub_14022F864(v8, &v18, (int *)&v17);
  if ( v2 )
  {
    if ( v4 == 2 )
      LOBYTE(v4) = _InterlockedExchange(&dword_140D31000, 0);
    sub_14022FA04(0, v4, &v17, &v18);
    result = v8 + (unsigned int)dword_140D06938;
    qword_140C2B1A0 = result;
  }
  *((_QWORD *)CurrentPrcb + 4624) = v8 + v17;
  return result;
}
