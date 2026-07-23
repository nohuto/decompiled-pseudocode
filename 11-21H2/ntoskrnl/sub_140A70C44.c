/*
 * XREFs of sub_140A70C44 @ 0x140A70C44
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     sub_140A70BB8 @ 0x140A70BB8 (sub_140A70BB8.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 */

__int64 __fastcall sub_140A70C44(ULONG a1, __int64 a2, char *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  unsigned int v10; // r8d

  v6 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  v9 = qword_140D088C0[v6];
  if ( !v9 || a2 != 2 )
    return 3221225473LL;
  v10 = 240;
  if ( a4 <= 0xF0 )
    v10 = a4;
  return sub_140A6F124(a3, v9 + 256, v10, 0, 4, a5);
}
