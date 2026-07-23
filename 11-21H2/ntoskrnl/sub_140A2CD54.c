/*
 * XREFs of sub_140A2CD54 @ 0x140A2CD54
 * Callers:
 *     sub_140A2CC38 @ 0x140A2CC38 (sub_140A2CC38.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_140787DE8 @ 0x140787DE8 (sub_140787DE8.c)
 */

__int64 __fastcall sub_140A2CD54(__int64 a1, int a2, HANDLE a3, __int64 a4, int a5, void *a6, ULONG a7)
{
  int v7; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  __int64 v15; // [rsp+28h] [rbp-30h]
  HANDLE v16[3]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  v16[0] = 0LL;
  Handle = 0LL;
  v10 = *(unsigned int *)(a4 + 16);
  if ( (unsigned int)v10 < 2 || (_DWORD)v10 != *((_DWORD *)&qword_140010B80 + 4) )
    return (unsigned int)-1073741264;
  v11 = *(_QWORD *)a4 - 0x44B70B3F14C83A99LL;
  if ( *(_QWORD *)a4 == 0x44B70B3F14C83A99LL )
    v11 = *(_QWORD *)(a4 + 8) - *(&qword_140010B80 + 1);
  if ( v11 )
    return (unsigned int)-1073741264;
  if ( a5 != 18 )
    return (unsigned int)-1073741811;
  if ( (_DWORD)v10 == 2 )
  {
    v12 = *(_QWORD *)a4 - 0x44B70B3F14C83A99LL;
    if ( *(_QWORD *)a4 == 0x44B70B3F14C83A99LL )
      v12 = *(_QWORD *)(a4 + 8) - 0x640599D378A14CBELL;
    if ( !v12 )
    {
      if ( !a3 )
      {
        v7 = sub_140787DE8(a1, a2, v10, a4, 1, 0, (__int64)v16, 0LL);
        if ( v7 < 0 )
        {
LABEL_20:
          if ( v16[0] )
            ZwClose(v16[0]);
          return (unsigned int)v7;
        }
        a3 = v16[0];
      }
      v7 = sub_14077EF20(a1, (__int64)a3, 0LL, 2u, 1, v15, &Handle);
      if ( v7 >= 0 )
      {
        v13 = sub_1406D5A30(Handle, L"Default", 1u, a6, a7);
        ZwClose(Handle);
        if ( v13 == -1073741444 )
        {
          v7 = -1073741772;
        }
        else if ( v13 < 0 )
        {
          v7 = v13;
        }
      }
      goto LABEL_20;
    }
  }
  return (unsigned int)v7;
}
