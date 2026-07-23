/*
 * XREFs of sub_1409234E0 @ 0x1409234E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

ULONG_PTR __fastcall sub_1409234E0(__int64 a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rbx
  ULONG_PTR result; // rax
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0LL;
  memset(v6, 0, sizeof(v6));
  if ( (v2 & 1) == 0 )
    goto LABEL_4;
  result = sub_1402DF880(*(_DWORD *)(a1 + 76));
  v3 = (void *)result;
  if ( !result )
    return result;
  if ( (int)sub_1402312E0(result) >= 0 )
  {
LABEL_4:
    result = sub_14042A5E0(a2, a2);
    if ( !v3 )
      return result;
    sub_140231240((__int64)v3, (__int64)v6);
  }
  return ObfDereferenceObject(v3);
}
