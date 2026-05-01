/*
 * XREFs of ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18004BA4C
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004B758 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x180006914 (CemRcTableInitialize.c)
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x18004BC90 (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampManagerInitialize(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  char QuiesceSerializationConfig; // al

  memset_0((char *)a1 + 16, 0, 0x308uLL);
  *(__m128i *)&HampNextHandleValues = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  xmmword_1800DD470 = *(_OWORD *)&HampNextHandleValues;
  unk_1800DD480 = *(_OWORD *)&HampNextHandleValues;
  xmmword_1800DD490 = *(_OWORD *)&HampNextHandleValues;
  *(_OWORD *)a1 = 0LL;
  RtlInitializeSRWLock(a1);
  v2 = (_QWORD *)((char *)a1 + 16);
  *((_DWORD *)a1 + 2) = 0;
  v3 = 7LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  CemRcTableInitialize((__int64)HampActDestroy, (_QWORD *)a1 + 27);
  memset_0((char *)a1 + 128, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampSessionDestroy, (_QWORD *)a1 + 21);
  *((_QWORD *)a1 + 35) = (char *)a1 + 272;
  *((_QWORD *)a1 + 34) = (char *)a1 + 272;
  memset_0((char *)a1 + 344, 0, 0x78uLL);
  *((_QWORD *)a1 + 42) = a1;
  *((_DWORD *)a1 + 109) = 300000;
  *((_DWORD *)a1 + 110) = 30000;
  *((_BYTE *)a1 + 453) = 0;
  *((_QWORD *)a1 + 47) = 0LL;
  *((_QWORD *)a1 + 50) = 0LL;
  *((_QWORD *)a1 + 48) = 0LL;
  *((_QWORD *)a1 + 49) = 0LL;
  *((_QWORD *)a1 + 46) = a1;
  *((_OWORD *)a1 + 19) = 0LL;
  *((_OWORD *)a1 + 20) = 0LL;
  memset_0((char *)a1 + 472, 0, 0x68uLL);
  *((_QWORD *)a1 + 58) = a1;
  CemRcTableInitialize((__int64)HampWakeContextQueueDestroy, (_QWORD *)a1 + 62);
  *((_QWORD *)a1 + 68) = 0LL;
  *((_QWORD *)a1 + 69) = 0LL;
  *((_OWORD *)a1 + 30) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 480);
  *((_DWORD *)a1 + 122) = 0;
  *((_DWORD *)a1 + 140) = 10000;
  *((_DWORD *)a1 + 141) = 10000;
  memset_0((char *)a1 + 592, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampHostIdStoreSessionDestroy, (_QWORD *)a1 + 79);
  *((_OWORD *)a1 + 36) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 576);
  *((_DWORD *)a1 + 146) = 0;
  *((_QWORD *)a1 + 93) = (char *)a1 + 736;
  *((_QWORD *)a1 + 92) = (char *)a1 + 736;
  *(_OWORD *)((char *)a1 + 680) = xmmword_1800B9B40;
  *(_OWORD *)((char *)a1 + 696) = xmmword_1800B9B50;
  *(_OWORD *)((char *)a1 + 712) = xmmword_1800B9B60;
  QuiesceSerializationConfig = HampSystemGetQuiesceSerializationConfig();
  *((_DWORD *)a1 + 195) &= 0xFFFFFFFC;
  *((_DWORD *)a1 + 195) |= QuiesceSerializationConfig & 3;
}
