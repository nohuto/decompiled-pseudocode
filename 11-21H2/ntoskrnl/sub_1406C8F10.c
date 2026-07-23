/*
 * XREFs of sub_1406C8F10 @ 0x1406C8F10
 * Callers:
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406C8FF4 @ 0x1406C8FF4 (sub_1406C8FF4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406C8F10(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // edi
  ULONG_PTR v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  sub_1407C97FC(&v12);
  if ( *(_QWORD *)(a1 + 288) )
  {
    *a3 = 0;
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    v9 = sub_1406BF400(v8, *(unsigned int *)(a1 + 40), &v12);
  else
    v9 = sub_1407C9820(v8);
  v10 = v9;
  if ( !*(_DWORD *)(v9 + 36) )
  {
    *(_DWORD *)(a1 + 280) = 0;
    *(_DWORD *)(a1 + 284) = -1;
LABEL_8:
    v6 = 0;
    *a3 = 1;
    *(_QWORD *)(a1 + 288) = a2;
    goto LABEL_9;
  }
  v6 = sub_1406C8FF4(*(_QWORD *)(a1 + 32), *(unsigned int *)(v9 + 40), a1 + 284);
  if ( v6 >= 0 )
  {
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(v10 + 36);
    goto LABEL_8;
  }
LABEL_9:
  v11 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
    sub_1406BF450(v11, &v12);
  else
    sub_1407C97C0(v11, &v12);
  return (unsigned int)v6;
}
