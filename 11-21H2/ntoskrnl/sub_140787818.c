/*
 * XREFs of sub_140787818 @ 0x140787818
 * Callers:
 *     sub_140787730 @ 0x140787730 (sub_140787730.c)
 *     sub_140A2BE80 @ 0x140A2BE80 (sub_140A2BE80.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_140787DE8 @ 0x140787DE8 (sub_140787DE8.c)
 */

__int64 __fastcall sub_140787818(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r15
  int v9; // ebx
  _DWORD *v10; // r12
  HANDLE v11; // r10
  void *v14; // rdi
  int v15; // esi
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v21; // edi
  __int64 v22; // [rsp+28h] [rbp-28h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  int v25; // [rsp+98h] [rbp+48h] BYREF

  v8 = a5;
  v9 = 0;
  v10 = a8;
  v11 = a3;
  v25 = 0;
  Handle = 0LL;
  *a5 = 0;
  *v10 = 0;
  KeyHandle = 0LL;
  v14 = (void *)a6;
  if ( a6 )
  {
    v15 = a7;
    v14 = (void *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 || v16 != *((_DWORD *)&qword_140010B80 + 4) )
    return (unsigned int)-1073741264;
  v17 = *(_QWORD *)a4 - 0x44B70B3F14C83A99LL;
  if ( *(_QWORD *)a4 == 0x44B70B3F14C83A99LL )
    v17 = *(_QWORD *)(a4 + 8) - *(&qword_140010B80 + 1);
  if ( v17 )
    return (unsigned int)-1073741264;
  if ( v16 == 2 )
  {
    v18 = *(_QWORD *)a4 - 0x44B70B3F14C83A99LL;
    if ( *(_QWORD *)a4 == 0x44B70B3F14C83A99LL )
      v18 = *(_QWORD *)(a4 + 8) - 0x640599D378A14CBELL;
    if ( !v18 )
    {
      if ( !a3 )
      {
        v9 = sub_140787DE8(a1, a2, (unsigned int)&qword_140010B80, a4, 1, 0, (__int64)&Handle, 0LL);
        if ( v9 < 0 )
          goto LABEL_15;
        v11 = Handle;
      }
      v19 = sub_14077EF20(a1, (__int64)v11, 0LL, 1u, 0, v22, &KeyHandle);
      v9 = v19;
      if ( v19 == -1073741772 )
      {
LABEL_14:
        v9 = -1073741275;
        goto LABEL_15;
      }
      if ( v19 >= 0 )
      {
        LODWORD(a5) = v15;
        v21 = sub_14077FC64(KeyHandle, L"Default", &v25, v14, (unsigned int *)&a5);
        ZwClose(KeyHandle);
        if ( v21 != -1073741772 && v21 != -1073741444 )
        {
          if ( !v21 || v21 == -1073741789 )
          {
            *v10 = (_DWORD)a5;
            *v8 = 18;
            if ( v21 || !v15 )
              v9 = -1073741789;
          }
          else
          {
            v9 = v21;
          }
          goto LABEL_15;
        }
        goto LABEL_14;
      }
LABEL_15:
      if ( Handle )
        ZwClose(Handle);
    }
  }
  return (unsigned int)v9;
}
