/*
 * XREFs of ??$?0UFlyoutInstanceRecord@SnapFlyoutHost@@@?$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAA@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805AD55C
 * Callers:
 *     ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805AE26C (--$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA-AV-$shared_ptr@UFlyoutInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)(a1 + 24) = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2[2];
  a2[2] = 0LL;
  *(_QWORD *)(a1 + 32) = v2;
  v3 = a2[3];
  a2[3] = 0LL;
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 48) = a2[4];
  v4 = a2[5];
  a2[5] = 0LL;
  *(_QWORD *)(a1 + 56) = v4;
  *(_QWORD *)(a1 + 64) = a2[6];
  v5 = a2[7];
  a2[7] = 0LL;
  *(_QWORD *)(a1 + 72) = v5;
  *(_QWORD *)(a1 + 80) = a2[8];
  v6 = a2[9];
  a2[9] = 0LL;
  *(_QWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 96) = a2[10];
  v7 = a2[11];
  a2[11] = 0LL;
  *(_QWORD *)(a1 + 104) = v7;
  *(_QWORD *)(a1 + 112) = a2[12];
  return a1;
}
