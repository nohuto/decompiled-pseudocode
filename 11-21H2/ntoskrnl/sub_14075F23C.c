/*
 * XREFs of sub_14075F23C @ 0x14075F23C
 * Callers:
 *     sub_14075F194 @ 0x14075F194 (sub_14075F194.c)
 *     sub_140B252DC @ 0x140B252DC (sub_140B252DC.c)
 *     sub_140B2FE74 @ 0x140B2FE74 (sub_140B2FE74.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402D94D8 @ 0x1402D94D8 (sub_1402D94D8.c)
 *     sub_1402D96AC @ 0x1402D96AC (sub_1402D96AC.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_1403A147C @ 0x1403A147C (sub_1403A147C.c)
 *     sub_1403B8520 @ 0x1403B8520 (sub_1403B8520.c)
 *     sub_1403CB284 @ 0x1403CB284 (sub_1403CB284.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 *     sub_140B05620 @ 0x140B05620 (sub_140B05620.c)
 */

__int64 __fastcall sub_14075F23C(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  PVOID v6; // rdi
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // r13
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char *v15; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // rbx
  __int64 result; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  _OWORD v23[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+60h] [rbp-38h]
  ULONG_PTR *v26; // [rsp+A8h] [rbp+10h]

  v6 = a1;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0LL;
  if ( a4 )
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  else
  {
    v6 = (PVOID)a1[6];
    v7 = (__int64)(a1 + 20);
    v8 = a1;
  }
  v9 = (__int64)(a3 - a2) >> 3;
  v10 = (__int64)(a2 << 25) >> 16;
  v11 = v9 + 1;
  if ( !a4 )
  {
    sub_1402D96AC(v7, 0LL);
    v12 = sub_140313C70((unsigned __int64)v6);
    RtlClearBits(*(PRTL_BITMAP *)(v7 + 112), (__int64)(a2 - v12) >> 3, v11);
    sub_1402D94D8(v7, 0);
  }
  v26 = &StartContext;
  if ( (unsigned int)sub_1402FDD20((__int64)(a2 << 25) >> 16) )
  {
    v19 = (__int64)(a2 << 25) >> 16;
    if ( v9 != -1 )
    {
      do
      {
        v20 = sub_1403B8520(v19);
        v21 = 48 * v20 - 0x220000000000LL;
        if ( *(_WORD *)(v21 + 32) != 1 )
          sub_1405AD67C(v21);
        v22 = v11;
        if ( 512 - (v20 & 0x1FF) <= v11 )
          v22 = 512 - (v20 & 0x1FF);
        sub_1403CB284(v21, v20, v22);
        v19 += v22 << 12;
        v11 -= v22;
      }
      while ( v11 );
    }
  }
  else if ( a4 )
  {
    sub_140B05620((_DWORD)v6, a2, v9 + 1, 1, 0LL);
    if ( v6 == qword_140D068F0 )
      qword_140D68728 += v11;
    else
      qword_140D68730 += v11;
  }
  else
  {
    v13 = v8[14];
    if ( v13 )
    {
      v14 = sub_140287970(v13);
      v26 = (ULONG_PTR *)sub_14030EC14(v14);
    }
    v15 = sub_14026DFC0(1);
    sub_14027E810((__int64)v15, v16, a2, v9 + 1, 1, v23);
  }
  v17 = v24;
  if ( (_QWORD)v24 )
  {
    *(_QWORD *)(v7 + 40) -= v24;
    *(_QWORD *)(v7 + 48) -= v17;
    if ( v6 == qword_140D06988 || v6 == qword_140D068F0 )
      qword_140C53528 -= v24;
    else
      _InterlockedExchangeAdd(&dword_140C53550, -(int)v17);
    sub_140216E18((__int64)v26, v17);
    sub_14028CE10((__int64)v26, v17 - *((_QWORD *)&v23[0] + 1));
  }
  result = (unsigned int)dword_140D06880;
  if ( (dword_140D06880 & 0x8000) != 0 && (dword_140D06880 & 0x4000) != 0 )
  {
    result = sub_1403A147C();
    if ( (int)result < 0 )
      KeBugCheckEx(0x1Au, 0x1211AuLL, v10, v9 + 1, (int)result);
  }
  return result;
}
