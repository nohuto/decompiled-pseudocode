/*
 * XREFs of ??0HitTestResult@@QEAA@$$QEAU0@@Z @ 0x1801C44BC
 * Callers:
 *     ??$make_unique@UHitTestResult@@U1@$0A@@std@@YA?AV?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@0@$$QEAUHitTestResult@@@Z @ 0x1801C535C (--$make_unique@UHitTestResult@@U1@$0A@@std@@YA-AV-$unique_ptr@UHitTestResult@@U-$default_delete@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HitTestResult::HitTestResult(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  v4 = *(_QWORD *)(a2 + 96);
  v5 = *(_QWORD *)(a2 + 112);
  v6 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a1 + 96) = v4;
  result = a1;
  *(_QWORD *)(a1 + 104) = v6;
  *(_QWORD *)(a1 + 112) = v5;
  return result;
}
