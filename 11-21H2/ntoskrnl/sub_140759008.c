/*
 * XREFs of sub_140759008 @ 0x140759008
 * Callers:
 *     sub_14024BAD4 @ 0x14024BAD4 (sub_14024BAD4.c)
 *     sub_1405EEB40 @ 0x1405EEB40 (sub_1405EEB40.c)
 *     sub_140758C68 @ 0x140758C68 (sub_140758C68.c)
 *     sub_140960A00 @ 0x140960A00 (sub_140960A00.c)
 *     sub_1409E6BB0 @ 0x1409E6BB0 (sub_1409E6BB0.c)
 * Callees:
 *     sub_1402819DC @ 0x1402819DC (sub_1402819DC.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 */

__int64 __fastcall sub_140759008(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v9; // edi
  int v10; // r14d
  __int64 v11; // rsi
  __int64 **v12; // rax

  if ( a1 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = 0;
  v11 = *((_QWORD *)CurrentThread + 23);
  if ( (*((_DWORD *)CurrentThread + 346) & 3) == 0 )
  {
    v10 = 1;
    sub_14030EB30((__int64)CurrentThread, *((_QWORD *)CurrentThread + 23));
  }
  v12 = sub_1402819DC(v11, a1, a1);
  if ( v12 )
  {
    if ( ((_DWORD)v12[6] & 0x70) == 0x20 )
    {
      *a2 = (*((unsigned int *)v12 + 6) | ((unsigned __int64)*((unsigned __int8 *)v12 + 32) << 32)) << 12;
      *a3 = ((*((unsigned int *)v12 + 7) | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32))
           - (*((unsigned int *)v12 + 6) | ((unsigned __int64)*((unsigned __int8 *)v12 + 32) << 32))
           + 1) << 12;
      *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)*v12[9] + 56LL) + 76LL) & 1;
    }
    else
    {
      v9 = -1073741751;
    }
  }
  else
  {
    v9 = -1073741800;
  }
  if ( v10 )
    sub_14030EA00((__int64)CurrentThread, v11);
  return v9;
}
