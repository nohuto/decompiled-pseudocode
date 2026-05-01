/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb_____lambda_630b2476087197e3d624f13f03cc25bb___ @ 0x1804616F4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_630b2476087197e3d624f13f03cc25bb___ @ 0x180461FB8 (Windows--Internal--ComTaskPool--QueueTask__lambda_630b2476087197e3d624f13f03cc25bb___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb_____lambda_630b2476087197e3d624f13f03cc25bb___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *((_OWORD *)a1 + 1) = *(_OWORD *)a2;
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  a1[6] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 56) = 7LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_WORD *)(a2 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = 0LL;
  a1[10] = v4;
  *a1 = off_1807D5AD0;
  return a1;
}
