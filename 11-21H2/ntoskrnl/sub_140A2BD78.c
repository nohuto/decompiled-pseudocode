/*
 * XREFs of sub_140A2BD78 @ 0x140A2BD78
 * Callers:
 *     sub_140787730 @ 0x140787730 (sub_140787730.c)
 *     sub_140A2BE80 @ 0x140A2BE80 (sub_140A2BE80.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_140A2BD78(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  __int64 v8; // rdi
  unsigned int v9; // r10d
  _DWORD *v10; // rbx
  __int64 v12; // r11
  int v13; // r8d
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v8 = (__int64)a5;
  v9 = 0;
  v10 = a8;
  v18 = 0;
  v12 = a6;
  *a5 = 0;
  *v10 = 0;
  if ( v12 )
  {
    v13 = a7;
    v12 &= -(__int64)(a7 != 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 >= 2 )
  {
    if ( v14 == 10 )
    {
      v15 = *(_QWORD *)a4 - 0x101A47EFB725F130LL;
      if ( *(_QWORD *)a4 == 0x101A47EFB725F130LL )
        v15 = *(_QWORD *)(a4 + 8) + 0x531461739FFD0E5BLL;
      if ( !v15 )
      {
        v16 = sub_14077DA5C(a1, a2, 4, a3, 0LL, (__int64)qword_14003B8B0, v8, v12, v13, (__int64)&v18, 0);
        v9 = v16;
        if ( !v16 || v16 == -1073741789 )
          *v10 = v18;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741264;
  }
  return v9;
}
