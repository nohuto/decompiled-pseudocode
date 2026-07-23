/*
 * XREFs of sub_1402D0930 @ 0x1402D0930
 * Callers:
 *     sub_1402091B0 @ 0x1402091B0 (sub_1402091B0.c)
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 *     PsQueryProcessCommandLine @ 0x140241D20 (PsQueryProcessCommandLine.c)
 *     sub_14024E388 @ 0x14024E388 (sub_14024E388.c)
 *     sub_14025E9D0 @ 0x14025E9D0 (sub_14025E9D0.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_140302650 @ 0x140302650 (sub_140302650.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140375ED0 @ 0x140375ED0 (sub_140375ED0.c)
 *     sub_14038A880 @ 0x14038A880 (sub_14038A880.c)
 *     sub_140394080 @ 0x140394080 (sub_140394080.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     sub_14056C6B8 @ 0x14056C6B8 (sub_14056C6B8.c)
 *     sub_14056FA60 @ 0x14056FA60 (sub_14056FA60.c)
 *     sub_140573408 @ 0x140573408 (sub_140573408.c)
 *     sub_14058196C @ 0x14058196C (sub_14058196C.c)
 *     sub_14058FE88 @ 0x14058FE88 (sub_14058FE88.c)
 *     sub_14059774C @ 0x14059774C (sub_14059774C.c)
 *     sub_1405A6204 @ 0x1405A6204 (sub_1405A6204.c)
 *     sub_1405BB938 @ 0x1405BB938 (sub_1405BB938.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1405F7344 @ 0x1405F7344 (sub_1405F7344.c)
 *     sub_1405F774C @ 0x1405F774C (sub_1405F774C.c)
 *     sub_140641840 @ 0x140641840 (sub_140641840.c)
 *     sub_14067259C @ 0x14067259C (sub_14067259C.c)
 *     sub_140672BD8 @ 0x140672BD8 (sub_140672BD8.c)
 *     sub_140673B4C @ 0x140673B4C (sub_140673B4C.c)
 *     sub_1406747FC @ 0x1406747FC (sub_1406747FC.c)
 *     sub_140682D84 @ 0x140682D84 (sub_140682D84.c)
 *     sub_140682EA4 @ 0x140682EA4 (sub_140682EA4.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_1406B48F0 @ 0x1406B48F0 (sub_1406B48F0.c)
 *     sub_1406C9C7C @ 0x1406C9C7C (sub_1406C9C7C.c)
 *     sub_1406D94F0 @ 0x1406D94F0 (sub_1406D94F0.c)
 *     sub_1406D98F8 @ 0x1406D98F8 (sub_1406D98F8.c)
 *     sub_1406E5B58 @ 0x1406E5B58 (sub_1406E5B58.c)
 *     sub_1406E616C @ 0x1406E616C (sub_1406E616C.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     sub_1406F60E8 @ 0x1406F60E8 (sub_1406F60E8.c)
 *     sub_1406F6A30 @ 0x1406F6A30 (sub_1406F6A30.c)
 *     sub_1406F71A0 @ 0x1406F71A0 (sub_1406F71A0.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 *     sub_140700F70 @ 0x140700F70 (sub_140700F70.c)
 *     sub_1407028B8 @ 0x1407028B8 (sub_1407028B8.c)
 *     sub_1407049DC @ 0x1407049DC (sub_1407049DC.c)
 *     MmProbeAndLockProcessPages @ 0x140708890 (MmProbeAndLockProcessPages.c)
 *     sub_1407096A4 @ 0x1407096A4 (sub_1407096A4.c)
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_14070AE08 @ 0x14070AE08 (sub_14070AE08.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 *     sub_140756164 @ 0x140756164 (sub_140756164.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_14079350C @ 0x14079350C (sub_14079350C.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140798F44 @ 0x140798F44 (sub_140798F44.c)
 *     sub_14079EE84 @ 0x14079EE84 (sub_14079EE84.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_1407A2CB0 @ 0x1407A2CB0 (sub_1407A2CB0.c)
 *     sub_1407A2E10 @ 0x1407A2E10 (sub_1407A2E10.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 *     sub_1407A4774 @ 0x1407A4774 (sub_1407A4774.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 *     sub_1407AF4B0 @ 0x1407AF4B0 (sub_1407AF4B0.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_1407BEBF0 @ 0x1407BEBF0 (sub_1407BEBF0.c)
 *     sub_1407DC0D0 @ 0x1407DC0D0 (sub_1407DC0D0.c)
 *     sub_1407DF200 @ 0x1407DF200 (sub_1407DF200.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_1407E4964 @ 0x1407E4964 (sub_1407E4964.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 *     sub_14080CD20 @ 0x14080CD20 (sub_14080CD20.c)
 *     sub_140814660 @ 0x140814660 (sub_140814660.c)
 *     sub_14082A644 @ 0x14082A644 (sub_14082A644.c)
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     sub_140860DAC @ 0x140860DAC (sub_140860DAC.c)
 *     sub_1408824D0 @ 0x1408824D0 (sub_1408824D0.c)
 *     sub_140927394 @ 0x140927394 (sub_140927394.c)
 *     sub_1409279CC @ 0x1409279CC (sub_1409279CC.c)
 *     sub_140927C7C @ 0x140927C7C (sub_140927C7C.c)
 *     sub_140927D44 @ 0x140927D44 (sub_140927D44.c)
 *     sub_14092972C @ 0x14092972C (sub_14092972C.c)
 *     sub_140929C60 @ 0x140929C60 (sub_140929C60.c)
 *     sub_1409348AC @ 0x1409348AC (sub_1409348AC.c)
 *     sub_140934B80 @ 0x140934B80 (sub_140934B80.c)
 *     sub_14096324C @ 0x14096324C (sub_14096324C.c)
 *     sub_140967328 @ 0x140967328 (sub_140967328.c)
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 *     sub_140973630 @ 0x140973630 (sub_140973630.c)
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 *     sub_14097723C @ 0x14097723C (sub_14097723C.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 *     sub_1409780D4 @ 0x1409780D4 (sub_1409780D4.c)
 *     sub_140978430 @ 0x140978430 (sub_140978430.c)
 *     sub_140978B04 @ 0x140978B04 (sub_140978B04.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 *     sub_14097A9C4 @ 0x14097A9C4 (sub_14097A9C4.c)
 *     sub_14097AC04 @ 0x14097AC04 (sub_14097AC04.c)
 *     sub_14097AD20 @ 0x14097AD20 (sub_14097AD20.c)
 *     sub_14097B220 @ 0x14097B220 (sub_14097B220.c)
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 *     sub_14097FF40 @ 0x14097FF40 (sub_14097FF40.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 *     sub_140980A20 @ 0x140980A20 (sub_140980A20.c)
 *     sub_140980DD8 @ 0x140980DD8 (sub_140980DD8.c)
 *     sub_140982B6C @ 0x140982B6C (sub_140982B6C.c)
 *     sub_140983B80 @ 0x140983B80 (sub_140983B80.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 *     PsQueryProcessExceptionFlags @ 0x1409AD320 (PsQueryProcessExceptionFlags.c)
 *     sub_1409ADDA4 @ 0x1409ADDA4 (sub_1409ADDA4.c)
 *     sub_1409AE050 @ 0x1409AE050 (sub_1409AE050.c)
 *     sub_1409AEAA0 @ 0x1409AEAA0 (sub_1409AEAA0.c)
 *     sub_1409AF550 @ 0x1409AF550 (sub_1409AF550.c)
 *     sub_1409AFB7C @ 0x1409AFB7C (sub_1409AFB7C.c)
 *     sub_1409AFE9C @ 0x1409AFE9C (sub_1409AFE9C.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 *     sub_1409DA4D0 @ 0x1409DA4D0 (sub_1409DA4D0.c)
 *     sub_1409E47C4 @ 0x1409E47C4 (sub_1409E47C4.c)
 *     sub_1409E4A50 @ 0x1409E4A50 (sub_1409E4A50.c)
 *     sub_1409EB400 @ 0x1409EB400 (sub_1409EB400.c)
 *     sub_1409F1110 @ 0x1409F1110 (sub_1409F1110.c)
 *     sub_1409F5570 @ 0x1409F5570 (sub_1409F5570.c)
 *     sub_140A07780 @ 0x140A07780 (sub_140A07780.c)
 *     sub_140A6A570 @ 0x140A6A570 (sub_140A6A570.c)
 *     sub_140A70F90 @ 0x140A70F90 (sub_140A70F90.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4770 @ 0x140AB4770 (sub_140AB4770.c)
 *     sub_140B0D974 @ 0x140B0D974 (sub_140B0D974.c)
 *     sub_140B0DAC4 @ 0x140B0DAC4 (sub_140B0DAC4.c)
 *     sub_140B313B8 @ 0x140B313B8 (sub_140B313B8.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402D0BA0 @ 0x1402D0BA0 (sub_1402D0BA0.c)
 *     sub_1402D0C60 @ 0x1402D0C60 (sub_1402D0C60.c)
 *     sub_1402D0CE0 @ 0x1402D0CE0 (sub_1402D0CE0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 */

__int64 __fastcall sub_1402D0930(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r15
  int v6; // esi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // r9
  struct _KPRCB *v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  __int64 v30; // r8
  int v31; // eax
  int v32; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+10h]
  int v34; // [rsp+70h] [rbp+18h] BYREF

  v33 = a2;
  result = *(_QWORD *)(a1 + 32);
  v3 = a2;
  if ( result != 1 )
  {
    if ( result )
    {
      return sub_1403470F0(a1, a2);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v5 = *((_QWORD *)CurrentThread + 23);
      v6 = a2 & 2;
      if ( (a2 & 2) != 0 )
      {
        CurrentIrql = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = 0;
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v9 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v14 = *(_DWORD *)(v9 + 24);
            *(_DWORD *)(v9 + 24) = v14 + 1;
            if ( v14 == -1 )
LABEL_32:
              sub_140418E4C(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
        {
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v12 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v15 = *(_DWORD *)(v12 + 24) - 1;
              *(_DWORD *)(v12 + 24) = v15;
              if ( !v15 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          do
            sub_1402F32E0(&v32);
          while ( *((_QWORD *)CurrentThread + 8) );
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v13 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v16 = *(_DWORD *)(v13 + 24);
              *(_DWORD *)(v13 + 24) = v16 + 1;
              if ( v16 == -1 )
                goto LABEL_32;
            }
          }
        }
      }
      if ( *((_BYTE *)CurrentThread + 193) )
      {
        do
        {
          if ( *((_WORD *)CurrentThread + 243) || CurrentIrql )
            break;
          sub_140224100((__int64)CurrentThread);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v17 = KeGetCurrentPrcb();
              v18 = *((_QWORD *)v17 + 4375);
              v19 = (*(_DWORD *)(v18 + 20) & 0xFFFF0001) == 0;
              *(_DWORD *)(v18 + 20) &= 0xFFFF0001;
              if ( v19 )
                sub_140418E4C(v17);
            }
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v21 = KeGetCurrentPrcb();
          v34 = 0;
          v22 = *((_QWORD *)v21 + 4375);
          if ( v22 )
          {
            if ( *((_BYTE *)v21 + 32) <= 1u )
            {
              v23 = *(_DWORD *)(v22 + 24);
              *(_DWORD *)(v22 + 24) = v23 + 1;
              if ( v23 == -1 )
LABEL_53:
                sub_140418E4C(v21);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
          {
            v24 = *((_QWORD *)v21 + 4375);
            if ( v24 )
            {
              if ( *((_BYTE *)v21 + 32) <= 1u )
              {
                v25 = *(_DWORD *)(v24 + 24) - 1;
                *(_DWORD *)(v24 + 24) = v25;
                if ( !v25 )
                  sub_140418E4C(v21);
              }
            }
            do
              sub_1402F32E0(&v34);
            while ( *((_QWORD *)CurrentThread + 8) );
            v26 = *((_QWORD *)v21 + 4375);
            if ( v26 )
            {
              if ( *((_BYTE *)v21 + 32) <= 1u )
              {
                v27 = *(_DWORD *)(v26 + 24);
                *(_DWORD *)(v26 + 24) = v27 + 1;
                if ( v27 == -1 )
                  goto LABEL_53;
              }
            }
          }
        }
        while ( *((_BYTE *)CurrentThread + 193) );
        v3 = v33;
      }
      if ( !*((_BYTE *)CurrentThread + 586)
        || (*((_BYTE *)CurrentThread + 192) & 1) != 0
        || (v10 = (_QWORD *)((char *)CurrentThread + 152), (_QWORD *)*v10 != v10)
        || *((struct _KTHREAD **)CurrentThread + 21) != (struct _KTHREAD *)((char *)CurrentThread + 168) )
      {
        KeBugCheck(6u);
      }
      *((_DWORD *)CurrentThread + 29) |= 0x800u;
      sub_1402D0C60((char *)CurrentThread + 600, (char *)CurrentThread + 152);
      *((_QWORD *)CurrentThread + 79) = 0LL;
      *((_BYTE *)CurrentThread + 586) = 0;
      if ( v6 )
      {
        result = sub_1402D0BA0(*((_QWORD *)CurrentThread + 23), v5);
        *((_DWORD *)CurrentThread + 29) &= ~0x800u;
      }
      else
      {
        sub_140224100((__int64)CurrentThread);
        sub_1402D0BA0(*((_QWORD *)CurrentThread + 23), v5);
        *((_DWORD *)CurrentThread + 29) &= ~0x800u;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
            {
              v29 = KeGetCurrentPrcb();
              v30 = *((_QWORD *)v29 + 4375);
              v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v19 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
              *(_DWORD *)(v30 + 20) &= v31;
              if ( v19 )
                sub_140418E4C(v29);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( (v3 & 1) == 0 )
        result = sub_1402D0CE0(v5);
      if ( (_QWORD *)*v10 != v10 )
      {
        *((_BYTE *)CurrentThread + 193) = 1;
        return HalRequestSoftwareInterrupt(1);
      }
    }
  }
  return result;
}
