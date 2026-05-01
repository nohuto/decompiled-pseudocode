/*
 * XREFs of ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x1803058F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180021B98 (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

void __fastcall CImmersiveApp::HandleNewProcess(CImmersiveApp *this, void *a2)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax

  if ( *((_BYTE *)this + 688) )
  {
    if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 176))
      && ((*((_QWORD *)this + 87) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      CurrentProcess = GetCurrentProcess();
      v5 = GetCurrentProcess();
      if ( DuplicateHandle(v5, a2, CurrentProcess, (LPHANDLE)this + 87, 0x1200u, 0, 0) )
      {
        if ( (*((_BYTE *)this + 464) & 2) != 0 )
          CImmersiveApp::_SetApplicationForegroundPriority((__int64)this - 112, 0);
      }
    }
  }
}
