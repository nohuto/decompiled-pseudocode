/*
 * XREFs of sub_1402E851C @ 0x1402E851C
 * Callers:
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 * Callees:
 *     sub_1402393AC @ 0x1402393AC (sub_1402393AC.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1403385E0 @ 0x1403385E0 (sub_1403385E0.c)
 *     sub_1403AC4E0 @ 0x1403AC4E0 (sub_1403AC4E0.c)
 *     sub_1405B3384 @ 0x1405B3384 (sub_1405B3384.c)
 */

__int64 __fastcall sub_1402E851C(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 result; // rax

  v6 = *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2);
  v7 = (unsigned int)sub_1402E8990(a1);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v9 = *((_DWORD *)sub_1402C1550(v8) + 2);
  v10 = sub_1402E8990(a2);
  if ( (_DWORD)v6 == v9 && (_DWORD)v7 == v10 )
  {
    v11 = sub_140273234(a1);
    v13 = 24512 * v6
        + *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((v12 >> 43) & 0x3FF)) + 16LL)
        + 88 * (v11 + 8 * v7 + 37);
    sub_1403385E0(
      a2,
      (8LL * (*(_DWORD *)(a1 + 36) & 0xFFE00000)) | ((v12 & 0xF80000000000000LL | (*(_QWORD *)a1 >> 20)) >> 20));
    if ( v14 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v13 + 24) = v8;
    }
    else
    {
      v15 = 48 * v14 - 0x220000000000LL;
      sub_1402393AC(v15, v8);
      *(_DWORD *)(v15 + 36) ^= (*(_DWORD *)(v15 + 36) ^ (v8 >> 19)) & 0x1FFFFF;
    }
    v16 = (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL;
    v17 = v16 | ((*(_DWORD *)(a1 + 36) & 0x1FFFFFLL) << 19);
    sub_1402393AC(a2, v16 | (*(_DWORD *)(a1 + 36) << 19));
    result = *(_DWORD *)(a2 + 36) & 0xFFE00000;
    *(_DWORD *)(a2 + 36) = result | (v17 >> 19);
    if ( v17 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(v13 + 16) = v8;
    else
      return sub_1403385E0(48 * v17 - 0x220000000000LL, v8);
  }
  else
  {
    sub_1403AC4E0(a1);
    return sub_1405B3384(a2, a3 & -(__int64)(*(_BYTE *)a3 != 0));
  }
  return result;
}
