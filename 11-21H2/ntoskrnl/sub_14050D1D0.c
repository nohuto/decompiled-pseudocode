/*
 * XREFs of sub_14050D1D0 @ 0x14050D1D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050D91C @ 0x14050D91C (sub_14050D91C.c)
 */

__int64 __fastcall sub_14050D1D0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int *v9; // rdx
  int *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  bool v18; // zf
  LARGE_INTEGER v19; // [rsp+30h] [rbp+8h] BYREF

  byte_140C4C7D8 = sub_140252344(&qword_140C4C7D0);
  v2 = sub_140303720(*(__int64 *)&qword_140C4C7E0);
  sub_14042A5E0(v2, v3);
  if ( (unsigned __int8)sub_14042A5E0(v5, v4) )
    goto LABEL_21;
  if ( *(_QWORD *)&qword_140C4C7A0 == a1 )
  {
    v6 = **(_QWORD **)&qword_140C4C7A0;
    if ( *(int **)(*(_QWORD *)&qword_140C4C7A0 + 8LL) != &qword_140C4C7A0
      || *(_QWORD *)(v6 + 8) != *(_QWORD *)&qword_140C4C7A0 )
    {
      goto LABEL_19;
    }
    *(_QWORD *)&qword_140C4C7A0 = **(_QWORD **)&qword_140C4C7A0;
    *(_QWORD *)(v6 + 8) = &qword_140C4C7A0;
    if ( *(_QWORD *)(a1 + 40) )
    {
      v19.QuadPart = 0LL;
      v7 = KeQueryInterruptTimePrecise(&v19);
      v8 = *(_QWORD *)(a1 + 32);
      if ( v8 <= v7 )
      {
        do
          v8 += *(_QWORD *)(a1 + 40);
        while ( v8 <= v7 );
        *(_QWORD *)(a1 + 32) = v8;
      }
      v9 = *(int **)&qword_140C4C7A0;
      v10 = &qword_140C4C7A0;
      while ( v9 != &qword_140C4C7A0 && v8 >= *((_QWORD *)v9 + 4) )
      {
        v10 = v9;
        v9 = *(int **)v9;
      }
      v11 = *(_QWORD *)v10;
      if ( *(int **)(*(_QWORD *)v10 + 8LL) == v10 )
      {
        *(_QWORD *)a1 = v11;
        *(_QWORD *)(a1 + 8) = v10;
        *(_QWORD *)(v11 + 8) = a1;
        *(_QWORD *)v10 = a1;
        goto LABEL_15;
      }
LABEL_19:
      __fastfail(3u);
    }
    *(_BYTE *)(a1 + 24) = 0;
  }
LABEL_15:
  if ( *(int **)&qword_140C4C7A0 == &qword_140C4C7A0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&qword_140C4C7E0 + 228LL) != 3 )
    {
      v12 = sub_140303720(*(__int64 *)&qword_140C4C7E0);
      sub_14042A5E0(v12, v13);
    }
  }
  else
  {
    sub_14050D91C();
  }
LABEL_21:
  v14 = (unsigned __int8)byte_140C4C7D8;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4C7D0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v18 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v18 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v14);
  return result;
}
