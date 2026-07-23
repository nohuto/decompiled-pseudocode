/*
 * XREFs of sub_140A8B064 @ 0x140A8B064
 * Callers:
 *     sub_140A9F7F0 @ 0x140A9F7F0 (sub_140A9F7F0.c)
 *     sub_140A9F970 @ 0x140A9F970 (sub_140A9F970.c)
 *     sub_140A9FA80 @ 0x140A9FA80 (sub_140A9FA80.c)
 *     sub_140A9FDD0 @ 0x140A9FDD0 (sub_140A9FDD0.c)
 *     sub_140A9FE70 @ 0x140A9FE70 (sub_140A9FE70.c)
 *     sub_140AA0000 @ 0x140AA0000 (sub_140AA0000.c)
 *     sub_140AA00D0 @ 0x140AA00D0 (sub_140AA00D0.c)
 *     sub_140AA02D0 @ 0x140AA02D0 (sub_140AA02D0.c)
 *     sub_140AA03C0 @ 0x140AA03C0 (sub_140AA03C0.c)
 *     sub_140AA0500 @ 0x140AA0500 (sub_140AA0500.c)
 *     sub_140AA0640 @ 0x140AA0640 (sub_140AA0640.c)
 *     sub_140AA4550 @ 0x140AA4550 (sub_140AA4550.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 *     sub_140A8B564 @ 0x140A8B564 (sub_140A8B564.c)
 */

char __fastcall sub_140A8B064(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  volatile signed __int64 *v13; // rcx
  volatile signed __int64 v14; // rtt
  _OWORD v16[2]; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  v16[0] = 0LL;
  v6 = (unsigned int)a2;
  v7 = sub_140A8B564(a1, a2, a1);
  if ( v7 )
  {
    sub_14045F6C8((__int64)v16, 1);
    v10 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)v16, v8, v9);
    if ( v10 )
    {
      v11 = v10[7];
      if ( v11 )
      {
        v12 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + v11), a4);
        v13 = (volatile signed __int64 *)(v11 + v4);
        do
        {
          if ( *v13 > v12 )
            break;
          v14 = *v13;
        }
        while ( v14 != _InterlockedCompareExchange64(v13, v12, *v13) );
      }
    }
    LOBYTE(v7) = sub_1402D81DC((__int64)v16);
  }
  return v7;
}
