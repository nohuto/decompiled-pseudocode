/*
 * XREFs of ??$?0UFlyoutInstanceRecord@SnapFlyoutHost@@@?$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAA@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x180678108
 * Callers:
 *     ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x180679420 (--$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA-AV-$shared_ptr@UFlyoutInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::`vftable';
  v2 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 24) = v3;
  v4 = a2[2];
  a2[2] = 0LL;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = a2[3];
  v5 = a2[4];
  a2[4] = 0LL;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 56) = a2[5];
  v6 = a2[6];
  a2[6] = 0LL;
  *(_QWORD *)(a1 + 64) = v6;
  *(_QWORD *)(a1 + 72) = a2[7];
  v7 = a2[8];
  a2[8] = 0LL;
  *(_QWORD *)(a1 + 80) = v7;
  *(_QWORD *)(a1 + 88) = a2[9];
  v8 = a2[10];
  a2[10] = 0LL;
  *(_QWORD *)(a1 + 96) = v8;
  *(_QWORD *)(a1 + 104) = a2[11];
  v9 = a2[12];
  a2[12] = 0LL;
  *(_QWORD *)(a1 + 112) = v9;
  *(_QWORD *)(a1 + 120) = a2[13];
  return a1;
}
