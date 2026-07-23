/*
 * XREFs of CcForEachNumaNode @ 0x1403C3D9C
 * Callers:
 *     CcInitializePartition @ 0x1403A0570 (CcInitializePartition.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0C88 (CcInitializePrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2254 (CcDeletePrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1403D41A4 (CcGetActiveWorkerCountInPartition.c)
 *     CcDeletePartition @ 0x1405391B0 (CcDeletePartition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcForEachNumaNode(
        __int64 (__fastcall *a1)(__int64, __int64, _QWORD *, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _QWORD **v5; // rdi
  _QWORD *i; // rbx

  result = a2 + 16;
  v5 = (_QWORD **)(a3 + 48);
  if ( !a3 )
    v5 = (_QWORD **)(a2 + 16);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    result = a1(a2, a3, i - 4, a4);
    if ( !(_BYTE)result )
      break;
  }
  return result;
}
