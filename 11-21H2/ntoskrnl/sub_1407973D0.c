/*
 * XREFs of sub_1407973D0 @ 0x1407973D0
 * Callers:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_140796530 @ 0x140796530 (sub_140796530.c)
 *     sub_14079781C @ 0x14079781C (sub_14079781C.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407973D0(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // si
  struct _FAST_MUTEX *v4; // rdi
  _RTL_RB_TREE *v6; // rcx

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  if ( v1 )
  {
    v3 = *(_BYTE *)(a1 + 98) & 1;
    v4 = &stru_140C16020;
    if ( !v3 )
      v4 = &stru_140C16080;
    ExAcquireFastMutex(v4);
    if ( (*(_DWORD *)(v1 + 24))-- == 1 )
    {
      v6 = &stru_140C16060;
      if ( !v3 )
        v6 = &stru_140C160C0;
      RtlRbRemoveNode(v6, (PRTL_BALANCED_NODE)v1);
    }
    else
    {
      v1 = 0LL;
    }
    KeReleaseGuardedMutex(v4);
    if ( v1 )
      ExFreePoolWithTag((PVOID)v1, 0);
  }
  return 0LL;
}
