/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180046CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180046E10 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18012220C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // r10
  char v11; // al
  __int64 DescriptorValidateSafe; // rax

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
    v6 = *(_BYTE *)(a1 + 8);
    v10 = DescriptorValidateSafe;
    v9 = v6;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 8);
    v7 = *(_QWORD *)a1 & a2;
    v8 = a1 ^ v7 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 0x10);
    v9 = v6;
    if ( v8 == 0xA2E64EADA2E64EADuLL )
      v10 = v7 + 32 * ((unsigned __int64)(unsigned int)(a2 - v7) >> v6);
    else
      v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_13;
  v11 = *(_BYTE *)(v10 + 24);
  if ( (v11 & 1) == 0 )
    goto LABEL_13;
  if ( (v11 & 2) != 0 )
  {
    if ( (v11 & 0xCu) >= 8 || (v6 = v9, (((1 << v9) - 1) & a2) == 0) )
    {
      v9 = v6;
      return RtlpHpSegPageRangeCommit(
               a1,
               v10,
               ((_DWORD)a2
              - (unsigned int)((v10 - (v10 & *(_QWORD *)a1)) >> 5 << v9)
              - ((unsigned int)v10 & *(_DWORD *)a1)) >> 12,
               a3 >> 12,
               0,
               0LL);
    }
LABEL_14:
    v10 = 0LL;
    return RtlpHpSegPageRangeCommit(
             a1,
             v10,
             ((_DWORD)a2 - (unsigned int)((v10 - (v10 & *(_QWORD *)a1)) >> 5 << v9) - ((unsigned int)v10 & *(_DWORD *)a1)) >> 12,
             a3 >> 12,
             0,
             0LL);
  }
  v10 += -32LL * *(unsigned __int8 *)(v10 + 31);
  if ( (*(_BYTE *)(v10 + 24) & 3) != 3 || (v9 = v6, (*(_BYTE *)(v10 + 24) & 0xCu) < 8) )
  {
LABEL_13:
    v9 = v6;
    goto LABEL_14;
  }
  return RtlpHpSegPageRangeCommit(
           a1,
           v10,
           ((_DWORD)a2 - (unsigned int)((v10 - (v10 & *(_QWORD *)a1)) >> 5 << v9) - ((unsigned int)v10 & *(_DWORD *)a1)) >> 12,
           a3 >> 12,
           0,
           0LL);
}
