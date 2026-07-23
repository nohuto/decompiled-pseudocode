/*
 * XREFs of sub_1406E21F0 @ 0x1406E21F0
 * Callers:
 *     sub_1406E2120 @ 0x1406E2120 (sub_1406E2120.c)
 *     sub_140927D44 @ 0x140927D44 (sub_140927D44.c)
 *     sub_14092972C @ 0x14092972C (sub_14092972C.c)
 *     sub_1409AEE00 @ 0x1409AEE00 (sub_1409AEE00.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402EE3D8 @ 0x1402EE3D8 (sub_1402EE3D8.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1409E668C @ 0x1409E668C (sub_1409E668C.c)
 */

__int64 __fastcall sub_1406E21F0(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v5; // r15
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-38h]

  v9 = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 1352);
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 1352)) )
  {
    if ( (*(_DWORD *)(a1 + 1376) & 1) != 0 )
    {
      v7 = -1073741749;
    }
    else
    {
      v9 = sub_1402EE3D8(a1);
      v7 = 0;
    }
    sub_1402AD030(v5);
  }
  else
  {
    v7 = -1073741749;
  }
  if ( a2 )
  {
    *a2 = v9;
    if ( !v9 && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 2172LL) & 0x100000) != 0 )
    {
      LOBYTE(v6) = 1;
      sub_1409E668C(v7, CurrentThread, a1, v6);
    }
  }
  sub_1402AC800((__int64)CurrentThread);
  return v7;
}
