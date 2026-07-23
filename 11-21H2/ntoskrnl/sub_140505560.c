/*
 * XREFs of sub_140505560 @ 0x140505560
 * Callers:
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140512EF0 @ 0x140512EF0 (sub_140512EF0.c)
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 * Callees:
 *     sub_140456978 @ 0x140456978 (sub_140456978.c)
 *     sub_1405038DC @ 0x1405038DC (sub_1405038DC.c)
 *     sub_1405189C4 @ 0x1405189C4 (sub_1405189C4.c)
 */

__int64 __fastcall sub_140505560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, ULONG *a6)
{
  __int64 v6; // rcx
  ULONG v7; // r8d
  int v8; // r9d
  __int64 v9; // r10

  if ( (unsigned int)sub_140456978(a2) == 2 )
    return sub_1405189C4(v6, v9, v7, v8, a5, (__int64)a6);
  else
    return sub_1405038DC(v6, v9, v7, v8, a5, a6);
}
