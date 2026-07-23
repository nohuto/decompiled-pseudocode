/*
 * XREFs of sub_1406BBE6C @ 0x1406BBE6C
 * Callers:
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1406BBF6C @ 0x1406BBF6C (sub_1406BBF6C.c)
 *     sub_140724418 @ 0x140724418 (sub_140724418.c)
 */

char __fastcall sub_1406BBE6C(__int64 *a1, void *a2, char a3)
{
  bool v3; // di
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // r12
  __int64 v11; // r8

  v3 = 0;
  if ( !a2 )
    return 0;
  if ( a3 || (v6 = *a1) == 0 )
    v6 = a1[2];
  if ( *(_DWORD *)(v6 + 192) == 2 && *(int *)(v6 + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  v9 = *(_DWORD *)(v6 + 124);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v6 + 152);
    while ( !RtlEqualSid(a2, *(PSID *)(v10 + 16LL * v8)) )
    {
      if ( ++v8 >= v9 )
        goto LABEL_10;
    }
    v3 = (unsigned __int8)sub_1406BBF6C(v6, v8) != 0;
  }
LABEL_10:
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegion();
  if ( !v3 )
  {
    LOBYTE(v11) = 1;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_140724418)(stru_140D3CA70, a1, v11);
  }
  return v3;
}
