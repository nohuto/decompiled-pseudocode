/*
 * XREFs of sub_14098259C @ 0x14098259C
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     sub_14059A640 @ 0x14059A640 (sub_14059A640.c)
 *     sub_14096DE64 @ 0x14096DE64 (sub_14096DE64.c)
 *     sub_14096DEDC @ 0x14096DEDC (sub_14096DEDC.c)
 *     sub_14096DF60 @ 0x14096DF60 (sub_14096DF60.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 */

__int64 __fastcall sub_14098259C(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 v5; // r14
  int v7; // ebp
  unsigned int v9; // ebx
  const void *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 result; // rax
  __int64 *v14; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int64 *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  v5 = *a1;
  v7 = *(_DWORD *)a2;
  v14 = 0LL;
  if ( a4 )
  {
    v9 = -1073741727;
    goto LABEL_14;
  }
  if ( (v7 & 0xFFFFFFE0) != 0 )
  {
LABEL_4:
    v9 = -1073741811;
    goto LABEL_14;
  }
  if ( (v7 & 0x10) != 0 )
  {
    if ( (v7 & 0xFFFFFFEF) != 0 || !sub_14059A640((_QWORD *)(a2 + 16)) )
      goto LABEL_4;
    v11 = sub_14096DF60(v5, v10, &v14, &v15);
    v4 = v14;
    v9 = v11;
    if ( v11 < 0 )
      goto LABEL_14;
    v5 = *v14;
    *(_DWORD *)a2 = 1;
  }
  else if ( (v7 & 7) == 0 )
  {
    goto LABEL_4;
  }
  if ( !*(_DWORD *)(a2 + 4) )
    goto LABEL_4;
  v12 = sub_140981BB0(v5, (unsigned __int64 *)(a3 + 48), (int *)a2);
  v9 = v12;
  if ( (*(_DWORD *)(v5 + 4) & 0x100) != 0 )
    sub_14096DEDC(v4, &v15, v12);
LABEL_14:
  sub_14096DE64((__int64)v4, &v15);
  result = v9;
  *(_DWORD *)a2 = v7;
  return result;
}
