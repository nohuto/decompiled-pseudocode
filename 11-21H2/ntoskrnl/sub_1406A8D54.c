/*
 * XREFs of sub_1406A8D54 @ 0x1406A8D54
 * Callers:
 *     sub_1406A8B68 @ 0x1406A8B68 (sub_1406A8B68.c)
 * Callees:
 *     sub_140230C48 @ 0x140230C48 (sub_140230C48.c)
 */

__int64 __fastcall sub_1406A8D54(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // eax
  int v9; // esi
  unsigned int v10; // edx
  unsigned int v11; // ebx
  unsigned int v12; // esi
  _DWORD *v13; // rax
  _DWORD *v14; // rcx
  __int64 result; // rax
  int v16; // eax
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0;
  v4 = a2 - 16;
  v18 = 0;
  v17 = 0;
  v9 = -(a2 < 0x38);
  v10 = 0;
  v11 = -1073741820;
  v12 = v9 & 0xC0000004;
  if ( a2 >= 0x38 )
    v10 = v4;
  v13 = (_DWORD *)(a1 + 16);
  v14 = 0LL;
  if ( a2 >= 0x38 )
    v14 = v13;
  result = sub_140230C48(v14, v10, &v18, &v17);
  if ( (int)result >= 0 )
  {
    v11 = v12;
    if ( a2 >= 0x38 )
    {
      v16 = v18;
      *(_DWORD *)(a1 + 12) = v18;
      *(_DWORD *)(a1 + 8) = a4;
      *(_QWORD *)a1 = (unsigned int)(40 * (v16 - 1) + 56);
    }
    goto LABEL_8;
  }
  if ( (_DWORD)result == -1073741820 )
  {
LABEL_8:
    result = v11;
    *a3 = 40 * (v17 - 1) + 56;
  }
  return result;
}
