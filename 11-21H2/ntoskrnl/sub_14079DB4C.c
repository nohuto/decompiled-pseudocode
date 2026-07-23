/*
 * XREFs of sub_14079DB4C @ 0x14079DB4C
 * Callers:
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402ED880 @ 0x1402ED880 (sub_1402ED880.c)
 *     sub_1402ED98C @ 0x1402ED98C (sub_1402ED98C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140724418 @ 0x140724418 (sub_140724418.c)
 */

BOOLEAN __fastcall sub_14079DB4C(struct _SECURITY_SUBJECT_CONTEXT *a1, _DWORD *a2, char a3)
{
  _DWORD *SeMediumMandatorySid; // rdi
  __int64 ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al
  BOOLEAN v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  ClientToken = (__int64)a1->ClientToken;
  if ( !a1->ClientToken )
    ClientToken = (__int64)a1->PrimaryToken;
  if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
  sub_1402ED98C(ClientToken);
  ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( (a3 & 8) != 0 )
  {
    if ( (int)sub_1402ED880(SeMediumMandatorySid, (_DWORD *)SeExports->SeMediumMandatorySid, (bool *)&v9) < 0 )
      return 0;
    if ( !v9 )
      SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  }
  if ( (int)sub_1402ED880(0LL, SeMediumMandatorySid, (bool *)&v9) < 0 )
    return 0;
  result = v9;
  if ( !v9 )
    return sub_140724418((LUID)qword_140D3CAA0, a1, 1);
  return result;
}
