/*
 * XREFs of sub_140A7C024 @ 0x140A7C024
 * Callers:
 *     sub_1402D8104 @ 0x1402D8104 (sub_1402D8104.c)
 * Callees:
 *     sub_140A7C0B8 @ 0x140A7C0B8 (sub_140A7C0B8.c)
 *     sub_140A7C18C @ 0x140A7C18C (sub_140A7C18C.c)
 */

__int64 __fastcall sub_140A7C024(PVOID *a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax

  v1 = a1 + 3;
  if ( !(unsigned int)sub_140A7C0B8(*a1, (__int64)(a1 + 3))
    || !(unsigned int)sub_140A7C0B8(*a1, (__int64)(a1 + 4))
    || (result = sub_140A7C0B8(*a1, (__int64)(a1 + 5)), !(_DWORD)result) )
  {
    sub_140A7C18C(v1);
    sub_140A7C18C(a1 + 4);
    result = sub_140A7C18C(a1 + 5);
    *v1 |= 1u;
  }
  return result;
}
