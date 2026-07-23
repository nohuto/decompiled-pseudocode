/*
 * XREFs of PspPropagateHandle @ 0x1406B9B74
 * Callers:
 *     PspUpdateCreateInfo @ 0x1406B99A4 (PspUpdateCreateInfo.c)
 * Callees:
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 */

__int64 __fastcall PspPropagateHandle(char a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // r10
  _KPROCESS *Process; // r11
  __int64 result; // rax

  v3 = *a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  result = 0LL;
  if ( a1 )
    return ObDuplicateObject((_DWORD)Process, v3, (_DWORD)Process, (_DWORD)a3, 0, 0, 2, 0);
  *a3 = v3;
  *a2 = 0LL;
  return result;
}
