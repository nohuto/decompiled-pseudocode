/*
 * XREFs of HalpIommuInitializeAll @ 0x140A543D8
 * Callers:
 *     HalpInterruptReinitialize @ 0x140A505D4 (HalpInterruptReinitialize.c)
 *     HalpIommuInitSystem @ 0x140A55270 (HalpIommuInitSystem.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     HalpInterruptIsRemappingRequired @ 0x140252460 (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuUpdatePageTableLevel @ 0x1403B6420 (HalpIommuUpdatePageTableLevel.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x1403B6450 (HalpIommuUpdatePageWalkCapability.c)
 *     HalpMmAllocateMemory @ 0x1403BECF8 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403DD65C (HalpIommuPopulateExceptionList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpIommuConfigureInterrupt @ 0x140517DCC (HalpIommuConfigureInterrupt.c)
 *     HalpGetIrtEntryCount @ 0x14051DB18 (HalpGetIrtEntryCount.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     HalpIommuConstructReservedPageTables @ 0x140A61CF4 (HalpIommuConstructReservedPageTables.c)
 */

__int64 __fastcall HalpIommuInitializeAll(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 *v8; // r14
  __int64 result; // rax
  char v10; // al
  __int64 *v11; // rdi
  __int64 v12; // r12
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // ebx
  __int64 Memory; // rax
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // edx
  const char *v20; // rcx
  __int64 v21; // r8
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !a1 && (int)HalpIommuPopulateExceptionList() < 0 )
    return 3221225473LL;
  if ( HalpHvIommu )
  {
    if ( HalpHvCpuManager )
    {
      HviGetHardwareFeatures((__int64)&v25, a2, a3, a4);
      v10 = BYTE4(v25);
      if ( BYTE4(v25) )
        goto LABEL_52;
    }
    return 0LL;
  }
  if ( IommuRemappingPolicy && (__int64 *)HalpIommuList == &HalpIommuList )
    return 3221225659LL;
  v6 = 0;
  v7 = 0x10000LL;
  do
  {
    v8 = (__int64 *)HalpIommuList;
    while ( v8 != &HalpIommuList )
    {
      v11 = v8;
      v12 = (__int64)v8;
      v8 = (__int64 *)*v8;
      v13 = *((_DWORD *)v11 + 118);
      if ( (v13 & 0x40) == 0 && IommuRemappingPolicy )
        return 3221225659LL;
      v14 = (v11[59] & 0x20) != 0;
      if ( (v13 & 0x100) != 0 )
      {
        if ( !v6 && !a1 )
        {
          v15 = *((_DWORD *)v11 + 110);
          if ( v15 > 0x10000 )
            v15 = 0x10000;
          Memory = HalpMmAllocateMemory(4 * ((v15 + 32) >> 5));
          *((_DWORD *)v11 + 114) = v15;
          v11[58] = Memory;
          RtlClearAllBits((PRTL_BITMAP)(v11 + 57));
          v11[56] = 0LL;
        }
        v14 = (HalpIommuPolicy == 3) + 1;
LABEL_28:
        if ( !v6 )
        {
          if ( !a1 )
          {
            v17 = v11[68];
            if ( v17 )
            {
              v18 = *((_DWORD *)v11 + 118);
              if ( (v18 & 0x100) != 0
                && ((int)HalpIommuConstructReservedPageTables(a2, v17, (unsigned int)((unsigned __int16)v18 >> 13) + 1) < 0
                 || ((int (__fastcall *)(__int64, _QWORD, __int64))v11[42])(
                      v11[2],
                      *(unsigned int *)v11[68],
                      v11[68] + 8) < 0) )
              {
                return 3221225473LL;
              }
            }
          }
          *(_QWORD *)&v23 = 0LL;
          HIDWORD(v24) = 0;
          *((_QWORD *)&v23 + 1) = __PAIR64__(IommuRemappingPolicy, v14);
          LODWORD(v24) = HalpGetIrtEntryCount();
          if ( ((int (__fastcall *)(__int64, __int128 *))v11[7])(v11[2], &v23) < 0 )
            return 3221225473LL;
        }
        if ( v6 >= 2 )
        {
          if ( v11[36] )
          {
            if ( a1 )
            {
              if ( (v11[47] & 2) != 0 )
              {
                LOBYTE(v7) = 1;
                result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v11[33])(
                           v11[2],
                           v7,
                           v11[62],
                           *((unsigned int *)v11 + 126));
                if ( (int)result < 0 )
                  return result;
              }
              ((void (__fastcall *)(__int64, __int64))v11[34])(v11[2], v7);
            }
            else
            {
              *((_QWORD *)&v22 + 1) = (unsigned __int16)(KiProcessorIndexToNumberMappingTable[0] >> 6);
              *(_QWORD *)&v22 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
              if ( !HalpInterruptIsRemappingRequired() || (v19 = 6, (v11[59] & 0x10) != 0) )
                v19 = 1073741822;
              HalpIommuConfigureInterrupt(v12, v19, &v22);
            }
          }
        }
        else
        {
          LOBYTE(a3) = a1;
          result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v11[8])(v11[2], v6, a3);
          if ( (int)result < 0 )
            return result;
        }
        v7 = 0x10000LL;
      }
      else if ( (v13 & 0x20) != 0 || IommuRemappingPolicy )
      {
        goto LABEL_28;
      }
    }
    ++v6;
  }
  while ( v6 < 3 );
  HalpIommuUpdatePageWalkCapability();
  HalpIommuUpdatePageTableLevel();
  if ( !HalpIommuMaxPageTableDepth )
    return 0LL;
  v10 = 12;
  v20 = "\t";
  HalpIommuDomainMaxInputBitWidth = 12;
  v21 = (unsigned int)HalpIommuMaxPageTableDepth;
  do
  {
    v10 += *v20;
    v20 += 4;
    --v21;
  }
  while ( v21 );
LABEL_52:
  HalpIommuDomainMaxInputBitWidth = v10;
  return 0LL;
}
