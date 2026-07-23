/*
 * XREFs of sub_140846200 @ 0x140846200
 * Callers:
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     KeSystemFullyCacheCoherent @ 0x14056F770 (KeSystemFullyCacheCoherent.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 */

char __fastcall sub_140846200(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char result; // al
  _OWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  *a3 = 0;
  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  if ( a1 )
  {
    result = *(_BYTE *)(a1 + 72);
    *a3 = result;
  }
  else if ( a2 && (int)IoQueryInterface(a2, 1, (int)&qword_140012940, 40, 1, 0LL, v7) >= 0 )
  {
    v5 = *((_QWORD *)&v7[0] + 1);
    *a3 = v8;
    return sub_14042A5E0(v5, v4);
  }
  else
  {
    *a3 = 1;
    result = KeSystemFullyCacheCoherent();
    if ( !result )
      *a3 = 0;
  }
  return result;
}
