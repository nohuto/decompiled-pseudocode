/*
 * XREFs of sub_1408236BC @ 0x1408236BC
 * Callers:
 *     PoFxRegisterDevice @ 0x140823470 (PoFxRegisterDevice.c)
 *     PoFxEnableDStateReporting @ 0x14098CC20 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterPrimaryDevice @ 0x14098CDC0 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_1403B9C64 @ 0x1403B9C64 (sub_1403B9C64.c)
 *     sub_1403BA794 @ 0x1403BA794 (sub_1403BA794.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_140823988 @ 0x140823988 (sub_140823988.c)
 *     sub_14082473C @ 0x14082473C (sub_14082473C.c)
 *     sub_14085475C @ 0x14085475C (sub_14085475C.c)
 */

__int64 __fastcall sub_1408236BC(
        PDEVICE_OBJECT DeviceObject,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v11; // rsi
  PDEVICE_OBJECT v12; // rbp
  ULONG_PTR *v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+50h] [rbp-28h] BYREF

  v20 = 0LL;
  v11 = sub_14036B86C((__int64)DeviceObject, 0x78466F50u);
  if ( !v11 )
  {
    v16 = -1073741811;
    goto LABEL_10;
  }
  v12 = sub_1402D30A0(DeviceObject, 0x78466F50u);
  if ( !v12 )
  {
    v16 = -1073741811;
LABEL_15:
    ObfDereferenceObjectWithTag(v11, 0x78466F50u);
    goto LABEL_10;
  }
  v13 = *(ULONG_PTR **)(v11[39] + 40LL);
  if ( !v13 )
  {
    v16 = -1073741811;
LABEL_11:
    ObfDereferenceObjectWithTag(v12, 0x78466F50u);
    goto LABEL_15;
  }
  _m_prefetchw(v13 + 37);
  v14 = *((_DWORD *)v13 + 74);
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)v13 + 74, v14, v14);
  }
  while ( v15 != v14 );
  if ( (v14 & 1) == 0 )
  {
    v16 = -1073741661;
    goto LABEL_11;
  }
  v16 = sub_140823988(v13[18], (int)v13 + 128, a2, a3, a4, a5, v12->StackSize + 1, a6, (__int64)&v20);
  if ( v16 < 0 )
  {
    v20 = 0LL;
    goto LABEL_11;
  }
  v20[6] = v13;
  if ( v13[10] )
    sub_1405CAE6C(0x600uLL, v13[4], 0LL, 0LL);
  sub_14085475C(v13, v20 + 149);
  sub_1403BA794((__int64)v13, (__int64)v20);
  ObfReferenceObjectWithTag(DeviceObject, 0x78466F50u);
  v20[12] = DeviceObject;
  v20[13] = v12;
  sub_14082473C(v20, 0LL);
  sub_1403B9C64(v18, v17, v20);
  v16 = 0;
LABEL_10:
  *a7 = v20;
  return (unsigned int)v16;
}
