/*
 * XREFs of ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x18012D4B0
 * Callers:
 *     ?HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18012C880 (-HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18012E1A0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveModeListener::OnHoloshellStateChange(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  BOOL v5; // esi
  int updated; // eax
  BOOL v7; // [rsp+30h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+38h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp-88h]
  GUID v10; // [rsp+48h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-68h] BYREF
  GUID *v12; // [rsp+80h] [rbp-48h]
  int v13; // [rsp+88h] [rbp-40h]
  int v14; // [rsp+8Ch] [rbp-3Ch]
  __int64 v15; // [rsp+90h] [rbp-38h]
  int v16; // [rsp+98h] [rbp-30h]
  int v17; // [rsp+9Ch] [rbp-2Ch]
  BOOL *v18; // [rsp+A0h] [rbp-28h]
  int v19; // [rsp+A8h] [rbp-20h]
  int v20; // [rsp+ACh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v9 = v4;
  v5 = a2 <= 2 || a2 == 5;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  if ( (unsigned int)dword_1801C0178 > 5 )
  {
    v7 = v5;
    v18 = &v7;
    v19 = 4;
    v20 = 0;
    v15 = a1 + 136;
    v16 = 16;
    v17 = 0;
    v12 = &v10;
    v13 = 16;
    v14 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801C0178,
      (unsigned __int8 *)dword_18018C015,
      0LL,
      0LL,
      5u,
      &v11);
  }
  try
  {
    *(_DWORD *)(a1 + 176) = v5 + 1;
    updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)a1);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)updated);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x141,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8007000ELL);
    v4 = v8;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
