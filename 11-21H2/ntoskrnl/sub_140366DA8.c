/*
 * XREFs of sub_140366DA8 @ 0x140366DA8
 * Callers:
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 *     sub_14035225C @ 0x14035225C (sub_14035225C.c)
 *     sub_140366D64 @ 0x140366D64 (sub_140366D64.c)
 * Callees:
 *     sub_140227ED0 @ 0x140227ED0 (sub_140227ED0.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_140352D90 @ 0x140352D90 (sub_140352D90.c)
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140366DA8(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r12
  ULONG_PTR v3; // r14
  unsigned __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // r8d
  int v7; // ebx
  int v8; // esi
  __int64 v9; // rbp
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r15
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]

  v2 = *a2;
  v3 = *a1;
  v4 = (*a2 >> 12) + ((*a2 & 0xFFF) != 0);
  v5 = sub_140366FB0(*a1);
  if ( v5 == 32 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v3, v2, v6);
  if ( v5 == 33 )
    v7 = 1;
  else
    v7 = (v5 != 0) + 5;
  v8 = v6 | 0x4000;
  if ( (v6 & 0x8000) == 0 )
    v8 = v6;
  LODWORD(v9) = v8;
  if ( (v8 & 0x4000) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      v15 = 0LL;
      memset(v13, 0, sizeof(v13));
      v14 = 0LL;
      v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (v5 & 0x20) != 0 )
        v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 192LL;
      else
        v9 = (__int64)sub_14026DFC0(2);
      sub_14027E810(v9, 0LL, v10, v4, (v8 & 0x40000000) != 0, v13);
      v11 = v14;
      sub_14028CE10(
        *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v9 + 174)),
        v14 - *((_QWORD *)&v13[0] + 1));
      LOWORD(v9) = v8;
    }
    else
    {
      if ( (v8 & 0x40000000) == 0 && dword_140D069EC )
        LODWORD(v9) = v8 | 0x40000000;
      v11 = sub_140227ED0(v3, v4, v9, 1u);
    }
    if ( v11 )
      sub_140352D90(v7, v11, 0);
  }
  if ( (v9 & 0x8000) != 0 )
  {
    if ( v7 == 1 )
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 796LL),
        -(int)(v4 >> 9));
    sub_14026DAB0(v3, v2 + v3, v7);
  }
  return 0LL;
}
