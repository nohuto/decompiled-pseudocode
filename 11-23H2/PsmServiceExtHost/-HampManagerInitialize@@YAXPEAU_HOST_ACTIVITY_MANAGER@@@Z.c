/*
 * XREFs of ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180046EDC
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004695C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempLockInitialize @ 0x1800114A4 (CempLockInitialize.c)
 *     CemRcTableInitialize @ 0x180011588 (CemRcTableInitialize.c)
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x18004712C (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     ?HampHostIdStoreInitialize@@YAXPEAU_TP_CALLBACK_ENVIRON_V3@@PEAU_HAM_HOSTID_STORE@@@Z @ 0x18004EBEC (-HampHostIdStoreInitialize@@YAXPEAU_TP_CALLBACK_ENVIRON_V3@@PEAU_HAM_HOSTID_STORE@@@Z.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampManagerInitialize(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp

  memset_0(a1, 0, 0x448uLL);
  *(__m128i *)&HampNextHandleValues = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  xmmword_1800DC500 = *(_OWORD *)&HampNextHandleValues;
  unk_1800DC510 = *(_OWORD *)&HampNextHandleValues;
  xmmword_1800DC520 = *(_OWORD *)&HampNextHandleValues;
  *((_DWORD *)a1 + 244) = 3;
  *((_QWORD *)a1 + 123) = 0LL;
  *((_QWORD *)a1 + 124) = 0LL;
  *((_QWORD *)a1 + 125) = 0LL;
  *((_QWORD *)a1 + 126) = 0LL;
  *((_QWORD *)a1 + 127) = 0LL;
  *((_QWORD *)a1 + 128) = 0LL;
  *((_DWORD *)a1 + 258) = 0;
  *((_DWORD *)a1 + 259) = 1;
  *((_DWORD *)a1 + 260) = 72;
  *(_OWORD *)a1 = 0LL;
  RtlInitializeSRWLock(a1);
  *((_DWORD *)a1 + 2) = 0;
  v2 = (_QWORD *)((char *)a1 + 16);
  v3 = 7LL;
  do
  {
    CemRcTableInitialize((__int64)HampClientDestroy, v2);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  CemRcTableInitialize((__int64)HampActDestroy, (_QWORD *)a1 + 55);
  memset_0((char *)a1 + 352, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampSessionDestroy, (_QWORD *)a1 + 49);
  *((_QWORD *)a1 + 63) = (char *)a1 + 496;
  *((_QWORD *)a1 + 62) = (char *)a1 + 496;
  memset_0((char *)a1 + 568, 0, 0x78uLL);
  *((_QWORD *)a1 + 70) = a1;
  *((_DWORD *)a1 + 165) = 300000;
  *((_DWORD *)a1 + 166) = 30000;
  *((_BYTE *)a1 + 677) = 0;
  *((_QWORD *)a1 + 75) = 0LL;
  *((_QWORD *)a1 + 78) = 0LL;
  *((_QWORD *)a1 + 76) = 0LL;
  *((_QWORD *)a1 + 77) = 0LL;
  *((_QWORD *)a1 + 74) = a1;
  *((_OWORD *)a1 + 33) = 0LL;
  *((_OWORD *)a1 + 34) = 0LL;
  memset_0((char *)a1 + 696, 0, 0x68uLL);
  *((_QWORD *)a1 + 86) = a1;
  CemRcTableInitialize((__int64)HampWakeContextQueueDestroy, (_QWORD *)a1 + 90);
  *((_QWORD *)a1 + 96) = 0LL;
  *((_QWORD *)a1 + 97) = 0LL;
  CempLockInitialize((__int64)a1 + 704);
  *((_DWORD *)a1 + 196) = 10000;
  *((_DWORD *)a1 + 197) = 10000;
  HampHostIdStoreInitialize(
    (struct _TP_CALLBACK_ENVIRON_V3 *)((char *)a1 + 976),
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800));
  *((_QWORD *)a1 + 132) = (char *)a1 + 1048;
  *((_QWORD *)a1 + 131) = (char *)a1 + 1048;
  *((_OWORD *)a1 + 57) = xmmword_1800BC458;
  *((_OWORD *)a1 + 58) = xmmword_1800BC468;
  *((_DWORD *)a1 + 268) = 900000;
  *((_OWORD *)a1 + 59) = xmmword_1800BC478;
  *((_DWORD *)a1 + 272) ^= (*((_DWORD *)a1 + 272) ^ HampSystemGetQuiesceSerializationConfig()) & 3;
}
