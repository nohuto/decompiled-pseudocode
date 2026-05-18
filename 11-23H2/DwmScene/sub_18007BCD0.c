/*
 * XREFs of sub_18007BCD0 @ 0x18007BCD0
 * Callers:
 *     sub_18007C218 @ 0x18007C218 (sub_18007C218.c)
 * Callees:
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_18007BA44 @ 0x18007BA44 (sub_18007BA44.c)
 *     sub_18007C0AC @ 0x18007C0AC (sub_18007C0AC.c)
 *     sub_18007C504 @ 0x18007C504 (sub_18007C504.c)
 */

__int64 __fastcall sub_18007BCD0(__int64 a1, __int64 a2, int *a3, _QWORD *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r9d
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]

  v14 = 0;
  v6 = qword_1801D8A38;
  v7 = *(_QWORD *)(qword_1801D8A38 + 8);
  v13 = v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      v13 = v7;
      if ( *(_DWORD *)(v7 + 32) >= v8 )
      {
        v6 = v7;
        v14 = 1;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v14 = 0;
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a3 < *(_DWORD *)(v6 + 32) )
  {
    if ( qword_1801D8A40 == 0x492492492492492LL )
      sub_18001DDFC();
    v9 = sub_18007BA44(v12, (__int64)&qword_1801D8A38, qword_1801D8A38, a3, a4);
    v10 = v9[1];
    v9[1] = 0LL;
    sub_18007C0AC(v12);
    *(_QWORD *)a2 = sub_18007C504(&qword_1801D8A38, &v13, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
