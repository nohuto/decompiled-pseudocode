/*
 * XREFs of sub_14065445C @ 0x14065445C
 * Callers:
 *     sub_140AA9594 @ 0x140AA9594 (sub_140AA9594.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_14065445C(int a1, unsigned int a2, __int64 a3, _DWORD *a4, char a5, unsigned __int8 a6)
{
  unsigned __int8 v6; // r11
  unsigned int v8; // r8d
  __int64 v11; // rbp
  __int64 *v12; // r14
  char v13; // di
  int v14; // eax

  v6 = a6;
  v8 = 1;
  if ( a2 )
    v8 = a2;
  if ( v8 > 4 )
    return 0;
  v11 = v8 - 1;
  v12 = (__int64 *)((char *)&unk_140D04CF0 + 40 * v11);
  if ( *v12 )
    return 0;
  if ( a6 )
  {
    v13 = a5;
  }
  else
  {
    v13 = 0;
    if ( a3 )
    {
      v6 = 1;
      goto LABEL_12;
    }
    a3 = v8;
  }
  if ( !a3 || a6 >= 0x15u )
    return 0;
LABEL_12:
  qword_140C0DE38 = (__int64)off_14000B2E0[v6];
  if ( !qword_140C0DE38 )
    return 0;
  if ( v13 )
  {
    a3 = MmMapIoSpaceEx(a3, 4096LL, 0x204u);
    if ( !a3 )
      return 0;
  }
  *v12 = a3;
  v14 = 19200;
  if ( a1 )
    v14 = a1;
  dword_140D04CF8[10 * v11] = v14;
  *a4 = v11;
  return sub_14042A5E0(0LL, (char *)&unk_140D04CF0 + 40 * v11);
}
