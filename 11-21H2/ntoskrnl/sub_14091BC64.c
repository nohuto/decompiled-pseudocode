/*
 * XREFs of sub_14091BC64 @ 0x14091BC64
 * Callers:
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_1406E25B0 @ 0x1406E25B0 (sub_1406E25B0.c)
 *     sub_14091BC2C @ 0x14091BC2C (sub_14091BC2C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091BC64(unsigned int a1, PVOID *a2, __int64 a3, _DWORD *a4)
{
  int v4; // esi
  PVOID *v7; // r14
  __int64 v8; // rbp
  PVOID v9; // rbx
  struct _KENLISTMENT *v10; // rcx
  int v11; // edi

  v4 = 0;
  if ( a1 )
  {
    v7 = a2;
    v8 = a1;
    do
    {
      v9 = *v7;
      v10 = (struct _KENLISTMENT *)*v7;
      if ( ((unsigned __int8)*v7 & 1) != 0 )
      {
        v11 = sub_1406E25B0((volatile signed __int32 *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFEuLL));
        sub_14067F788((__int64)v9);
      }
      else
      {
        v11 = TmRollbackEnlistment_0(v10, 0LL);
        ObfDereferenceObject(*v7);
      }
      if ( v11 < 0 && v4 >= 0 && (((v11 + 1072103405) & 0xFFFFFFFC) != 0 || v11 == -1072103404) )
        v4 = v11;
      ++v7;
      --v8;
    }
    while ( v8 );
    ExFreePoolWithTag(a2, 0x36344D43u);
  }
  sub_14091BC2C(a4);
  return (unsigned int)v4;
}
