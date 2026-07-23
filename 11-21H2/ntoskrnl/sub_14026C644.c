/*
 * XREFs of sub_14026C644 @ 0x14026C644
 * Callers:
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_14032E130 @ 0x14032E130 (sub_14032E130.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_1403CA414 @ 0x1403CA414 (sub_1403CA414.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1406F3408 @ 0x1406F3408 (sub_1406F3408.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 *     sub_140AF5940 @ 0x140AF5940 (sub_140AF5940.c)
 *     sub_140B52BA0 @ 0x140B52BA0 (sub_140B52BA0.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14039FDB0 @ 0x14039FDB0 (sub_14039FDB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_14026C644(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // bl
  ULONG_PTR v4; // rbp
  unsigned __int8 v5; // si
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v15 = 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = sub_1402F2700(BugCheckParameter2);
  if ( (v2 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
      v2 &= ~2u;
    if ( (v2 & 2) != 0 && (dword_140D06880 & 0x8000) != 0 )
    {
      if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 && (dword_140D06880 & 0x4000) != 0 )
        *(_QWORD *)&v15 = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16;
      v7 = v2 & 1;
      if ( (v2 & 1) != 0 )
        v2 &= ~1u;
      v8 = (unsigned int)(4 * v7 + 2);
      if ( (v2 & 0x20) != 0 )
      {
        v8 = (unsigned int)v8 | 0x40;
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
          LODWORD(v8) = v8 | 0x800;
      }
      if ( (int)sub_14039FDB0(v4, &v15, v8) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
    }
  }
  LOBYTE(v6) = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  if ( (_BYTE)v6 != 3 )
  {
    sub_14033C300(BugCheckParameter2, 3LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 16);
  }
  if ( (v2 & 1) != 0 && (dword_140D06880 & 0x8000) != 0 )
  {
    sub_140313B20(BugCheckParameter2);
    LOBYTE(v6) = sub_14039FDB0(v4, &v15, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    LOBYTE(v6) = v5;
    __writecr8(v5);
  }
  return v6;
}
