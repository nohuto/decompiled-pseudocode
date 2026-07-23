/*
 * XREFs of sub_140A67608 @ 0x140A67608
 * Callers:
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14045EF10 (RtlFindNextForwardRunClearEx.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055BD18 @ 0x14055BD18 (sub_14055BD18.c)
 *     sub_140A678E0 @ 0x140A678E0 (sub_140A678E0.c)
 */

char __fastcall sub_140A67608(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  _RTL_BITMAP_EX *v6; // r15
  ULONG64 SetBits; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 NextForwardRunClear; // [rsp+20h] [rbp-28h]
  ULONG64 v19; // [rsp+28h] [rbp-20h]
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF
  ULONG64 v21; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+58h]
  __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v22 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v3 = *(_DWORD *)(a1 + 80);
  v20 = 0LL;
  if ( (v3 & 0x80u) != 0 )
    v23 = sub_14055A628(0);
  v4 = a1 + 544;
  v5 = *(_QWORD *)(a1 + 544);
  v19 = v5;
  sub_140A678E0(a1, a2, &v24);
  v6 = (_RTL_BITMAP_EX *)(a1 + 600);
  if ( a1 != -600 )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v6, 1uLL, 0LL);
      if ( SetBits != -1LL )
      {
        do
        {
          NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v6, SetBits, &v22);
          if ( NextForwardRunClear )
            v5 = v22;
          v8 = v5 - SetBits;
          if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
          {
            RtlSetBitsEx(v4, SetBits, v8);
          }
          else
          {
            v9 = *(_QWORD *)(a1 + 552);
            *(_QWORD *)&v20 = SetBits + v8;
            v10 = SetBits;
            *((_QWORD *)&v20 + 1) = v9;
            v21 = SetBits;
            do
            {
              v11 = RtlFindNextForwardRunClearEx((__int64)&v20, v10, &v21);
              if ( !v11 )
                break;
              v12 = *(_QWORD *)(a1 + 688);
              if ( v11 > v12 )
              {
                *(_DWORD *)(a1 + 80) |= 2u;
                v11 = v12;
              }
              v13 = v21;
              if ( v11 )
              {
                RtlSetBitsEx((__int64)&v20, v21, v11);
                *(_QWORD *)(a1 + 688) -= v11;
              }
              v14 = *(_DWORD *)(a1 + 80);
              if ( (v14 & 2) != 0 )
                return v14;
              v10 = v11 + v13;
              v21 = v10;
            }
            while ( v10 < SetBits + v8 );
            v4 = a1 + 544;
          }
          v15 = v8 + NextForwardRunClear;
          v5 = v19;
          SetBits += v15;
        }
        while ( SetBits < v19 );
      }
      if ( v6 != (_RTL_BITMAP_EX *)(a1 + 600) )
        break;
      if ( (*(_DWORD *)(a1 + 40) & 4) == 0 )
        break;
      v6 = (_RTL_BITMAP_EX *)(a1 + 656);
    }
    while ( a1 != -656 );
  }
  v14 = *(_DWORD *)(a1 + 80);
  if ( (v14 & 0x80u) != 0 )
  {
    v16 = sub_14055A628(0);
    LOBYTE(v14) = sub_14055BD18((const GUID *)a1, v16 - v23, v24);
  }
  return v14;
}
