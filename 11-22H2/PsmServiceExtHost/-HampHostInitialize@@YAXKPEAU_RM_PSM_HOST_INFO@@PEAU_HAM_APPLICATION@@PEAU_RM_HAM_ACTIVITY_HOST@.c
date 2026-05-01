/*
 * XREFs of ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004C06C
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FF60 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     CempLockInitialize @ 0x1800114A4 (CempLockInitialize.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DFB0 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E51C (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180035BF8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall HampHostInitialize(
        char a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_APPLICATION *a3,
        struct _RM_HAM_ACTIVITY_HOST *a4)
{
  _OWORD *v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm1
  struct _RM_ACTIVITY_HOST *v11; // rbx
  unsigned __int8 IsPple; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  const unsigned __int16 *v17; // [rsp+58h] [rbp-10h] BYREF
  char v18; // [rsp+A0h] [rbp+38h] BYREF
  char v19; // [rsp+A8h] [rbp+40h] BYREF
  int v20; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+50h] BYREF

  memset_0(a4, 0, 0x430uLL);
  CempLockInitialize((__int64)a4);
  *((_QWORD *)a4 + 77) = (char *)a4 + 608;
  *((_QWORD *)a4 + 76) = (char *)a4 + 608;
  RtlInitializeConditionVariable((char *)a4 + 16);
  RtlInitializeConditionVariable((char *)a4 + 696);
  *((_OWORD *)a4 + 45) = 0LL;
  *((_QWORD *)a4 + 92) = -1LL;
  *(_OWORD *)((char *)a4 + 760) = 0LL;
  *((_QWORD *)a4 + 97) = -1LL;
  *((_QWORD *)a4 + 128) = -1LL;
  *((_QWORD *)a4 + 129) = -1LL;
  *((_QWORD *)a4 + 130) = -1LL;
  *((_QWORD *)a4 + 131) = -1LL;
  v8 = (_OWORD *)((char *)a4 + 24);
  *((_QWORD *)a4 + 83) = *((_QWORD *)a4 + 83) & 0xFFFFFFFFE003FFFFuLL | 0x19940000;
  v9 = 4LL;
  do
  {
    *v8 = *(_OWORD *)a2;
    v8[1] = *((_OWORD *)a2 + 1);
    v8[2] = *((_OWORD *)a2 + 2);
    v8[3] = *((_OWORD *)a2 + 3);
    v8[4] = *((_OWORD *)a2 + 4);
    v8[5] = *((_OWORD *)a2 + 5);
    v8[6] = *((_OWORD *)a2 + 6);
    v8 += 8;
    v10 = *((_OWORD *)a2 + 7);
    a2 = (struct _RM_PSM_HOST_INFO *)((char *)a2 + 128);
    *(v8 - 1) = v10;
    --v9;
  }
  while ( v9 );
  *v8 = *(_OWORD *)a2;
  v8[1] = *((_OWORD *)a2 + 1);
  *((_QWORD *)v8 + 4) = *((_QWORD *)a2 + 4);
  v11 = RmHostFromHamHost(a4);
  IsPple = RmpActivityHostIsPple(v11);
  *((_QWORD *)a4 + 102) = 1LL;
  *((_QWORD *)a4 + 83) &= ~0x200000000000000uLL;
  *((_QWORD *)a4 + 83) |= (unsigned __int64)(IsPple & 1) << 57;
  *((_BYTE *)a4 + 592) = (a1 & 2) != 0;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a4 + 99) = a3;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v17 = (const unsigned __int16 *)((char *)a4 + 24);
    v21 = (__int64)v11 + 552;
    v20 = *((_DWORD *)v11 + 155);
    v18 = *((_BYTE *)a4 + 592);
    v19 = *((_BYTE *)v11 + 624);
    v16 = *((_QWORD *)v11 + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v13,
      byte_1800BFE21,
      v14,
      v15,
      &v17,
      (__int64)&v16,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v20,
      &v21);
  }
}
