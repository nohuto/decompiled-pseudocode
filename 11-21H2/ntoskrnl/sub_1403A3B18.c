/*
 * XREFs of sub_1403A3B18 @ 0x1403A3B18
 * Callers:
 *     sub_1403A379C @ 0x1403A379C (sub_1403A379C.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 */

__int64 __fastcall sub_1403A3B18(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 v7; // rdx

  v2 = a1[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  ObfReferenceObjectWithTag(*(PVOID *)(v2 + 40), 0x72496F50u);
  v4 = a1 + 21;
  if ( a1 == (_QWORD *)qword_140C227A8 )
  {
    v7 = qword_140C22760;
    if ( *(__int64 **)(qword_140C22760 + 8) == &qword_140C22760 )
    {
      *v4 = qword_140C22760;
      a1[22] = &qword_140C22760;
      *(_QWORD *)(v7 + 8) = v4;
      qword_140C22760 = (__int64)(a1 + 21);
      return sub_14035AD70((volatile signed __int32 *)&byte_140C22780, 0LL, 1LL, v3, 0);
    }
LABEL_7:
    __fastfail(3u);
  }
  v5 = (_QWORD *)qword_140C22768;
  if ( *(__int64 **)qword_140C22768 != &qword_140C22760 )
    goto LABEL_7;
  *v4 = &qword_140C22760;
  a1[22] = v5;
  *v5 = v4;
  qword_140C22768 = (__int64)(a1 + 21);
  return sub_14035AD70((volatile signed __int32 *)&byte_140C22780, 0LL, 1LL, v3, 0);
}
