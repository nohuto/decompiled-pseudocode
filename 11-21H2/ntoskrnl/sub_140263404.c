/*
 * XREFs of sub_140263404 @ 0x140263404
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140266998 @ 0x140266998 (sub_140266998.c)
 *     sub_14026920C @ 0x14026920C (sub_14026920C.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_UNKNOWN **__fastcall sub_140263404(unsigned int a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // r8d
  __int64 v10; // rbp
  __int64 v11; // rsi
  char v12; // r14
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  int v20; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  *((_DWORD *)a2 + 15) = 0;
  v5 = a1;
  v6 = 2LL;
  v7 = a1 - 2;
  if ( (_DWORD)v7 )
  {
    v20 = v7 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
        return result;
      v6 = 1LL;
    }
    v8 = sub_14026DFC0(v6);
  }
  else
  {
    v8 = sub_14026920C(2LL, v7, v5);
    if ( !v8 )
      return (_UNKNOWN **)memset(a2, 0, 0x40uLL);
  }
  v10 = (unsigned int)(v9 - 2);
  v11 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v8 + 174));
  v12 = sub_1402CF4F0(v8);
  v13 = sub_140282AD0(v8);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 64));
  *a2 = *(_QWORD *)(v8 + 128);
  a2[1] = *(_QWORD *)(v8 + 160);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v8 + 4);
  a2[3] = *(_QWORD *)(v8 + 112);
  a2[4] = *(_QWORD *)(v8 + 120);
  v14 = *(_BYTE *)(v8 + 184);
  if ( v14 < 0 )
  {
    *((_DWORD *)a2 + 15) |= 4u;
    v14 = *(_BYTE *)(v8 + 184);
  }
  if ( (v14 & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v11 + 8 * v10 + 6792);
  v15 = sub_140282AD0(v8);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 64));
  LOBYTE(v16) = v12;
  sub_1402B0CE0(v8, v16);
  v17 = sub_140266998(v11, 1LL);
  v18 = *a2;
  *((_DWORD *)a2 + 14) = v17;
  result = (_UNKNOWN **)a2[6];
  v19 = v18 + *(_QWORD *)(v11 + 6784);
  a2[5] = v19;
  if ( v19 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v18 << 12;
  return result;
}
