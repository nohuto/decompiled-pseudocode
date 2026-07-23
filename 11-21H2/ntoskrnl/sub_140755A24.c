/*
 * XREFs of sub_140755A24 @ 0x140755A24
 * Callers:
 *     sub_1407557F0 @ 0x1407557F0 (sub_1407557F0.c)
 * Callees:
 *     sub_140755714 @ 0x140755714 (sub_140755714.c)
 *     sub_14075876C @ 0x14075876C (sub_14075876C.c)
 */

__int64 __fastcall sub_140755A24(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int16 v5; // ax
  __int16 v6; // cx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 2512) & 1) == 0 )
    return 0LL;
  v9 = 0LL;
  if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
  {
    if ( !*(_QWORD *)(a1 + 1408) )
      return 3221225595LL;
    v5 = *(_WORD *)(a1 + 2412);
    if ( v5 != 332 && v5 != 452 )
      return 3221225595LL;
  }
  v10 = 0x20000000000LL;
  result = sub_140755714(a1, qword_140C4F3D8, (int)&v9, &v10);
  v3 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    sub_14075876C(CurrentThread, v9, 0LL);
    if ( !*(_QWORD *)(a1 + 1408) )
      return v3;
    v6 = *(_WORD *)(a1 + 2412);
    if ( v6 != 332 && v6 != 452 )
      return v3;
    v7 = *(_QWORD *)(a1 + 1496);
    v8 = 0LL;
    if ( v6 == 332 )
      v8 = qword_140C4F370[0];
    v9 = 0LL;
    v10 = (2 * (v7 >> 4)) >> 3;
    result = sub_140755714(a1, v8, (int)&v9, &v10);
    v3 = result;
    if ( (int)result >= 0 )
    {
      sub_14075876C(CurrentThread, v9, 1LL);
      return v3;
    }
  }
  return result;
}
