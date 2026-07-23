/*
 * XREFs of sub_1407C0940 @ 0x1407C0940
 * Callers:
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1407C0940(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v4; // rdi
  __int64 result; // rax
  int v6; // ett

  v2 = (unsigned int)BugCheckParameter4;
  v4 = *(_QWORD *)(BugCheckParameter2 + 1648)
     + 24
     * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                     * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  _m_prefetchw((const void *)(BugCheckParameter2 + 4232));
  LODWORD(result) = *(_DWORD *)(BugCheckParameter2 + 4232);
  if ( !(_DWORD)result )
LABEL_4:
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xCuLL, v2);
  while ( 1 )
  {
    v6 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(BugCheckParameter2 + 4232),
                             result + 1,
                             result);
    if ( v6 == (_DWORD)result )
      return result;
    if ( !(_DWORD)result )
      goto LABEL_4;
  }
}
