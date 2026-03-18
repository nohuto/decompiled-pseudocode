/*
 * XREFs of CmFcpChangeSubscriptionWrapper @ 0x140A27AF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402C1E30 (MmGetSessionById.c)
 *     MmDetachSession @ 0x1403562B0 (MmDetachSession.c)
 *     MmAttachSession @ 0x140356350 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

_KPROCESS *__fastcall CmFcpChangeSubscriptionWrapper(__int64 a1, __int64 a2)
{
  int v2; // eax
  _KPROCESS *v3; // rbx
  _KPROCESS *result; // rax
  $115DCDF994C6370D29323EAB0E0C9502 v7; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0LL;
  memset(&v7, 0, sizeof(v7));
  if ( (v2 & 1) == 0 )
    goto LABEL_4;
  result = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(a1 + 76));
  v3 = result;
  if ( !result )
    return result;
  if ( (int)MmAttachSession(result, (__int64)&v7) >= 0 )
  {
LABEL_4:
    result = (_KPROCESS *)(*(__int64 (__fastcall **)(__int64))(a1 + 64))(a2);
    if ( !v3 )
      return result;
    MmDetachSession((__int64)v3, &v7);
  }
  return (_KPROCESS *)ObfDereferenceObject(v3);
}
