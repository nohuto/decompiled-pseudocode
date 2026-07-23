/*
 * XREFs of sub_1405CEA0C @ 0x1405CEA0C
 * Callers:
 *     sub_14098DAB8 @ 0x14098DAB8 (sub_14098DAB8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1405CEA0C(__int64 a1, int a2, _DWORD *a3)
{
  char result; // al
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v8 = 0;
  result = 0;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD *)(a1 + 72);
    v7 = a2;
    v6 = v5;
    result = sub_14042A5E0(28LL, &v6);
    if ( result )
      *a3 = v8;
  }
  return result;
}
