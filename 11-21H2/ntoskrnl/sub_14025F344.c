/*
 * XREFs of sub_14025F344 @ 0x14025F344
 * Callers:
 *     sub_140580DB8 @ 0x140580DB8 (sub_140580DB8.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 * Callees:
 *     sub_14025F440 @ 0x14025F440 (sub_14025F440.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1406EC158 @ 0x1406EC158 (sub_1406EC158.c)
 */

__int64 __fastcall sub_14025F344(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v5; // esi
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rax

  v2 = a2 + 1664;
  if ( (*(_DWORD *)(a2 + 1124) & 0x20) != 0 )
    return 1LL;
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
  v5 = 1;
  *(_BYTE *)(a1 + 1384) |= 1u;
  v6 = sub_140282AD0(v2);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6);
  *(_DWORD *)(v6 + 4) = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 0x20u);
  if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
    *(_BYTE *)(v2 + 187) &= 0x9Fu;
  LOBYTE(v8) = v7;
  sub_14030FA80(v2, v8);
  sub_140281A58(a1, a2);
  v9 = sub_14025F440(a2);
  if ( v9 > 2 )
  {
    sub_1406EC158(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 1838)), v9);
  }
  else if ( !v9 )
  {
    return 0;
  }
  return v5;
}
