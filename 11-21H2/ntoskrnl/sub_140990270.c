/*
 * XREFs of sub_140990270 @ 0x140990270
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 */

__int64 __fastcall sub_140990270(_QWORD *a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9

  v3 = 0;
  v4 = 0x4094B817BA3E0F4DLL - *a1;
  if ( *a1 == 0x4094B817BA3E0F4DLL )
    v4 = 0xF3A0E67963D5D1A2uLL - a1[1];
  if ( !v4 && a3 == 4 && a2 )
    ExNotifyCallback(qword_140C158D0, (PVOID)4, (PVOID)*a2);
  else
    return (unsigned int)-1073741811;
  return v3;
}
