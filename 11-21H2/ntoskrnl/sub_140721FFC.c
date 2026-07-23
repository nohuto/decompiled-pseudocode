/*
 * XREFs of sub_140721FFC @ 0x140721FFC
 * Callers:
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407221B0 @ 0x1407221B0 (sub_1407221B0.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140721FFC(__int64 a1, __int64 a2, int a3, const void *a4, unsigned int a5)
{
  char v8; // r15
  ULONG_PTR v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // eax
  void *v16; // rdi
  SIZE_T v17; // r8
  __int64 v18; // rcx
  char v20; // al
  __int64 v21; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  LOBYTE(v26) = 0;
  v25 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v24 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v8 = 0;
  if ( (int)sub_1407221B0(*(_QWORD *)(a1 + 32), 0LL, (__int64)&BugCheckParameter4) < 0 )
    return 2;
  v9 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v10 = sub_1406BF400(v9, (unsigned int)BugCheckParameter4, &v23);
  else
    v10 = sub_1407C9820(v9);
  v11 = 2;
  v12 = v10;
  if ( (*(_BYTE *)(v10 + 16) & 2) == 0 && a3 == *(_DWORD *)(v10 + 12) )
  {
    v13 = *(_DWORD *)(v10 + 4);
    v14 = a5;
    if ( a5 == (v13 & 0x7FFFFFFF) )
    {
      if ( a5 )
      {
        v15 = v13 + 0x80000000;
        if ( v13 < 0x80000000 )
          v15 = v13;
        LODWORD(BugCheckParameter4) = v15;
        if ( v13 < 0x80000000 )
        {
          v8 = 1;
          v20 = sub_1407C46A0(*(_QWORD *)(a1 + 32), (__int64)&v25, (__int64)&v26, (__int64)&v24);
          v16 = (void *)v25;
          if ( !v20 )
            goto LABEL_13;
        }
        else
        {
          v16 = (void *)(v12 + 8);
        }
        v17 = v14;
        LODWORD(v17) = v14 & 0x7FFFFFFF;
        v11 = v14 != (unsigned int)RtlCompareMemory(v16, a4, v17) ? 2 : 0;
LABEL_13:
        if ( v16 && v8 )
        {
          if ( (_BYTE)v26 == 1 )
          {
            ExFreePoolWithTag(v16, 0);
          }
          else
          {
            v21 = *(_QWORD *)(a1 + 32);
            if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
              sub_1406BF450(v21, &v24);
            else
              sub_1407C97C0(v21, &v24);
          }
        }
        goto LABEL_15;
      }
      v11 = 0;
    }
  }
LABEL_15:
  v18 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
    sub_1406BF450(v18, &v23);
  else
    sub_1407C97C0(v18, &v23);
  return v11;
}
