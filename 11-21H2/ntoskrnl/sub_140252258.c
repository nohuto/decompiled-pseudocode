/*
 * XREFs of sub_140252258 @ 0x140252258
 * Callers:
 *     sub_140251EA0 @ 0x140251EA0 (sub_140251EA0.c)
 *     sub_1403915EC @ 0x1403915EC (sub_1403915EC.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 *     sub_14050C264 @ 0x14050C264 (sub_14050C264.c)
 *     sub_14050D048 @ 0x14050D048 (sub_14050D048.c)
 *     sub_140A521EC @ 0x140A521EC (sub_140A521EC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_1402523CC @ 0x1402523CC (sub_1402523CC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140252258(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // r14
  unsigned __int8 v7; // al
  __int64 *v8; // r9
  unsigned __int64 v9; // rbp
  __int64 *v10; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  bool v14; // zf
  unsigned int v15; // edi

  v6 = 0;
  v7 = sub_140252344(&qword_140C4AD90);
  v8 = (__int64 *)qword_140C4AD80;
  v9 = v7;
  if ( (__int64 *)qword_140C4AD80 != &qword_140C4AD80 )
  {
    while ( 1 )
    {
      v10 = v8;
      v8 = (__int64 *)*v8;
      if ( *((_DWORD *)v10 + 4) == *a1 && *((_DWORD *)v10 + 5) == a1[1] )
        break;
      if ( v8 == &qword_140C4AD80 )
        goto LABEL_4;
    }
    *(_QWORD *)a1 = v10[3];
    if ( a2 )
      *a2 = *((_DWORD *)v10 + 9);
    if ( a3 )
      *a3 = *((_DWORD *)v10 + 8);
    v6 = 1;
  }
LABEL_4:
  KeReleaseSpinLockFromDpcLevel(&qword_140C4AD90);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= result;
        if ( v14 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( !v6 )
  {
    result = qword_140C54A88;
    if ( *(_DWORD *)(qword_140C54A88 + 224) == 2 )
    {
      result = (unsigned int)(*a1 - 45056);
      if ( (unsigned int)result <= 1 )
      {
        v15 = a1[1] + 8;
        if ( *a1 != 45057 )
          v15 = a1[1];
        result = sub_1402523CC(v15, v15 + 1);
        if ( result )
        {
          a1[1] = v15 + *(_DWORD *)(result + 20) - *(_DWORD *)(result + 28);
          result = *(unsigned int *)(result + 16);
          *a1 = result;
        }
      }
    }
  }
  return result;
}
