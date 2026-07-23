/*
 * XREFs of sub_140520330 @ 0x140520330
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_14038A10C @ 0x14038A10C (sub_14038A10C.c)
 *     sub_140399A14 @ 0x140399A14 (sub_140399A14.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14051FE4C @ 0x14051FE4C (sub_14051FE4C.c)
 */

__int64 __fastcall sub_140520330(int a1, int a2, _DWORD *a3, unsigned int *a4, int *a5)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // edi
  __int64 v13; // rbx
  int v14; // ecx
  __int64 v15; // rbp
  unsigned int v16; // ecx
  int v17; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned int v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v24 = 0;
  v9 = sub_140252344(&qword_140C4D048);
  v12 = sub_14038A10C(a2, v10, &v25);
  if ( v12 >= 0 )
  {
    v13 = v25;
    v14 = *(_DWORD *)(v25 + 312);
    if ( v14 != 37 && (int)sub_14038A10C(v14, v11, &v26) >= 0 )
    {
      v13 = v26;
      v25 = v26;
    }
    v15 = v25;
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v25 + 32), HIDWORD(KeGetPcr()[1].LockArray)) )
    {
      v12 = sub_14051FE4C(a1, v13, a2, (int *)&v24);
      if ( v12 >= 0 )
      {
        v16 = v24;
        v17 = v24;
        if ( v24 >= dword_140C4A418 )
          v17 = (v24 - dword_140C4A418) | 0x40000000;
        *a5 = v17;
        *a4 = v16;
        *a3 = 1;
        sub_140399A14(v16, 1, *(unsigned int *)(v15 + 24), *(_DWORD *)(v13 + 304), a1 == 0);
      }
    }
    else
    {
      v12 = -1073741637;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return (unsigned int)v12;
}
