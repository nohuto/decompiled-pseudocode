/*
 * XREFs of Unload @ 0x1C0069DD0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     PushPost @ 0x1C002A7B8 (PushPost.c)
 */

__int64 __fastcall Unload(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 result; // rax
  _SLIST_ENTRY *v5; // r8

  result = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 1, "H");
  if ( !(_DWORD)result )
  {
    v5 = *(_SLIST_ENTRY **)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( v5 )
      return PushPost(a1, (__int64)ParseUnload, v5, 0LL, *(_SLIST_ENTRY **)(a2 + 88));
  }
  return result;
}
