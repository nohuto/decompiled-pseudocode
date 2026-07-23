/*
 * XREFs of sub_1406A2588 @ 0x1406A2588
 * Callers:
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_14022A470 @ 0x14022A470 (sub_14022A470.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 */

__int64 __fastcall sub_1406A2588(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 *a6)
{
  int v7; // edi
  int v8; // ebx
  int v9; // r9d
  int v10; // ebp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax

  v7 = (a2 + a3 - 1) | 0xFFF;
  v8 = a2 & 0xFFFFF000;
  v9 = 1;
  v10 = a1;
  if ( (a4 & 1) != 0 )
    goto LABEL_5;
  v11 = (a2 + a3 - 1) | 0xFFF;
  v12 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 != 2 )
    v9 = 4;
  result = sub_14022A470(a1, v12, v11, v9, 0);
  if ( (int)result >= 0 )
  {
LABEL_5:
    v14 = sub_1407B9190(v10, v8, v7, a4, a5);
    *a6 = v14;
    return v14 == 0 ? 0xC000009A : 0;
  }
  return result;
}
