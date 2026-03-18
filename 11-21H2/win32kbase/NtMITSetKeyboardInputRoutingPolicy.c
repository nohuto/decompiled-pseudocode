/*
 * XREFs of NtMITSetKeyboardInputRoutingPolicy @ 0x1C00C2BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00C2C34 (SetKeyboardInputRoutingPolicy.c)
 */

__int64 __fastcall NtMITSetKeyboardInputRoutingPolicy(unsigned int a1)
{
  CInputThreadBase *v2; // rdi
  char *v3; // rbx

  if ( CInputThreadBase::IsInputThread(gpInputThread)
    && (v2 = gpInputThread,
        v3 = (char *)gpInputThread + 8,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v3, 0LL),
        LODWORD(v2) = *((_DWORD *)v2 + 6),
        ExReleasePushLockSharedEx(v3, 0LL),
        KeLeaveCriticalRegion(),
        (_DWORD)v2 == 2) )
  {
    return SetKeyboardInputRoutingPolicy(a1);
  }
  else
  {
    return 3221225506LL;
  }
}
