/*
 * XREFs of sub_1407A7098 @ 0x1407A7098
 * Callers:
 *     sub_1407A6CE4 @ 0x1407A6CE4 (sub_1407A6CE4.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

__int64 __fastcall sub_1407A7098(__int64 Object, signed __int64 a2)
{
  _DWORD *v3; // rdi
  PVOID v5; // rcx

  v3 = (_DWORD *)Object;
  if ( Object )
    v3 = (_DWORD *)(-(__int64)(ObReferenceObjectSafe(Object) != 0) & Object);
  if ( a2 )
    a2 &= -(__int64)(ObReferenceObjectSafe(a2) != 0);
  if ( v3 )
  {
    if ( !a2 )
    {
      v5 = v3;
LABEL_14:
      ObfDereferenceObject(v5);
      return 3221225527LL;
    }
    if ( (v3[104] & 0x20) == 0 && (*(_DWORD *)(a2 + 416) & 0x20) == 0 )
      return 0LL;
    ObfDereferenceObject(v3);
LABEL_13:
    v5 = (PVOID)a2;
    goto LABEL_14;
  }
  if ( a2 )
    goto LABEL_13;
  return 3221225527LL;
}
