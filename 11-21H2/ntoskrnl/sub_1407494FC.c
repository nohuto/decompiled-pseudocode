/*
 * XREFs of sub_1407494FC @ 0x1407494FC
 * Callers:
 *     sub_1402D2238 @ 0x1402D2238 (sub_1402D2238.c)
 * Callees:
 *     sub_1402D2388 @ 0x1402D2388 (sub_1402D2388.c)
 *     sub_1403BA6E0 @ 0x1403BA6E0 (sub_1403BA6E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407494FC(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING v4; // xmm0
  unsigned int v5; // ebx
  int v7; // eax
  UNICODE_STRING P; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  P = 0LL;
  if ( sub_1402D2388(a1, (__int64)&P) < 0 )
  {
    v4 = *(UNICODE_STRING *)(a1 + 40);
LABEL_3:
    *(UNICODE_STRING *)(a1 + 128) = v4;
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  v7 = sub_1403BA6E0(&P, &v9);
  v5 = v7;
  if ( v7 >= 0 )
  {
    *(UNICODE_STRING *)(a1 + 128) = P;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 0x2000u);
    goto LABEL_4;
  }
  if ( v7 != -1073741738 )
  {
    v4 = P;
    goto LABEL_3;
  }
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0x4D584650u);
LABEL_5:
  *a2 = v9;
  return v5;
}
