/*
 * XREFs of sub_1406CF4C0 @ 0x1406CF4C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 */

char __fastcall sub_1406CF4C0(int a1, int a2, int a3, __int64 SessionId)
{
  char v4; // bl
  int v5; // eax
  char v6; // cl
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  LOBYTE(v8) = 0;
  if ( SessionId && a3 == 1 )
  {
    v5 = sub_14077D454(a1, a2, 1, 0, SessionId, (__int64)&v8);
    v6 = v8;
    if ( v5 < 0 )
      return 0;
    return v6;
  }
  return v4;
}
