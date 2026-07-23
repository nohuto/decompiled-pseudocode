/*
 * XREFs of sub_14096B158 @ 0x14096B158
 * Callers:
 *     sub_14092AAC4 @ 0x14092AAC4 (sub_14092AAC4.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14096B158(__int64 a1, __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  PVOID v7; // rax
  unsigned __int64 v8; // r14
  char *v9; // rsi
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // ebp
  PVOID v13; // rax
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  v14 = 0;
  *a2 = 0LL;
  if ( (v2 & 0x20) == 0 )
    return 3221225545LL;
  v7 = sub_1402828F0(256, 0x400uLL, 0x20206D4Du);
  *a2 = (__int64)v7;
  if ( !v7 )
    return 3221225495LL;
  v8 = sub_140287970(a1);
  v9 = (char *)sub_140281750(v8);
  v10 = sub_1407103B0(v9, *a2, 0x400u, &v14);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_11;
  if ( v10 == -1073741820 )
  {
    ExFreePoolWithTag((PVOID)*a2, 0);
    v12 = v14 + 1024;
    if ( v14 >= 0xFFFFFC00 || v14 == 0 )
    {
      *a2 = 0LL;
      sub_140280D08(v8, (unsigned __int64)v9);
      return 3221225495LL;
    }
    v13 = sub_1402828F0(256, v12, 0x20206D4Du);
    *a2 = (__int64)v13;
    if ( !v13 )
    {
      v3 = -1073741801;
LABEL_11:
      sub_140280D08(v8, (unsigned __int64)v9);
      return v3;
    }
    v11 = sub_1407103B0(v9, (__int64)v13, v12, &v14);
    if ( v11 >= 0 )
      goto LABEL_11;
  }
  sub_140280D08(v8, (unsigned __int64)v9);
  ExFreePoolWithTag((PVOID)*a2, 0);
  result = (unsigned int)v11;
  *a2 = 0LL;
  return result;
}
