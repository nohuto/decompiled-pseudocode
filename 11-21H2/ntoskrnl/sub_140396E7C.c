/*
 * XREFs of sub_140396E7C @ 0x140396E7C
 * Callers:
 *     sub_140806424 @ 0x140806424 (sub_140806424.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405DD718 @ 0x1405DD718 (sub_1405DD718.c)
 */

__int64 __fastcall sub_140396E7C(__int64 a1, _QWORD *a2, __int128 *a3, _OWORD *a4)
{
  KIRQL v7; // al
  __int64 v8; // rcx
  char v9; // si
  unsigned __int64 v10; // rbx
  __int128 v11; // xmm0
  _OWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  bool v18; // zf

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
  v9 = byte_140C1CC10;
  v10 = v7;
  if ( byte_140C1CC10 )
    sub_1405DD718(v8, 0LL);
  v11 = xmmword_140C1CD10;
  *a2 = qword_140C1CC18;
  *a3 = v11;
  a3[1] = xmmword_140C1CD20;
  a3[2] = xmmword_140C1CD30;
  a3[3] = xmmword_140C1CD40;
  a3[4] = xmmword_140C1CD50;
  a3[5] = xmmword_140C1CD60;
  a3[6] = xmmword_140C1CD70;
  *a4 = xmmword_140C1CC30[0];
  a4[1] = xmmword_140C1CC30[1];
  a4[2] = xmmword_140C1CC30[2];
  a4[3] = xmmword_140C1CC30[3];
  a4[4] = xmmword_140C1CC30[4];
  a4[5] = xmmword_140C1CC30[5];
  a4[6] = xmmword_140C1CC30[6];
  v12 = a4 + 8;
  *(v12 - 1) = xmmword_140C1CC30[7];
  *v12 = xmmword_140C1CC30[8];
  v12[1] = xmmword_140C1CC30[9];
  v12[2] = xmmword_140C1CC30[10];
  v12[3] = xmmword_140C1CC30[11];
  v12[4] = xmmword_140C1CC30[12];
  v12[5] = xmmword_140C1CC30[13];
  qword_140C1CC18 = 0LL;
  memset(&xmmword_140C1CD10, 0, 0x70uLL);
  memset(xmmword_140C1CC30, 0, sizeof(xmmword_140C1CC30));
  if ( v9 )
  {
    LOBYTE(v13) = 1;
    sub_1405DD718(v14, v13);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1CB90);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v18 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v18 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return result;
}
