/*
 * XREFs of ?GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z @ 0x18003D390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetRawEntriesByTOCIdx(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  int v9; // eax
  unsigned int LastError; // ebx
  bool v11; // cf
  const char *v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-68h]
  DWORD NumberOfBytesRead; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-50h]
  _BYTE v20[8]; // [rsp+40h] [rbp-48h] BYREF
  LONG lDistanceToMove; // [rsp+48h] [rbp-40h]
  unsigned int v22; // [rsp+4Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( !a3 )
  {
    v14 = 568LL;
LABEL_16:
    LastError = -2147467261;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)LastError,
      v17);
    return LastError;
  }
  if ( !a4 )
  {
    v14 = 569LL;
    goto LABEL_16;
  }
  if ( a2 >= LODWORD(this[20].DebugInfo) )
  {
    LastError = -2147483637;
    v14 = 571LL;
    goto LABEL_18;
  }
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  v19 = v8;
  v9 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, _QWORD, _BYTE *))&this->DebugInfo[1].Flags)(
         this,
         a2,
         v20);
  LastError = v9;
  if ( v9 < 0 )
  {
    v15 = (unsigned int)v9;
    v16 = 577LL;
  }
  else
  {
    v11 = *a4 < v22;
    *a4 = v22;
    if ( v11 )
    {
      LastError = -2147024774;
      goto LABEL_7;
    }
    if ( SetFilePointer(this->LockSemaphore, lDistanceToMove, 0LL, 0) == -1 )
    {
      LastError = -2147418113;
      v16 = 587LL;
    }
    else
    {
      if ( !ReadFile(this->LockSemaphore, a3, *a4, &NumberOfBytesRead, 0LL) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x24D,
                      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                      v13);
        goto LABEL_7;
      }
      if ( NumberOfBytesRead == *a4 )
      {
        LastError = 0;
        goto LABEL_7;
      }
      LastError = -2147024883;
      v16 = 590LL;
    }
    v15 = LastError;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v15,
    v17);
LABEL_7:
  if ( v8 )
    LeaveCriticalSection(v8);
  return LastError;
}
