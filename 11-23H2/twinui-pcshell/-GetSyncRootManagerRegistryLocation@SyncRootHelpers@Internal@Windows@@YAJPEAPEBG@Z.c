/*
 * XREFs of ?GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z @ 0x18079AE04
 * Callers:
 *     ??R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ @ 0x18079A5B8 (--R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPersistedRegistryLocationAlloc@@YAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18079ABB4 (-GetPersistedRegistryLocationAlloc@@YAJPEBG0AEAV-$unique_any_t@V-$unique_storage@U-$resource_pol.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SyncRootHelpers::GetSyncRootManagerRegistryLocation(
        Windows::Internal::SyncRootHelpers *this,
        const unsigned __int16 **a2)
{
  __int64 v3; // rax
  int PersistedRegistryLocationAlloc; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  v3 = qword_18098F2A8;
  if ( !qword_18098F2A8 )
  {
    AcquireSRWLockExclusive(&stru_180992450);
    if ( !qword_18098F2A8 )
    {
      PersistedRegistryLocationAlloc = GetPersistedRegistryLocationAlloc();
      v5 = PersistedRegistryLocationAlloc;
      if ( PersistedRegistryLocationAlloc < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B,
          (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
          (const char *)(unsigned int)PersistedRegistryLocationAlloc);
        ReleaseSRWLockExclusive(&stru_180992450);
        return v5;
      }
    }
    ReleaseSRWLockExclusive(&stru_180992450);
    v3 = qword_18098F2A8;
  }
  *(_QWORD *)this = v3;
  return 0LL;
}
