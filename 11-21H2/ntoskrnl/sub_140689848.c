/*
 * XREFs of sub_140689848 @ 0x140689848
 * Callers:
 *     sub_140689424 @ 0x140689424 (sub_140689424.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140212860 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14079B740 @ 0x14079B740 (sub_14079B740.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

char __fastcall sub_140689848(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int v4; // edi
  int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // rax

  v2 = (int *)(BugCheckParameter2 + 280);
  for ( i = 0; i < 2; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = i << 31;
      do
      {
        v6 = sub_140AB44C0(BugCheckParameter2, (unsigned int)(v5 + v4 - 4096));
        if ( !v6 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x1392uLL);
        v8 = sub_14079B740(v6);
        if ( !v8 )
          break;
        v4 = *(_DWORD *)(v8 + 20);
      }
      while ( v4 );
    }
    if ( i
      || (unsigned int)(v4 + 0x10000) <= *(_DWORD *)(BugCheckParameter2 + 1792)
      && ExIsResourceAcquiredExclusiveLite((PERESOURCE)&stru_140D31980) )
    {
      sub_140689900(BugCheckParameter2);
    }
    v2 += 158;
  }
  return 0;
}
