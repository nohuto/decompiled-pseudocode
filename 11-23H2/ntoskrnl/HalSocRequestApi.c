/*
 * XREFs of HalSocRequestApi @ 0x1403783EC
 * Callers:
 *     HalpApicSetupRegisterAccess @ 0x140377C1C (HalpApicSetupRegisterAccess.c)
 *     HalpArtAvailable @ 0x140377FF0 (HalpArtAvailable.c)
 *     HalpTscGetAttributes @ 0x1403782C4 (HalpTscGetAttributes.c)
 *     HalpRtcDiscover @ 0x140378F98 (HalpRtcDiscover.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037E8B4 (HalpIvtProcessDrhdEntry.c)
 *     HalpHvDiscover @ 0x1403A442C (HalpHvDiscover.c)
 *     HalpTscDiscover @ 0x1403A45A8 (HalpTscDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403A47BC (HalpApicTimerDiscover.c)
 *     HalpApicGetCpuInfo @ 0x1403A4F10 (HalpApicGetCpuInfo.c)
 *     HalpApicTimerIsInvariant @ 0x1403A4F98 (HalpApicTimerIsInvariant.c)
 *     HalpHvTimerInitialize @ 0x1403CD9F0 (HalpHvTimerInitialize.c)
 *     HalpVpptTimerRegister @ 0x14050A044 (HalpVpptTimerRegister.c)
 *     HalpHvCounterUpdateCallback @ 0x14051EBE0 (HalpHvCounterUpdateCallback.c)
 *     IvtInitializeIommu @ 0x140A89E10 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140A99260 (HsaInitializeIommu.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x140377F3C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpHvIsFrequencyAvailable @ 0x14037975C (HalpHvIsFrequencyAvailable.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037DB08 (HalpMmAllocateMemoryInternal.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memmove @ 0x140435700 (memmove.c)
 */

__int64 __fastcall HalSocRequestApi(__int64 a1, __int64 a2, int a3, __int64 a4, void *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r11d
  __int64 *v8; // r14
  char v9; // r10
  int v10; // r8d
  int v11; // r8d
  __int64 (__fastcall **v12)(); // rsi
  unsigned int v13; // ebx
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  _QWORD *i; // rax
  __int64 v19; // r8
  __int64 *MemoryInternal; // rax
  __int64 (__fastcall *v26)(); // [rsp+20h] [rbp-40h] BYREF
  __int128 v27; // [rsp+28h] [rbp-38h] BYREF
  __int128 v28; // [rsp+38h] [rbp-28h] BYREF
  __int128 v29; // [rsp+48h] [rbp-18h]

  v5 = 0;
  v26 = 0LL;
  v6 = a4;
  v8 = 0LL;
  v9 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v10 = a3 - 1;
  if ( !v10 )
  {
    v12 = HalpTimerCmosApi;
    goto LABEL_4;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v15 = v11 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v13 = 8;
        v26 = HalpSocApiAllocatePhysicalMemory;
        v12 = &v26;
        goto LABEL_5;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v12 = (__int64 (__fastcall **)())&v28;
        v28 = xmmword_140C62488;
        v8 = &HalpTimerHvApicCallbackList;
        v9 = 1;
        goto LABEL_4;
      }
      v19 = (unsigned int)(v17 - 1);
      if ( (_DWORD)v19 )
      {
        if ( (_DWORD)v19 != 1 )
        {
          HalpTimerLastProblem = 27;
          return (unsigned int)-1073741811;
        }
        v12 = HalpTimerSkipApi;
        goto LABEL_4;
      }
      if ( (unsigned __int8)HalpHvIsFrequencyAvailable(a1, a2, v19, a4, v26) )
      {
        *(_QWORD *)&v27 = HalpHvGetTscFrequency;
        v12 = (__int64 (__fastcall **)())&v27;
        *((_QWORD *)&v27 + 1) = HalpHvGetApicFrequency;
        goto LABEL_4;
      }
    }
    else if ( HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v29 = 0LL;
      LODWORD(v29) = _RAX;
      if ( (_RAX & 2) != 0 )
      {
        v12 = (__int64 (__fastcall **)())&HalpTimerHypervisorReferenceTime;
        HalpTimerHypervisorReferenceTime = qword_140C624A8;
        v8 = (__int64 *)&HalpTimerHvReferenceCallbackList;
        v13 = 8;
        v9 = 1;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741637;
  }
  v12 = &HalpTimerPcCpuApi;
LABEL_4:
  v13 = 16;
LABEL_5:
  if ( !a5 || v6 > v13 )
  {
    HalpTimerLastProblem = 28;
    return (unsigned int)-1073741811;
  }
  if ( v6 < v13 )
  {
    v5 = -1073741789;
    HalpTimerLastProblem = 28;
    return v5;
  }
  if ( !v9 )
    goto LABEL_9;
  if ( !a2 )
    return (unsigned int)-1073741811;
  for ( i = (_QWORD *)*v8; i; i = (_QWORD *)*i )
  {
    if ( i[1] == a2 )
      goto LABEL_9;
  }
  MemoryInternal = (__int64 *)HalpMmAllocateMemoryInternal(16LL, 1LL);
  if ( !MemoryInternal )
    return (unsigned int)-1073741801;
  MemoryInternal[1] = a2;
  *MemoryInternal = *v8;
  *v8 = (__int64)MemoryInternal;
LABEL_9:
  memmove(a5, v12, v13);
  return v5;
}
