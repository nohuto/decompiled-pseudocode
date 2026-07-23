/*
 * XREFs of sub_140745620 @ 0x140745620
 * Callers:
 *     sub_140746270 @ 0x140746270 (sub_140746270.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     sub_14094CFE8 @ 0x14094CFE8 (sub_14094CFE8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 */

__int64 __fastcall sub_140745620(int a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ebx
  __int64 *v7; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  __int64 v13; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF

  Handle = 0LL;
  v5 = sub_14077C924(qword_140D00AC0, a1, 9, 131097, 0, (__int64)&Handle);
  if ( v5 >= 0 )
  {
    v9 = 0;
    v11 = 0;
    v13 = 0LL;
    v7 = qword_14000FC50;
    v8 = 18;
    v10 = a2;
    v12 = 6;
    v5 = sub_140746CCC(v4, a1, 9, (_DWORD)Handle, (__int64)&v7, 1);
    if ( v5 >= 0 && (int)v13 < 0 )
      v5 = v13;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
