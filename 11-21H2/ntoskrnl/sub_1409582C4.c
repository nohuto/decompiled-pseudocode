/*
 * XREFs of sub_1409582C4 @ 0x1409582C4
 * Callers:
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 * Callees:
 *     sub_140767DF8 @ 0x140767DF8 (sub_140767DF8.c)
 *     sub_140767EAC @ 0x140767EAC (sub_140767EAC.c)
 */

__int64 __fastcall sub_1409582C4(int **a1, __int64 a2, char a3)
{
  _DWORD *v3; // r11
  unsigned int v4; // ebx
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 v10; // r11
  char v11; // r12
  unsigned int v12; // r9d
  int v13; // eax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_DWORD **)a2;
  v4 = 0;
  v8 = 0;
  v9 = **a1;
  if ( **(_DWORD **)a2 )
  {
    while ( 1 )
    {
      if ( (int)sub_140767EAC((__int64)*a1, *(_QWORD *)&v3[6 * v8 + 4], v9, &v15) < 0 )
      {
        v11 = 0;
        v12 = *(_BYTE *)(v10 + 24LL * v8 + 32) & 1;
      }
      else
      {
        v11 = 1;
        v12 = a3 && (*(_DWORD *)(v10 + 24LL * v8 + 32) & 1) != 0;
      }
      v13 = sub_140767DF8(a1, *(_QWORD *)(v10 + 24LL * v8 + 16), *(unsigned int *)(v10 + 24LL * v8 + 24), v12);
      if ( (!v11 || v13 != -1073741771) && v13 < 0 )
        return (unsigned int)v13;
      v3 = *(_DWORD **)a2;
      if ( ++v8 >= **(_DWORD **)a2 )
      {
        v9 = **a1;
        goto LABEL_13;
      }
    }
  }
  else
  {
LABEL_13:
    if ( !v9 )
      *((_BYTE *)a1 + 8) = *(_BYTE *)(a2 + 8);
  }
  return v4;
}
