/*
 * XREFs of sub_140345B70 @ 0x140345B70
 * Callers:
 *     sub_14022475C @ 0x14022475C (sub_14022475C.c)
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_140310810 @ 0x140310810 (sub_140310810.c)
 *     sub_140343C60 @ 0x140343C60 (sub_140343C60.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_140571770 @ 0x140571770 (sub_140571770.c)
 */

__int64 __fastcall sub_140345B70(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  _QWORD *v14; // rdx
  bool v15; // zf

  result = __rdtsc();
  v7 = result;
  v8 = result - *(_QWORD *)(a1 + 33152);
  *(_QWORD *)(a1 + 33400) += v8;
  v9 = *(_BYTE *)(a2 + 2);
  if ( (v9 & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 33968);
    v11 = *(_QWORD *)(a1 + 33976);
    if ( !v10 || !v11 )
      goto LABEL_8;
    if ( *(_BYTE *)(v11 + 100) )
    {
      v12 = *(_DWORD *)(v11 + 116);
    }
    else
    {
      v12 = *(_DWORD *)(v11 + 72);
      if ( v12 >= *(_DWORD *)(v10 + 512) )
        v12 = *(_DWORD *)(v10 + 512);
    }
    if ( v12 < 0x4B )
      v13 = v12 / 0x19;
    else
LABEL_8:
      v13 = 3;
    if ( dword_140D068FC )
      LOBYTE(result) = *(_BYTE *)(a1 + 34056);
    else
      LOBYTE(result) = *(_BYTE *)(a1 + 34059);
    result = (unsigned __int8)result;
    v14 = (_QWORD *)(a1 + 8 * ((unsigned __int8)result + 2 * (v13 + 2088LL)));
    *v14 += v8;
    v9 = *(_BYTE *)(a2 + 2);
  }
  if ( (v9 & 0x40) != 0 )
  {
    result = *(_QWORD *)(a2 + 968);
    if ( result )
      *(_BYTE *)(result + 64) = 1;
  }
  *(_QWORD *)(a1 + 33152) = v7;
  if ( (*(_BYTE *)(a2 + 2) & 2) != 0 )
    result = sub_140571770(a2, 0LL);
  v15 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v15 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( !a3 )
      return HalRequestSoftwareInterrupt(2);
  }
  return result;
}
