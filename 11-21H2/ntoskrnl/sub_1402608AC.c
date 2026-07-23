/*
 * XREFs of sub_1402608AC @ 0x1402608AC
 * Callers:
 *     sub_140260054 @ 0x140260054 (sub_140260054.c)
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402608AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // rbx
  KIRQL v12; // al
  __int64 v13; // rdx
  _QWORD v14[22]; // [rsp+20h] [rbp-91h] BYREF

  memset(v14, 0, sizeof(v14));
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v14[19] = &sub_140315EE0;
  v14[3] = a1;
  v14[21] = a5;
  LODWORD(v14[0]) = 129;
  if ( v9 )
  {
    result = *(unsigned int *)(a2 + 48);
    if ( (result & 4) != 0 )
      return result;
    LODWORD(v14[0]) = 131;
    v14[4] = a3;
    v14[5] = a4;
    v11 = sub_140282AD0(a1);
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v11);
    *(_DWORD *)(v11 + 4) = 0;
    HIBYTE(v14[0]) = v12;
  }
  else
  {
    HIBYTE(v14[0]) = 17;
  }
  result = sub_14030CF90(v14);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    LOBYTE(v13) = HIBYTE(v14[0]);
    return sub_14030FA80(a1, v13);
  }
  return result;
}
