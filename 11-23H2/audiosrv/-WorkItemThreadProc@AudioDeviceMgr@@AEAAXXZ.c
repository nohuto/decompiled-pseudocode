/*
 * XREFs of ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x18005C560
 * Callers:
 *     ?s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z @ 0x18005C540 (-s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAAXXZ @ 0x180002E78 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AudioDeviceMgr::WorkItemThreadProc(AudioDeviceMgr *this)
{
  int v2; // r12d
  DWORD v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  HANDLE Handles[3]; // [rsp+20h] [rbp-48h] BYREF
  char v11; // [rsp+38h] [rbp-30h]

  v2 = 0;
  Handles[0] = *((HANDLE *)this + 27);
  Handles[1] = *((HANDLE *)this + 26);
  while ( 1 )
  {
    v3 = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( !v3 )
      break;
    if ( v3 == 1 )
    {
      do
      {
        v4 = 0LL;
        Handles[2] = (char *)this + 168;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
        v11 = 1;
        v5 = *((_QWORD *)this + 17);
        if ( v5 )
        {
          v6 = (__int64 *)*((_QWORD *)this + 15);
          if ( !v6 )
            ATL::AtlThrowImpl(-2147467259);
          v4 = v6[2];
          v6[2] = 0LL;
          v2 |= 1u;
          v7 = *v6;
          *((_QWORD *)this + 15) = *v6;
          if ( v7 )
            *(_QWORD *)(v7 + 8) = 0LL;
          else
            *((_QWORD *)this + 16) = 0LL;
          v8 = v6[2];
          if ( v8 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
          v6[2] = 0LL;
          *v6 = *((_QWORD *)this + 19);
          *((_QWORD *)this + 19) = v6;
          if ( (*((_QWORD *)this + 17))-- == 1LL )
            ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll((__int64)this + 120);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
        v11 = 0;
        if ( v5 )
          (**(void (__fastcall ***)(__int64, AudioDeviceMgr *))v4)(v4, this);
        if ( v4 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
      }
      while ( v5 );
    }
  }
}
