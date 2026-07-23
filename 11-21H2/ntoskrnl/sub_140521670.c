/*
 * XREFs of sub_140521670 @ 0x140521670
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14050BA34 @ 0x14050BA34 (sub_14050BA34.c)
 */

__int64 __fastcall sub_140521670(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // edi
  ULONG ActiveProcessorCount; // r14d
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v20 = 0LL;
  if ( v1 <= 0x24 )
    return 3221225659LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = 0;
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(a1 + 8), v6) )
      {
        v7 = qword_140C4D0A8;
        if ( off_140C02520 != &off_1400032A0 )
          v7 = qword_140C4D0A8 + 8LL * (unsigned int)(v6 * dword_140C4D044);
        v8 = 0;
        if ( dword_140C4A404 )
          break;
      }
LABEL_11:
      if ( ++v6 >= ActiveProcessorCount )
        goto LABEL_12;
    }
    while ( *(_DWORD *)(*(_QWORD *)v7 + 24LL) == 3 || *(_DWORD *)(*(_QWORD *)v7 + 32LL) != v1 )
    {
      ++v8;
      v7 += 8LL;
      if ( v8 >= dword_140C4A404 )
        goto LABEL_11;
    }
    return 2147483665LL;
  }
  else
  {
LABEL_12:
    v9 = sub_140252344(&qword_140C4D048);
    v11 = sub_14050BA34((int *)a1, v10, &v20);
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = (unsigned int)(v9 + 1);
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v11 )
    {
      v18 = v20;
      sub_1403B1B5C(v12, *(_QWORD *)(v20 + 296));
      sub_1403B1B5C(v19, v18);
      --dword_140C4D0A0;
    }
    else if ( !v20 )
    {
      return (unsigned int)-1073741823;
    }
    return v2;
  }
}
