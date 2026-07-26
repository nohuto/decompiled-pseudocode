/*
 * XREFs of ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C013F9C8
 * Callers:
 *     ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x1C0130374 (-ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C011207C (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z @ 0x1C013F640 (-ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z.c)
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x1C013F6D4 (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     CopyKnobInformationToIoctl @ 0x1C013F7B8 (CopyKnobInformationToIoctl.c)
 *     ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x1C013F84C (-EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z.c)
 *     ?FindById@KnobNamespace@@CAPEAV1@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x1C013F8E8 (-FindById@KnobNamespace@@CAPEAV1@PEBU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z @ 0x1C013FD1C (-QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1C013FDE8 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z @ 0x1C013FEC0 (-SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1C013FFA4 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall KnobNamespace::Ioctl(char a1, int a2, unsigned int a3, unsigned int a4, char *a5, unsigned int *a6)
{
  unsigned int *v6; // r14
  unsigned int v7; // ebx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  char *v14; // rdi
  KnobNamespace *v15; // rax
  int v16; // ecx
  char v17; // r8
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  KnobNamespace *v23; // rax
  unsigned int updated; // eax
  bool v25; // zf
  KLockHolder *v26; // rcx
  char *v27; // rdi
  KnobNamespace *v28; // rax
  char *v29; // rsi
  void (*v30)(void *, const wchar_t *); // rdx
  KnobNamespace *v31; // rcx
  KLockHolder v32; // [rsp+20h] [rbp-50h] BYREF
  struct NDIS_KNOB_INFORMATION v33; // [rsp+38h] [rbp-38h] BYREF
  bool v34; // [rsp+98h] [rbp+28h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v10 = a2 - 1198084;
  if ( v10 )
  {
    v11 = v10 - 8;
    if ( v11 )
    {
      v12 = v11 - 16380;
      if ( v12 )
      {
        if ( v12 != 8 )
          return 3221225659LL;
        if ( a1 )
        {
          if ( a3 >= 0x2C && a4 >= 8 )
          {
            v14 = a5;
            if ( *(_DWORD *)a5 == 1 )
            {
              v32.m_State = Unlocked;
              v32.m_Lock = (KPushLockBase *)&unk_1C00F5DC0;
              v32.m_Region.m_Entered = 0;
              KLockHolder::AcquireShared(&v32);
              v15 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v14 + 4));
              if ( v15 )
              {
                if ( *(_WORD *)&v14[2 * ((unsigned __int64)(a3 - 40) >> 1) + 38] )
                {
LABEL_43:
                  v7 = -1073741811;
                  goto LABEL_37;
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
                            goto LABEL_43;
                        }
                        else
                        {
                          v17 = 1;
                        }
                        v22 = KnobNamespace::SetKnobStoreValue(
                                v15,
                                (const wchar_t *)v14 + 20,
                                *((_QWORD *)v14 + 4),
                                v17);
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
                LOBYTE(v22) = v22 == -1073741102;
LABEL_36:
                *v14 = v22;
                goto LABEL_37;
              }
              goto LABEL_32;
            }
            return 3221225560LL;
          }
          return 3221225507LL;
        }
        return 3221225506LL;
      }
      if ( !a1 )
        return 3221225506LL;
      if ( a3 < 0x1C || !a4 )
        return 3221225507LL;
      v14 = a5;
      if ( *(_DWORD *)a5 != 1 )
        return 3221225560LL;
      v32.m_State = Unlocked;
      v32.m_Lock = (KPushLockBase *)&unk_1C00F5DC0;
      v32.m_Region.m_Entered = 0;
      KLockHolder::AcquireShared(&v32);
      v23 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v14 + 4));
      if ( v23 )
      {
        v34 = 0;
        updated = KnobNamespace::UpdateKnobs(v23, &v34);
        if ( !updated )
        {
          v25 = !v34;
          *v6 = 1;
          v22 = !v25;
          goto LABEL_36;
        }
        v7 = updated;
LABEL_37:
        v26 = &v32;
LABEL_55:
        KLockHolder::~KLockHolder(v26);
        return v7;
      }
    }
    else
    {
      if ( a3 < 0x1C || a4 < 0x30 )
        return 3221225507LL;
      v27 = a5;
      if ( *(_DWORD *)a5 != 1 )
        return 3221225560LL;
      v32.m_State = Unlocked;
      v32.m_Lock = (KPushLockBase *)&unk_1C00F5DC0;
      v32.m_Region.m_Entered = 0;
      KLockHolder::AcquireShared(&v32);
      v28 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v27 + 4));
      if ( v28 )
      {
        if ( !*(_WORD *)&v27[2 * ((unsigned __int64)(a3 - 24) >> 1) + 22] )
        {
          memset(&v33, 0, sizeof(v33));
          if ( KnobNamespace::QueryKnobInformation(v28, (const wchar_t *)v27 + 12, &v33) )
          {
            *(_OWORD *)v27 = 0LL;
            *((_OWORD *)v27 + 1) = 0LL;
            *((_OWORD *)v27 + 2) = 0LL;
            CopyKnobInformationToIoctl((__int64)v27, (__int64)&v33);
            *v6 = 48;
          }
          else
          {
            v7 = -1073741772;
          }
          goto LABEL_37;
        }
        goto LABEL_43;
      }
    }
LABEL_32:
    v7 = -1073741766;
    goto LABEL_37;
  }
  if ( a3 >= 0x18 && a4 >= 0xC )
  {
    v29 = a5;
    if ( *(_DWORD *)a5 == 1 )
    {
      LODWORD(v33.CurrentValue) = 0;
      v33.DefaultValue = (unsigned __int64)&unk_1C00F5DC0;
      LOBYTE(v33.MinimumValue) = 0;
      KLockHolder::AcquireShared((KLockHolder *)&v33);
      v31 = KnobNamespace::FindById((const struct _CONFIG_KNOB_NAMESPACE *)(v29 + 4));
      if ( v31 )
      {
        *(_QWORD *)&v32.m_State = 0LL;
        *(_QWORD *)v29 = 0LL;
        *((_DWORD *)&v32.m_Region + 1) = 0;
        v32.m_Lock = (KPushLockBase *)(v29 + 8);
        *(_DWORD *)&v32.m_Region.m_Entered = ((a4 - 8) >> 1) - 1;
        KnobNamespace::EnumerateKnobs(v31, v30, (__int64)&v32);
        *(_WORD *)&v32.m_Lock->m_Lock.0 = 0;
        v32.m_Lock = (KPushLockBase *)((char *)v32.m_Lock + 2);
        *(_QWORD *)v29 = *(_QWORD *)&v32.m_State;
        *v6 = LODWORD(v32.m_Lock) - (_DWORD)v29;
      }
      else
      {
        v7 = -1073741766;
      }
      v26 = (KLockHolder *)&v33;
      goto LABEL_55;
    }
    return 3221225560LL;
  }
  return 3221225507LL;
}
