/*
 * XREFs of sub_140A7F670 @ 0x140A7F670
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F778 @ 0x140A7F778 (sub_140A7F778.c)
 *     sub_140A96904 @ 0x140A96904 (sub_140A96904.c)
 */

__int64 __fastcall sub_140A7F670(__int64 a1, unsigned int a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // rsi
  int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = a1;
  v5 = a1;
  LOBYTE(a1) = a4;
  v7 = sub_140A7F778(a1);
  v8 = a5;
  if ( v7 )
  {
    v9 = 257;
  }
  else
  {
    v11 = a5;
    v9 = sub_14042A5E0(v5, a2);
  }
  if ( dword_140D5751C && (v9 & 0xFFFFFF7F) == 0 )
    sub_140A96904(1LL, &v13, v8, retaddr, v11);
  return v9;
}
