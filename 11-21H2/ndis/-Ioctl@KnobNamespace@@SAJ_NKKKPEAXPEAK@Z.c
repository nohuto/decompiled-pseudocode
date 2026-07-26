/*
 * XREFs of ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C0133CF4
 * Callers:
 *     ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x1C01247B4 (-ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C010B2CC (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z @ 0x1C0133970 (-ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z.c)
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x1C0133A04 (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     CopyKnobInformationToIoctl @ 0x1C0133AE4 (CopyKnobInformationToIoctl.c)
 *     ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x1C0133B78 (-EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z.c)
 *     ?FindById@KnobNamespace@@CAPEAV1@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x1C0133C14 (-FindById@KnobNamespace@@CAPEAV1@PEBU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z @ 0x1C0134048 (-QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1C0134114 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z @ 0x1C01341EC (-SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1C01342D0 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall KnobNamespace::Ioctl(char a1, int a2, unsigned int a3, unsigned int a4, char *a5, unsigned int *a6)
{
  unsigned int *v6; // r14
  unsigned int v7; // ebx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  bool *v14; // rdi
  KnobNamespace *v15; // rax
  int v16; // ecx
  char v17; // r8
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  bool *v23; // rdi
  KnobNamespace *v24; // rax
  unsigned int updated; // eax
  bool v26; // zf
  KLockHolder *v27; // rcx
  char *v28; // rdi
  KnobNamespace *v29; // rax
  char *v30; // rsi
  void (*v31)(void *, const wchar_t *); // rdx
  KnobNamespace *v32; // rcx
  KLockHolder v33; // [rsp+20h] [rbp-50h] BYREF
  struct NDIS_KNOB_INFORMATION v34; // [rsp+38h] [rbp-38h] BYREF
  bool v35; // [rsp+98h] [rbp+28h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v10 = a2 - 1198084;
  if ( !v10 )
  {
    if ( a3 >= 0x18 && a4 >= 0xC )
    {
      v30 = a5;
      if ( *(_DWORD *)a5 == 1 )
      {
        LODWORD(v34.CurrentValue) = 0;
        v34.DefaultValue = (unsigned __int64)&unk_1C00ECDE0;
        LOBYTE(v34.MinimumValue) = 0;
        KLockHolder::AcquireShared((KLockHolder *)&v34);
        v32 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v30 + 4));
        if ( v32 )
        {
          *(_QWORD *)&v33.m_State = 0LL;
          *(_QWORD *)v30 = 0LL;
          *((_DWORD *)&v33.m_Region + 1) = 0;
          v33.m_Lock = (KPushLockBase *)(v30 + 8);
          *(_DWORD *)&v33.m_Region.m_Entered = ((a4 - 8) >> 1) - 1;
          KnobNamespace::EnumerateKnobs(v32, v31, (__int64)&v33);
          *(_WORD *)&v33.m_Lock->m_Lock.0 = 0;
          v33.m_Lock = (KPushLockBase *)((char *)v33.m_Lock + 2);
          *(_QWORD *)v30 = *(_QWORD *)&v33.m_State;
          *v6 = LODWORD(v33.m_Lock) - (_DWORD)v30;
        }
        else
        {
          v7 = -1073741766;
        }
        v27 = (KLockHolder *)&v34;
        goto LABEL_54;
      }
      return 3221225560LL;
    }
    return 3221225507LL;
  }
  v11 = v10 - 8;
  if ( !v11 )
  {
    if ( a3 >= 0x1C && a4 >= 0x30 )
    {
      v28 = a5;
      if ( *(_DWORD *)a5 == 1 )
      {
        v33.m_State = Unlocked;
        v33.m_Lock = (KPushLockBase *)&unk_1C00ECDE0;
        v33.m_Region.m_Entered = 0;
        KLockHolder::AcquireShared(&v33);
        v29 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v28 + 4));
        if ( v29 )
        {
          if ( !*(_WORD *)&v28[2 * ((unsigned __int64)(a3 - 24) >> 1) + 22] )
          {
            memset(&v34, 0, sizeof(v34));
            if ( KnobNamespace::QueryKnobInformation(v29, (const wchar_t *)v28 + 12, &v34) )
            {
              *(_OWORD *)v28 = 0LL;
              *((_OWORD *)v28 + 1) = 0LL;
              *((_OWORD *)v28 + 2) = 0LL;
              CopyKnobInformationToIoctl((__int64)v28, (__int64)&v34);
              *v6 = 48;
            }
            else
            {
              v7 = -1073741772;
            }
            goto LABEL_36;
          }
          goto LABEL_42;
        }
        goto LABEL_32;
      }
      return 3221225560LL;
    }
    return 3221225507LL;
  }
  v12 = v11 - 16380;
  if ( v12 )
  {
    if ( v12 != 8 )
      return 3221225659LL;
    if ( a1 )
    {
      if ( a3 >= 0x2C && a4 >= 8 )
      {
        v14 = (bool *)a5;
        if ( *(_DWORD *)a5 == 1 )
        {
          v33.m_State = Unlocked;
          v33.m_Lock = (KPushLockBase *)&unk_1C00ECDE0;
          v33.m_Region.m_Entered = 0;
          KLockHolder::AcquireShared(&v33);
          v15 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v14 + 4));
          if ( v15 )
          {
            if ( *(_WORD *)&v14[2 * ((unsigned __int64)(a3 - 40) >> 1) + 38] )
            {
LABEL_42:
              v7 = -1073741811;
              goto LABEL_36;
            }
            v16 = *((_DWORD *)v14 + 6);
            v17 = 0;
            if ( v16 )
            {
              v18 = v16 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    v21 = v20 - 1;
                    if ( v21 )
                    {
                      if ( v21 != 1 )
                        goto LABEL_42;
                    }
                    else
                    {
                      v17 = 1;
                    }
                    v22 = KnobNamespace::SetKnobStoreValue(v15, (const wchar_t *)v14 + 20, *((_QWORD *)v14 + 4), v17);
                  }
                  else
                  {
                    v22 = KnobNamespace::SetKnobEphemeralValue(v15, (const wchar_t *)v14 + 20, *((_QWORD *)v14 + 4));
                  }
                  goto LABEL_25;
                }
              }
              else
              {
                v17 = 1;
              }
              v22 = KnobNamespace::ClearKnobStoreValue(v15, (const wchar_t *)v14 + 20, v17);
            }
            else
            {
              v22 = KnobNamespace::ClearKnobEphemeralValue(v15, (const wchar_t *)v14 + 20);
            }
LABEL_25:
            *v6 = 8;
            *(_QWORD *)v14 = 0LL;
            *((_DWORD *)v14 + 1) = v22;
            *v14 = v22 == -1073741102;
LABEL_36:
            v27 = &v33;
LABEL_54:
            KLockHolder::~KLockHolder(v27);
            return v7;
          }
LABEL_32:
          v7 = -1073741766;
          goto LABEL_36;
        }
        return 3221225560LL;
      }
      return 3221225507LL;
    }
    return 3221225506LL;
  }
  if ( !a1 )
    return 3221225506LL;
  if ( a3 >= 0x1C && a4 )
  {
    v23 = (bool *)a5;
    if ( *(_DWORD *)a5 == 1 )
    {
      v33.m_State = Unlocked;
      v33.m_Lock = (KPushLockBase *)&unk_1C00ECDE0;
      v33.m_Region.m_Entered = 0;
      KLockHolder::AcquireShared(&v33);
      v24 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v23 + 4));
      if ( v24 )
      {
        v35 = 0;
        updated = KnobNamespace::UpdateKnobs(v24, &v35);
        if ( updated )
        {
          v7 = updated;
        }
        else
        {
          v26 = !v35;
          *v6 = 1;
          *v23 = !v26;
        }
        goto LABEL_36;
      }
      goto LABEL_32;
    }
    return 3221225560LL;
  }
  return 3221225507LL;
}
