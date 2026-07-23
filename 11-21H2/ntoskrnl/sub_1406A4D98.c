/*
 * XREFs of sub_1406A4D98 @ 0x1406A4D98
 * Callers:
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 * Callees:
 *     sub_1406A4E90 @ 0x1406A4E90 (sub_1406A4E90.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406A4D98(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ebx
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  _DWORD v15[6]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = -1;
  v15[1] = 0;
  if ( a2 == 4 )
  {
    return (unsigned int)sub_1406A4E90(a1, 4, a3, a4, a5, a6);
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      v12 = sub_1406BF400(v11, v10);
    else
      v12 = sub_1407C9820(v11);
    if ( v12 )
    {
      v13 = sub_1407C3490(*(_QWORD *)(a1 + 32), a4, a5, a1, a6);
      v14 = *(_QWORD *)(a1 + 32);
      v8 = v13;
      if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
        sub_1406BF450(v14, v15);
      else
        sub_1407C97C0(v14, v15);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
