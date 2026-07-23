/*
 * XREFs of KeRegisterBoundCallback @ 0x14056A800
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140832A20 @ 0x140832A20 (sub_140832A20.c)
 *     sub_14096C8B0 @ 0x14096C8B0 (sub_14096C8B0.c)
 */

__int64 __fastcall KeRegisterBoundCallback(__int64 a1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rsi

  v2 = 0LL;
  if ( (unsigned int)sub_14096C8B0() )
  {
    v3 = (struct _EX_RUNDOWN_REF *)sub_140832A20(a1, 0LL);
    v4 = v3;
    if ( v3 )
    {
      if ( sub_1403C7678(&qword_140C2BD40, v3, 0LL) )
        return a1;
      else
        sub_1406D9550(v4);
    }
  }
  return v2;
}
