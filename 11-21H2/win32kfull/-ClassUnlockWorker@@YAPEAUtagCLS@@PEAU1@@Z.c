/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00FF710
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 *     xxxRecreateSmallIcons @ 0x1C0158A28 (xxxRecreateSmallIcons.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E3498 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ClassUnlock @ 0x1C01E3888 (ClassUnlock.c)
 * Callees:
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlockWorker(struct _CALLPROCDATA **a1)
{
  struct _CALLPROCDATA *v1; // rax
  struct _CALLPROCDATA ***v3; // rbx
  struct _CALLPROCDATA **i; // rdx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 18);
  v1 = a1[7];
  if ( a1 == (struct _CALLPROCDATA **)v1 )
    return a1;
  --*((_DWORD *)v1 + 18);
  if ( *((_DWORD *)a1 + 18) )
    return a1;
  v3 = (struct _CALLPROCDATA ***)((char *)a1[7] + 64);
  for ( i = *v3; i != a1; i = (struct _CALLPROCDATA **)*i )
    v3 = (struct _CALLPROCDATA ***)i;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  DestroyClass(CurrentProcessWin32Process, v3);
  return 0LL;
}
