/*
 * XREFs of sub_1403DA8E4 @ 0x1403DA8E4
 * Callers:
 *     sub_14085D8F8 @ 0x14085D8F8 (sub_14085D8F8.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall sub_1403DA8E4(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  unsigned __int8 v10; // r15
  volatile LONG *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  _QWORD *v14; // rbp
  __int64 v15; // rax
  volatile LONG *v16; // rax

  v6 = sub_140282AD0((__int64)a1);
  v8 = sub_140282AD0(v7);
  *(_DWORD *)v6 = 0;
  v10 = sub_1402CF4F0(v9);
  v11 = (volatile LONG *)sub_140282AD0((__int64)a2);
  ExAcquireSpinLockExclusiveAtDpcLevel(v11 + 16);
  v12 = 8LL;
  a1[14] = a2[14];
  a1[15] = a2[15];
  v6[6] = v8[6];
  v6[7] = v8[7];
  a1[16] = a2[16];
  v13 = a2 + 5;
  a1[17] = a2[17];
  a1[18] = a2[18];
  a1[19] = a2[19];
  a1[2] = a3;
  v14 = a1 + 5;
  do
  {
    v15 = *v13++;
    *v14++ = v15;
    --v12;
  }
  while ( v12 );
  v16 = (volatile LONG *)sub_140282AD0((__int64)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v16 + 16);
  return sub_1402B0CE0((__int64)a2, v10);
}
