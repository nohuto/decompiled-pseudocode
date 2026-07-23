/*
 * XREFs of sub_14052B860 @ 0x14052B860
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_14038A10C @ 0x14038A10C (sub_14038A10C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14052B218 @ 0x14052B218 (sub_14052B218.c)
 *     sub_14052B630 @ 0x14052B630 (sub_14052B630.c)
 */

__int64 __fastcall sub_14052B860(signed __int32 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdi
  int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r10d
  int v18; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  _BYTE v25[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-24h] BYREF
  __int64 v27[4]; // [rsp+38h] [rbp-20h] BYREF

  v26 = 0;
  v27[0] = 0LL;
  v25[0] = 0;
  v9 = sub_140252344(&qword_140C4D048);
  v11 = sub_14038A10C(a2, v10, v27);
  if ( v11 >= 0 )
  {
    v12 = v27[0];
    if ( !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v27[0] + 32), HIDWORD(KeGetPcr()[1].LockArray)) )
    {
      v11 = -1073741637;
      goto LABEL_21;
    }
    if ( v12 && *(_DWORD *)v12 == 32 && a1 == 1 )
    {
      *a4 = -1;
      *a5 = -1073741591;
      *a3 = 2;
LABEL_8:
      v11 = 0;
      goto LABEL_21;
    }
    v11 = sub_14052B218(a1, v12, &v26, v25);
    if ( v11 < 0 )
      goto LABEL_21;
    v13 = dword_140C49FE4;
    v14 = dword_140C49EA4;
    v15 = dword_140C49FE4 + dword_140C49EA4;
    if ( v25[0] )
    {
      v16 = v26;
      *a4 = v26;
      if ( v16 < v15 )
      {
        if ( v16 >= v14 )
          v16 = v16 - v14 + 6;
      }
      else
      {
        v16 = v16 - v13 - v14 + 10;
      }
      *a5 = v16;
      *a3 = *(_DWORD *)(v12 + 316);
      goto LABEL_8;
    }
    v17 = v26;
    *a4 = v26;
    v18 = v17;
    if ( v17 < v15 )
    {
      if ( v17 >= v14 )
        v18 = v17 - v14 + 6;
    }
    else
    {
      v18 = v17 - v13 - v14 + 10;
    }
    *a5 = v18;
    *a3 = *(_DWORD *)(v12 + 316);
    sub_14052B630(v17, 1, *(unsigned int *)(v12 + 24), *(_QWORD *)(v12 + 304), a1 == 0);
  }
LABEL_21:
  KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v23 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return (unsigned int)v11;
}
