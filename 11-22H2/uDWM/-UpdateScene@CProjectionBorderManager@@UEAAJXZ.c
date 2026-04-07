/*
 * XREFs of ?UpdateScene@CProjectionBorderManager@@UEAAJXZ @ 0x18004F660
 * Callers:
 *     <none>
 * Callees:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001CC7C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateScene(struct _RTL_GENERIC_TABLE *this)
{
  _QWORD *v2; // rax
  __int64 v4; // rcx
  CSecondaryWindowRepresentation *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // [rsp+20h] [rbp-8h]
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v2 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[3];
      if ( v4 )
      {
        v5 = *(CSecondaryWindowRepresentation **)(v4 + 24);
        if ( *((_QWORD *)v5 + 6) )
        {
          v6 = CSecondaryWindowRepresentation::Validate(v5);
          v7 = v6;
          if ( v6 < 0 )
            break;
        }
      }
      v2 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
      if ( !v2 )
        goto LABEL_2;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x675,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v6,
      v8);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x353,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)v7,
      v9);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return v7;
  }
  else
  {
LABEL_2:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 0LL;
  }
}
