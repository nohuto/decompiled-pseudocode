/*
 * XREFs of ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00F5D50
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00F5CE8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(const struct tagTHREADINFO *a1)
{
  _BOOL8 result; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*((_QWORD *)a1 + 53)) )
  {
    v3 = *((_QWORD *)a1 + 54);
    if ( gpqForeground == v3 && (*(_DWORD *)(v3 + 388) & 0x2000000) != 0 )
    {
      v4 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 16);
        if ( v5 )
        {
          if ( *(_QWORD *)(v5 + 424) == *((_QWORD *)a1 + 53) )
            return 1;
        }
      }
    }
  }
  return result;
}
