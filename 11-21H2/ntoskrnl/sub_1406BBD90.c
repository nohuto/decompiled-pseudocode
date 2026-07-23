/*
 * XREFs of sub_1406BBD90 @ 0x1406BBD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_1406BBD90(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebx
  __int64 v8; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v6 = 0;
  if ( a1 )
  {
    if ( a1 != 2 || (*(_DWORD *)(a4 + 256) & 0x100000) != 0 )
    {
      v6 = -1073741637;
    }
    else
    {
      v8 = 0LL;
      if ( (*(_QWORD *)(a4 + 24) & 1) == 0 )
        v8 = *(_QWORD *)(a4 + 24);
      if ( v8 != a3 )
        *a5 &= ~1u;
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v6;
}
