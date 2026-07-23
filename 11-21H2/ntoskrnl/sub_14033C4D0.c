/*
 * XREFs of sub_14033C4D0 @ 0x14033C4D0
 * Callers:
 *     sub_14033C424 @ 0x14033C424 (sub_14033C424.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140594898 @ 0x140594898 (sub_140594898.c)
 *     sub_14096D038 @ 0x14096D038 (sub_14096D038.c)
 * Callees:
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14033C4D0(__int64 a1, char a2)
{
  char v4; // r8
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // edx
  __int64 result; // rax

  memset((void *)a1, 0, 0x110uLL);
  *(_WORD *)(a1 + 33) = 1536;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  v4 = 0;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 64;
  *(_QWORD *)(a1 + 64) = a1 + 64;
  *(_WORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 58) = 6;
  *(_DWORD *)(a1 + 60) = 0;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(a1 + 192) |= 0x40u;
  *(_DWORD *)(a1 + 176) = 1;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 152) = CurrentThread;
  v6 = *((_DWORD *)CurrentThread + 346);
  if ( (v6 & 0x100) != 0 )
    v7 = (v6 >> 9) & 7;
  else
    v7 = sub_14033D720(CurrentThread);
  v8 = *(_DWORD *)(a1 + 192);
  if ( v7 > 5 )
  {
    LOBYTE(v7) = 5;
    v4 = 5;
  }
  else
  {
    v8 |= 0x80000u;
    if ( v7 )
      v4 = v7 - 1;
  }
  result = v7 & 7;
  *(_DWORD *)(a1 + 192) = v8 & 0xFFFF81FF | (((unsigned int)result | (8 * (v4 & 7))) << 9);
  if ( (a2 & 2) != 0 )
  {
    result = sub_140347C10(a1, 0LL, 0LL);
    *(_QWORD *)(a1 + 216) = result;
    if ( result )
      *(_BYTE *)(result + 18) = 1;
  }
  return result;
}
