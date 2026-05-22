/*
 * XREFs of ??0HitTestResult@@QEAA@$$QEAU0@@Z @ 0x180198D70
 * Callers:
 *     ??$make_unique@UHitTestResult@@U1@$0A@@std@@YA?AV?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@0@$$QEAUHitTestResult@@@Z @ 0x180199A40 (--$make_unique@UHitTestResult@@U1@$0A@@std@@YA-AV-$unique_ptr@UHitTestResult@@U-$default_delete@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HitTestResult::HitTestResult(__int64 a1, __int64 a2)
{
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
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  result = a1;
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 112) = 0LL;
  return result;
}
