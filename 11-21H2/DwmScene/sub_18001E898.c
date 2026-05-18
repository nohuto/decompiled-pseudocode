/*
 * XREFs of sub_18001E898 @ 0x18001E898
 * Callers:
 *     sub_1800FFD44 @ 0x1800FFD44 (sub_1800FFD44.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_18001E898(__int64 a1)
{
  int result; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx

  result = InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), 0LL);
  if ( !result )
  {
    result = o_abort(v3, v2);
    __debugbreak();
  }
  return result;
}
