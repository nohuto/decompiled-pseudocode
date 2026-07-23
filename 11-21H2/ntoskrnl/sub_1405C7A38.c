/*
 * XREFs of sub_1405C7A38 @ 0x1405C7A38
 * Callers:
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     sub_1405C7798 @ 0x1405C7798 (sub_1405C7798.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     sub_1405C7078 @ 0x1405C7078 (sub_1405C7078.c)
 *     sub_1405C7638 @ 0x1405C7638 (sub_1405C7638.c)
 *     sub_1405C83DC @ 0x1405C83DC (sub_1405C83DC.c)
 *     sub_1405C86F0 @ 0x1405C86F0 (sub_1405C86F0.c)
 */

__int64 __fastcall sub_1405C7A38(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // r8d
  unsigned __int64 v18; // r9
  int v19; // r10d
  unsigned int v21; // [rsp+B0h] [rbp+28h]

  v9 = qword_140D068A8;
  v12 = *(_QWORD *)(a1 + 33600);
  v13 = 448LL * a5;
  v14 = v12 + 336;
  v21 = *(_DWORD *)(a8 + 4);
  if ( *(_BYTE *)(v13 + qword_140D068A8 + 121) )
  {
    if ( !*(_BYTE *)(v12 + 732) )
    {
      v15 = *(_BYTE *)(a1 + 33) != 0 ? 0xFFFFFFFFLL : 2147483660LL;
LABEL_21:
      sub_1405C83DC(a8, v21);
      return v15;
    }
  }
  else if ( !(unsigned int)KeIsSubsetAffinityEx(v13 + qword_140D068A8 + 128, v12 + 768) )
  {
LABEL_5:
    v15 = 0xFFFFFFFFLL;
    goto LABEL_21;
  }
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v13 + v9 + 416),
         (a6 << 27) | HIDWORD(KeGetPcr()[1].LockArray) & 0xFFF | 0x1000000,
         0) )
  {
    goto LABEL_5;
  }
  *(_DWORD *)(*(_QWORD *)(a8 + 16) + 4LL * (unsigned int)(*(_DWORD *)(a8 + 4))++) = a5;
  v16 = sub_1405C7078(v13 + v9 + 80);
  if ( v16 )
  {
    v15 = v16 | 0x100000000LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 72) > a3 )
  {
    v15 = 2147483650LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 448) )
    goto LABEL_20;
  if ( *(unsigned int *)(v13 + v9 + 76) > v18 )
  {
    v15 = 2147483651LL;
    goto LABEL_21;
  }
  v15 = sub_1405C7638(
          a1,
          v19,
          v17,
          a3 - *(_DWORD *)(v13 + v9 + 72),
          v18,
          *(_DWORD *)(v13 + v9 + 124),
          *(_QWORD *)(v13 + v9 + 408),
          (__int64)a7,
          a8,
          v14);
  if ( v15 )
    goto LABEL_21;
  if ( *a7 == -1 )
  {
    v15 = 2147483649LL;
    goto LABEL_21;
  }
  if ( (int)sub_1405C86F0(v14) < 0 )
  {
    v15 = 2147483653LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 448) )
  {
LABEL_20:
    v15 = 2147483652LL;
    goto LABEL_21;
  }
  return v15;
}
