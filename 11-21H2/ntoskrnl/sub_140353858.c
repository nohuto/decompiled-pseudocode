/*
 * XREFs of sub_140353858 @ 0x140353858
 * Callers:
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_1403536F0 @ 0x1403536F0 (sub_1403536F0.c)
 * Callees:
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     sub_14030FBE0 @ 0x14030FBE0 (sub_14030FBE0.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 */

__int64 __fastcall sub_140353858(unsigned __int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r9
  char v11; // al
  int v12; // ecx
  _QWORD *v13; // r8
  __int64 result; // rax
  int v15; // eax
  int v16; // edx
  unsigned __int64 v17; // rax
  __int64 v18[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 1) == 0 )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140C50668;
LABEL_29:
      *a4 = 1;
      return result;
    }
    if ( v7 == qword_140C50678 && v7 )
    {
      result = qword_140C50670;
      goto LABEL_29;
    }
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a2 + 64) & 0x10000000) != 0 )
  {
    v17 = sub_1402EE0E0(a2, 32);
    if ( v17 && *(struct _KTHREAD **)(v17 + 8) != KeGetCurrentThread() )
      goto LABEL_25;
  }
  v8 = *(_DWORD *)(a2 + 48);
  if ( (v8 & 4) != 0 )
    goto LABEL_25;
  if ( (v8 & 0x200000) != 0 )
  {
    v15 = *(_DWORD *)(a2 + 48) & 0x70;
    if ( v15 != 16 && v15 != 48 && !sub_14030FBE0(a2) && *(int *)(a2 + 52) < 0 )
    {
      v16 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
LABEL_22:
      result = 0LL;
      *a4 = v16;
      return result;
    }
LABEL_25:
    v16 = 24;
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(a2 + 64) & 0x1000000) != 0 && (*(_BYTE *)(a2 + 48) & 0x70) != 0x50 )
    goto LABEL_25;
  v9 = a1 >> 12;
  v10 = sub_140319600(a2, v9, 4, v18);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a2 + 48) & 0x70;
    v12 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
    *a4 = v12;
    if ( v11 == 32 )
    {
      if ( v12 == 7 )
        v12 = 256;
      *a4 = v12;
    }
  }
  else
  {
    *a4 = 24;
  }
  v13 = *(_QWORD **)(a2 + 120);
  if ( (__int64)v13 < 0
    && v9 - (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) > (unsigned __int64)(*v13 - 1LL) >> 12 )
  {
    *a4 = 24;
  }
  return v10;
}
