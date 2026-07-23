/*
 * XREFs of sub_1405B2088 @ 0x1405B2088
 * Callers:
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 */

__int64 __fastcall sub_1405B2088(unsigned __int64 a1, __int64 a2, char a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 **v9; // rax
  __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // eax

  CurrentThread = KeGetCurrentThread();
  v9 = sub_1403126F0(a1);
  v10 = (__int64)v9;
  if ( !v9 )
    goto LABEL_11;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 5), 0LL);
  *((_BYTE *)CurrentThread + 1384) |= 0x80u;
  v11 = *(_DWORD *)(v10 + 48);
  if ( (v11 & 4) != 0
    || (v12 = *(unsigned int *)(v10 + 52),
        LODWORD(v12) = v12 & 0x7FFFFFFF,
        (v12 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) != 0x7FFFFFFFDLL)
    || (v13 = *(unsigned int *)(v10 + 24), (v13 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12 != a1)
    || (v14 = *(unsigned int *)(v10 + 28),
        (((v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) != a2) )
  {
    sub_140281C44((__int64)CurrentThread, v10);
LABEL_11:
    *a4 = -1073741800;
    return 0LL;
  }
  if ( (v11 & 8) == 0
    || (v15 = sub_1407A4C90(v10, (_DWORD)v13 << 12, ((int)v14 - (int)v13 + 1) << 12, 85, a3), *a4 = v15, v15 >= 0) )
  {
    *a4 = 0;
    return v10;
  }
  sub_140281C44((__int64)CurrentThread, v10);
  return 0LL;
}
