/*
 * XREFs of ?PartitionTelemetryTouchInteractionUpdate@CChannel@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801AC000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionUpdate(
        CDataStreamWriter **this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v17; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD v18[13]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+F8h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+110h] [rbp+8h] BYREF

  v20 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v17 = 287;
  memset_0(v18, 0, 0xD8uLL);
  v4 = *((_OWORD *)a2 + 1);
  v18[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v18[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v18[2] = v5;
  v7 = *((_OWORD *)a2 + 4);
  v18[3] = v6;
  v8 = *((_OWORD *)a2 + 5);
  v18[4] = v7;
  v9 = *((_OWORD *)a2 + 6);
  v18[5] = v8;
  v18[6] = v9;
  v10 = *((_OWORD *)a2 + 7);
  a2 = (const struct TOUCH_TELEMETRY_UPDATE_INFO *)((char *)a2 + 128);
  v18[7] = v10;
  v11 = *((_QWORD *)a2 + 10);
  v12 = *((_OWORD *)a2 + 1);
  v18[8] = *(_OWORD *)a2;
  v13 = *((_OWORD *)a2 + 2);
  v18[9] = v12;
  v14 = *((_OWORD *)a2 + 3);
  v18[10] = v13;
  v15 = *((_OWORD *)a2 + 4);
  v18[11] = v14;
  v18[12] = v15;
  v19 = v11;
  LODWORD(a2) = CChannel::SendCommand(this, &v17, 0xE0u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
  return (unsigned int)a2;
}
