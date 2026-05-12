/*
 * XREFs of sub_1C001EF40 @ 0x1C001EF40
 * Callers:
 *     sub_1C001F11C @ 0x1C001F11C (sub_1C001F11C.c)
 * Callees:
 *     sub_1C001F038 @ 0x1C001F038 (sub_1C001F038.c)
 *     sub_1C001F2A0 @ 0x1C001F2A0 (sub_1C001F2A0.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C001EF40(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  int v9; // ebx
  int v10; // ecx
  unsigned __int64 v11; // r13
  char v12; // al
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  void *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int128 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-10h]

  *(_QWORD *)(a4 + 8) = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  result = sub_1C001F038(&v18, a1);
  v9 = result;
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)a4;
    v11 = *(unsigned int *)(*(_QWORD *)(a1 + 184) + 8LL);
    BYTE2(v18) = *(_BYTE *)(a2 + 4);
    v12 = *(_BYTE *)(a2 + 3);
    if ( v12 < 0 )
    {
      if ( BYTE7(v18) )
        v17 = (void *)(*(_QWORD *)(a1 + 24) + (unsigned int)v20);
      else
        v17 = 0LL;
      v13 = *(unsigned __int8 *)(a2 + 11);
      BYTE7(v18) = *(_BYTE *)(a2 + 11);
      if ( v17 && (_BYTE)v13 )
      {
        memmove(v17, *(const void **)(a2 + 32), v13);
        v12 = *(_BYTE *)(a2 + 3);
      }
      v10 = 0;
    }
    else
    {
      LOBYTE(v13) = 0;
      BYTE7(v18) = 0;
    }
    v14 = *(unsigned int *)(a2 + 16);
    v9 = 0;
    HIDWORD(v18) = *(_DWORD *)(a2 + 16);
    if ( (v12 & 0x3F) != 0x12 )
      v9 = v10;
    if ( (_BYTE)v13 )
    {
      v15 = (unsigned int)v20 + (unsigned __int8)v13;
    }
    else
    {
      v15 = (unsigned __int16)v18;
      if ( v9 < 0 && *(_BYTE *)(a2 + 4) )
      {
        v9 = 0;
        v15 = 3LL;
      }
    }
    v16 = v15;
    if ( !a3 && BYTE8(v18) && (_DWORD)v14 && *((_QWORD *)&v19 + 1) )
      v16 = *((_QWORD *)&v19 + 1) + v14;
    if ( v16 >= v11 )
      v16 = v11;
    *(_QWORD *)(a4 + 8) = v16;
    result = sub_1C001F2A0(&v18, a1);
  }
  *(_DWORD *)a4 = v9;
  return result;
}
