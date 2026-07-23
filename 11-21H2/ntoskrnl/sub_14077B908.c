/*
 * XREFs of sub_14077B908 @ 0x14077B908
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077AA70 @ 0x14077AA70 (sub_14077AA70.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_14077A750 @ 0x14077A750 (sub_14077A750.c)
 *     sub_14077BA10 @ 0x14077BA10 (sub_14077BA10.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 */

__int64 __fastcall sub_14077B908(int a1, __int64 a2, signed int a3, _QWORD *a4)
{
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  char *v13; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( a3 >= 7 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v8 = sub_14077BA10(&v12);
    if ( v8 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceSharedLite(&stru_140C45620, 1u);
      v8 = sub_14077A750(a2, a3, v12, &v13);
      if ( v8 >= 0 && v13 )
      {
        v11 = v13 + 16;
        if ( *((_QWORD *)v13 + 2) || (v8 = sub_14077C924(a1, a2, a3, 0x2000000, 0, (__int64)v11), v8 >= 0) )
          *a4 = *(_QWORD *)v11;
        else
          *(_QWORD *)v11 = 0LL;
      }
      ExReleaseResourceLite(&stru_140C45620);
      KeLeaveCriticalRegion();
    }
  }
  return (unsigned int)v8;
}
