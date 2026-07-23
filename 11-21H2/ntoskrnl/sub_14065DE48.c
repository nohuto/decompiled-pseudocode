/*
 * XREFs of sub_14065DE48 @ 0x14065DE48
 * Callers:
 *     sub_14065D114 @ 0x14065D114 (sub_14065D114.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079BC7C @ 0x14079BC7C (sub_14079BC7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065DE48(__int64 a1, _QWORD *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  ULONG_PTR v6; // rsi
  char *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // ecx
  int v12; // edi
  ULONG_PTR v14; // rdx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]

  v15 = -1;
  v16 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  v7 = (char *)Allocate(PagedPool, 0xCuLL, 0x77554D43u, a4);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  *(_QWORD *)(v7 + 4) = 0LL;
  *(_DWORD *)v7 = 1;
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    v9 = sub_1406BF400(v6, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
  else
    v9 = sub_1407C9820(v6);
  v10 = v9;
  if ( !v9 )
  {
    v12 = -1073741670;
LABEL_18:
    v14 = (unsigned int)v8[2];
    if ( (_DWORD)v14 != -1 )
      sub_14079BD98(v6, v14);
    sub_140346D64(v8, 0x77554D43u);
    return (unsigned int)v12;
  }
  v8[1] = 0;
  v8[2] = -1;
  v11 = *(_DWORD *)(v9 + 36);
  if ( !v11
    || (v8[1] = v11, v12 = sub_14079BC7C(v6, *(unsigned int *)(v9 + 40), (__int64)(v8 + 2)), v12 >= 0)
    && (v12 = sub_14071F300(v6, *(unsigned int *)(v10 + 40)), v12 >= 0) )
  {
    v12 = 0;
    *a2 = v8;
    v8 = 0LL;
  }
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    sub_1406BF450(v6, &v15);
  else
    sub_1407C97C0(v6, &v15);
  if ( v8 )
    goto LABEL_18;
  return (unsigned int)v12;
}
