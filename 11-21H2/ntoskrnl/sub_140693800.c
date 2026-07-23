/*
 * XREFs of sub_140693800 @ 0x140693800
 * Callers:
 *     sub_140213CF0 @ 0x140213CF0 (sub_140213CF0.c)
 *     sub_1406932C0 @ 0x1406932C0 (sub_1406932C0.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140693900 @ 0x140693900 (sub_140693900.c)
 *     sub_1409DCDD0 @ 0x1409DCDD0 (sub_1409DCDD0.c)
 */

__int64 __fastcall sub_140693800(void *a1, _DWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  void *v9; // rax
  void *v10; // rsi
  unsigned int v11; // ebx

  if ( !a2 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&stru_140C165C0, 1u);
  if ( a3 )
    *a3 = dword_140D3B058;
  if ( *a2 >= (unsigned int)dword_140D3B040 )
  {
    if ( qword_140D3B0E8 )
    {
      v9 = (void *)MmMapIoSpaceEx(qword_140D3B0E8, (unsigned int)dword_140D3B040, 4u);
      v10 = v9;
      if ( v9 )
      {
        v11 = dword_140D3B040;
        memmove(a1, v9, (unsigned int)dword_140D3B040);
        MmUnmapVideoDisplay(v10, v11);
        v7 = 0;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      v7 = -1073741808;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  *a2 = dword_140D3B040;
  if ( (unsigned __int8)sub_140693900() )
  {
    if ( v7 >= 0 )
      sub_1409DCDD0(a1, (unsigned int)*a2);
  }
  ExReleaseResourceLite(&stru_140C165C0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
