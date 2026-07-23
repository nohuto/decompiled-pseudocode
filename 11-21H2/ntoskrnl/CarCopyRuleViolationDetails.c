/*
 * XREFs of CarCopyRuleViolationDetails @ 0x1406033F0
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CarCopyRuleViolationDetails(__int64 a1, __int64 a2)
{
  int v4; // ebx
  void *v5; // rsi
  void *v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  _WORD *Pool2; // rax
  __int64 v12; // rax
  _BYTE *v13; // rax

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 && a2 )
  {
    v7 = -1LL;
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
    v8 = *(_QWORD *)(a2 + 56);
    if ( v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v8 + 2 * v9) );
      v10 = v9 + 1;
      Pool2 = (_WORD *)ExAllocatePool2(64LL, 2 * v10, 1316118851LL);
      v6 = Pool2;
      if ( !Pool2 )
      {
        v4 = -1073741801;
LABEL_21:
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 24) = 0LL;
        return (unsigned int)v4;
      }
      v4 = sub_1402E0200(Pool2, v10, *(_QWORD *)(a2 + 56));
      if ( v4 < 0 )
      {
LABEL_15:
        ExFreePoolWithTag(v6, 0x4E726143u);
LABEL_16:
        if ( v5 )
          ExFreePoolWithTag(v5, 0x4E726143u);
        goto LABEL_21;
      }
      *(_QWORD *)(a1 + 56) = v6;
    }
    v12 = *(_QWORD *)(a2 + 24);
    if ( v12 )
    {
      do
        ++v7;
      while ( *(_BYTE *)(v12 + v7) );
      v13 = (_BYTE *)ExAllocatePool2(64LL, v7 + 1, 1316118851LL);
      v5 = v13;
      if ( !v13 )
      {
        v4 = -1073741801;
        goto LABEL_14;
      }
      v4 = sub_14024F6E4(v13, v7 + 1, *(_QWORD *)(a2 + 24));
      if ( v4 < 0 )
      {
LABEL_14:
        if ( !v6 )
          goto LABEL_16;
        goto LABEL_15;
      }
      *(_QWORD *)(a1 + 24) = v5;
    }
  }
  else
  {
    v4 = -1073741811;
    if ( a1 )
      goto LABEL_21;
  }
  return (unsigned int)v4;
}
