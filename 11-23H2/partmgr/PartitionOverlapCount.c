/*
 * XREFs of PartitionOverlapCount @ 0x1C0001EB0
 * Callers:
 *     ?PartitionIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001590 (-PartitionIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionOverlapCount(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // r10d

  if ( a1 == 2 )
  {
    v6 = *(_DWORD *)(a5 + 16);
    if ( !v6 )
      *(_QWORD *)(a5 + 24) = a4 + *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a5 + 16) = v6 + 1;
    return 0LL;
  }
  if ( a1 == 4 )
    return 0LL;
  return 3221225485LL;
}
